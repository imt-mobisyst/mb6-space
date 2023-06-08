#!env bash

echo "
                    --- Tools: system and developement ---
"

sudo apt install -y git tmux git-lfs openssh-server sshfs \
    build-essential cmake \
    python3 python3-pip \
    gnome-tweaks

echo "
                    --- Git Configuration ---
"

git config --global user.name bot
git config --global user.email bot@mb6.imt-nord-europe.fr
git config --global credential.helper cache
git config --global http.sslVerify false
git-lfs install

echo "# Tools"
echo "#----------------------------"
sudo dpkg -i dpd/code_1.73.1-1667967334_amd64.deb
