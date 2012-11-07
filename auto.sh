#!/bin/sh

usage(){
  cat <<-EOF
Usage

Auto commands are:
  install   Install Drupal site
  new       Create new feature from view
EOF
}

install(){
  if ! which mysql > /dev/null; then
    echo "Warning: Can't find mysql command. Please ensure you have manually set up clean database."
  fi
  
  if [ $# -eq 3 ]; then
    username=$1
    password=$2
    sitename=$3
  else
    echo "Using default username, password and site name."
    username=admin
    password=123
    sitename="Drupal"
  fi
  echo "Using account: $username:$password@$sitename"
  drush make profiles/drupal_ci/drupal_ci.make -y --no-core &&
  drush si drupal_ci -y --account-name=$username --account-pass=$password --site-name="$sitename" &&
  # ln -sfh `pwd` /Applications/XAMPP/xamppfiles/htdocs/drupal_ci
  git checkout sites/default/settings.php
  drush genc 10 0 --types=quiz
}

new(){
  if [ $# -ne 2 ]; then
    echo "Invalid arguments. Use: auto new <feature_name> <view_name>"
    exit 1
  fi

  featurename=$1
  viewname=$2
  echo "Create feature:$featurename from view:$viewname"
  drush fe -y --destination=sites/all/modules/custom/ $featurename views_view:$viewname &&
  drush en -y $featurename &&
  drush vr $viewname
}

if [ $# -eq 0 ]; then
  usage
else
  case $1 in
    "install")
      shift
      install "$@"
      ;;
    "new")
      shift
      new "$@"
      ;;
    *)
      echo "'$1' is not a valid command."
      ;;
  esac
fi
