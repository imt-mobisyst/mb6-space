# Update mb6-space.
cd `dirname $0`/..
git pull

# Update mb6's packages...
if [ -e ./pkg-basic ]; then
    cd pkg-basic
    git pull
    cd ..
fi
if [ -e ./pkg-tbot ]; then
    cd pkg-basic
    git pull
    cd ..
fi
if [ -e ./pkg-tsim ]; then
    cd pkg-basic
    git pull
    cd ..
fi

# Apply patches:
if [ ! -e ./patches ]; then
    mkdir patches
fi

./bin/station-patches.sh
