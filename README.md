#Install Local Drupal Repository
-------------------------
This is a manual that tell you how to install a drupal environment locally and automatically.
##Install XAMPP and Drush
Just make your local Server, Database and Drush ready. Normally we use XAMPP which contains lots of toole like Apache Web Server, MySql, PHP and phpmyadmin. But if you don't like, you can config each of them locally.

Drush means Drupal Shell, A great and cool command-line for drupal. Drush will help us to achieve drupal automation. Find it in [this page](http://drupal.org/project/drush) to install. If you also need `pear` command, this is [the installation manual](https://pear.php.net/manual/en/installation.php).

##build your code
###Step1 : clone the code
```
git clone https://github.com/twers/drupal_ci.git
cd drupal_ci
```
###Step2 : drush-make to get modules
```
drush make profiles/drupal_ci/drupal_ci.make -y --no-core
```
###Step3 : install this site
We don't need to open the website for installation anymore. It's perfectly installed automatically including the database.

```
drush si drupal_ci -y --account-name=yourname --account-pass=password
```
###Step4 : Done
visit your site in browser

```
open http://localhost/drupal_ci
```

##Tips
###What we should do after pulling code
Every time we pull the latest code, we should keep our local database updated. Run `drush feature-revert-all` or `drush fra` for short.

###What we should do if we want to push
if we want to push your code, please export the features at first in order to make the DB updated on build server. Run `drush features-update-all` or `drush fua` for short.

###What's the purpose for us using features
As a CMS application, Drupal will save content and configuration in database, that means we cannot easily deploy/migrate our db to build server. The [**Features**](http://drupal.org/project/features) module can let us treat the configuration for view, block, content type and more components like a file so that we can push it to build and revert the features on build, make the build environment same as your local.
