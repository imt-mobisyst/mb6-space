#!/bin/bash

# Setup local environment:
cd `dirname $0`/..
if [ ! -f local-config.toml ]; then
    cp ./bin/default-config.toml ./local-config.toml
fi

#source local-config.sh
WEBPAGES_MODULE=`toml get --toml-path local-config.toml webpages.module`
WEBPAGES_REPO=`toml get --toml-path local-config.toml webpages.target`

# Scripts actions:
echo ""
echo "DEPLOY $WEBPAGES_MODULE ON $WEBPAGES_REPO"
echo ""

exit

echo "--Build"
mkdocs build

echo ""
echo "--Copy"
if [ -d $WEBPAGES_REPO/$WEBPAGES_MODULE ]; then
    rm -fr $WEBPAGES_REPO/$WEBPAGES_MODULE
fi
mv site $WEBPAGES_REPO/$WEBPAGES_MODULE

echo ""
echo "--Commit"
git -C $WEBPAGES_REPO pull
git -C $WEBPAGES_REPO add $WEBPAGES_MODULE
git -C $WEBPAGES_REPO commit -m "update from $WEBPAGES_MODULE" 
git -C $WEBPAGES_REPO push
