# Configure Ubuntu

Configure the computer to have an homogene confs...

Install **Ubuntu-22.04 LTS** or derivate (**POP!_OS**) with *bot* user (password *bot*)

Change machine name (cf. Robot Names section)

```bash
sudo nano /etc/hostname
```

Grant _bot_ with some access: 

```bash
sudo usermod -a -G dialout bot 
```

Configure Wifi:

**fleury** wifi, password: _72Hin@R*_

optional: **robot** wifi:

- password: robotsdesmines
- ip : 10.1.16.XX, 20 < xx < 255
- mask: 255.255.0.0
- Passerel: 10.1.1.1, 
- DNS 10.1.2.110,10.1.2.111

Update the machine:

```bash
sudo apt update
sudo apt upgrade
sudo apt autoremove
```

Some nice tools and libs:

```bash
sudo apt -y install git ssh sshfs curl build-essential
```

Initialize git:

```bash
git config --global user.email "imt-mobisyst@drods.net"
git config --global user.name bot@`hostname`
```
