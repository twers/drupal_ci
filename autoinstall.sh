#!/bin/sh

if [ $# -ne 2 ]; then
  echo "  Arguments: username password"
  echo "  Example: ./autoinstall.sh admin pass"
  exit 1
fi

drush make profiles/drupal_ci/drupal_ci.make -y --no-core &&
drush si drupal_ci -y --account-name=$1 --account-pass=$2 &&
ln -sfh `pwd` /Applications/XAMPP/xamppfiles/htdocs/drupal_ci
