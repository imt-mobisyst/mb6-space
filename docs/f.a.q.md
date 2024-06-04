# Frequent Asked Questions



## Comment configurer aux petits oignon sudo ?

`sudo` est parramétrable et permet d'autoriser finnement les accés et les droits des utilisateur sur les action senssible sur la machine.
Le plus simple est de creer des fichiers de config spécifique dans le répétoire approprié:

```sh
sudo mkdir /etc/sudoers.d            # si besoin
sudo touch /etc/sudoers.d/myConfigs  
```

Il est donc possible d'autoriser un utilisateur sur une commande spécifique par exemple (la commande `whereis xxx` permet de récupérer le chemin sur une commande `xxx`):

```sh 
User     ALL=(ALL:ALL) /path/cmd
```

Et même l'autoriser à le faire sans mot de passe:

```sh 
User     ALL=(ALL:ALL) NOPASSWD: /path/cmd
```

Par exemple pour autoriser l'usage d'apt:

```sh
sudo nano /etc/sudoers.d/apt  
#puis:
bot      ALL=(ALL:ALL) NOPASSWD: /usr/bin/apt
#et ctrl-s, ctrl-x pour sauver et quiter
```

Où, si l'on veut être plus spécifique: 

```sh
bot      ALL=(ALL:ALL) NOPASSWD: /usr/bin/apt upgrade
```
