# OS Instalation on PC Work Station 

Configure the computer to have an homogene confs...

Install **Ubuntu-22.04 LTS** with *bot* user (password *bot*).

(Installation minimale, avec mise à jours et logiciels tiers, sur le disque entier)

- Wifi:
    * _IoT IMT Nord Europe_ : `72Hin@R*` 


## First login:

If necessary, fix manually the date:

```sh
date
sudo date -s "2022-05-14 15:42:30"
sudo apt update
sudo apt upgrade
sudo apt install -y openssh-server curl
```

You can restart the machine and process to a classical install from [install-station](../bin/install-station) script or go on **Manual Install** section. 
Attention, the script also install ROS in _desktop_ configuration.

```sh
cd
curl https://bitbucket.org/imt-mobisyst/mb6-space/raw/master/bin/install-station > install.bash
bash install.bash
rm install.bash
```


## Manual Install

Install some usefull softs:

```shell
sudo apt update
sudo apt upgrade -y
sudo apt install -y zsh git git-lfs davfs2 openssh-server \
    gnome-tweaks freecad prusa-slicer diodon \
	git git-lfs meld \
	build-essential check cmake default-jre \
	python3 python3-pip spyder \
	texlive texlive-base biber texlive-latex-recommended \
	texlive-publishers texlive-bibtex-extra texlive-science texlive-luatex \
	latexila pandoc wkhtmltopdf \
	gimp steam inkscape
pip install zmq tqdm pytest beautifulsoup4 matplotlib
```

Clone mb6-space:

```shell
cd
if [ ! -d "mb6-space" ]; then
  git config --global http.sslverify false
  git clone https://bitbucket.org/imt-mobisyst/mb6-space.git
fi
cd mb6-space
```

One last software:

```shell
sudo dpkg -i deps/code_1.79.2-1686734195_amd64.deb
```

You also have to configure the user environemnt (i.e. default bash configurations) :

```shell
echo "

# mb6 ROS environment:
source ~/mb6-space/bin/run-commands.bash" >> ~/.bashrc
```

For conveignance you can setup some particular git configuration:

```shell
git config --global user.name bot
git config --global user.email mobisyst@imt-nord-europe.fr
git config --global credential.helper cache
git config --global http.sslVerify false
git-lfs install
```

That-it, you can return on the [README.md](../README.md) file and process to ROS, RealSense and Gazebo installations.

(or: 

```shell
./bin/install-ros-setup
./bin/install-ros
./bin/install-realsense
./bin/install-gazebo
```

)
