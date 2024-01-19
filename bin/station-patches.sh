# Update mb6-space.
cd `dirname $0`/..

# Patch 000
# Apply patches:
if [ ! -f ./patches/patch000.log ]; then
    # Do something
    echo "OK" > ./patches/patch000.log
fi

cat ./patches/patch000.log