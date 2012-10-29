#!/bin/sh

if [ $# -ne 3 ]; then
  echo "  Arguments: username password sitename"
  echo "  Example: ./autoinstall.sh admin pass drupal_ci"
  exit 1
fi

drush make profiles/drupal_ci/drupal_ci.make -y --no-core &&
drush si drupal_ci -y --account-name=$1 --account-pass=$2 --site-name=$3 &&
ln -sfh `pwd` /Applications/XAMPP/xamppfiles/htdocs/drupal_ci
