#!/bin/sh

function usage(){
  echo "Usage"
  echo ""
  echo "Auto commands are:"
  echo "  install   Install Drupal site"
}

function install(){
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
  drush si drupal_ci -y --account-name=$admin --account-pass=$password --site-name="$sitename" &&
  ln -sfh `pwd` /Applications/XAMPP/xamppfiles/htdocs/drupal_ci
}

if [ $# -eq 0 ]; then
  usage
else
  case $1 in
    "install")
      shift
      install $@
      ;;
    *)
      echo "'$1' is not a valid command."
      ;;
  esac
fi
