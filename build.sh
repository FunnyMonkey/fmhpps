#!/bin/bash
# These next few lines are defaults modify these to your local environment
# to avoid having to re-type at each rebuild.
DEFWEBROOT=/tmp
DEFWEBDIR=hpps
DEFGITUSER=git
DEFGITBRANCH=master
DEFGITURI=github.com:FunnyMonkey/hpps.git

MAKEFILE=hpps_install.make
GITCLONEDIR=hpps_install

echo "This build script requires drush and git"
echo "http://drupal.org/project/drush"

# No edits below here should be necessary
read -p "BUILDDIR [${DEFWEBROOT}]: " hppswebroot
hppswebroot=${hppswebroot:-$DEFWEBROOT}

read -p "BUILDNAME [${DEFWEBDIR}]: " hppswebdir
hppswebdir=${hppswebdir:-$DEFWEBDIR}

#read -p "GITUSER [${DEFGITUSER}]: " hppsgituser
hppsgituser=${hppsgituser:-$DEFGITUSER}

#read -p "GITURI [${DEFGITURI}]: " hppsgituri
hppsgituri=${hppsgituri:-$DEFGITURI}

#read -p "GIT BRANCH [${DEFGITBRANCH}]: " kf4hgitbranch
hppsgitbranch=${hppsgitbranch:-$DEFGITBRANCH}

echo "Downloading drupal core"
cd "${hppswebroot}"
drush -y dl --drupal-project-rename="${hppswebdir}" drupal
cd "${hppswebroot}/${hppswebdir}/profiles"

echo "Cloning julio repository"
git clone --recursive --branch 7.x-1.x http://git.drupal.org/project/julio.git

cd julio
echo "building julio..."
drush -y make --no-core --contrib-destination=. drupal-org.make

cd "${hppswebroot}/${hppswebdir}/sites/all/modules"
echo "cloning hpps..."
git clone git@github.com:FunnyMonkey/fmhpps.git hpps

echo "Downloading hpps modules"
drush -y make --no-core --contrib-destination=. hpps/hpps.make

echo "If you saw no errors your site is built at ${hppswebroot}/${hppswebdir}"