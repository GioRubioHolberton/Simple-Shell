# SIMPLE SHELL

Command language interpreter that executes commands read from the standard input or from a file.

## How to star

1. Clone the repository

```bash
git clone https://github.com/GioRubioHolberton/simple_shell.git
```

2. Compilation process

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

3. Execute

```bash
./hsh
```

## All Files

The following are the files used.

Name             | Description                | 
----------       | ------------               |
shell.c          | main file                  |
holberton.h      | Libraries and prototypes   |
environt.c       | PATH search, pointer array |
execute_execve.c | Function execute           |
fun_strin.c      | Functions for strings      |
token.c          | divide into boxes          |
free.c           | Free memory                |

## Functions used

The following are the functions used.

Name           | Description                      |  
---            | ---                              |
execute_execve | Execute command                  |
_strdup        | Duplicate a string               |
token          | Divide input of getline          |
_strcmp        | Compare two strings              |
create_array   | create array pointers            |
search_path    | Search Path, Create array        |
_strlenght     | Calculate the length of a string |
_strncpy       | copy string                      |
_free          | Free memory                      |

## Examples

```bash
ls -la
total 80
-rw-rw-r--  1 vagrant vagrant   699 Apr 16 17:37 #man_1_simpleshell#
drwxrwxr-x  3 vagrant vagrant  4096 Apr 16 17:19 .
lrwxrwxrwx  1 vagrant vagrant    49 Apr 16 17:18 .#man_1_simpleshell -> vagrant@vagrant-ubuntu-trusty-64.15923:1555338860
drwxr-xr-x 10 vagrant vagrant  4096 Apr 16 14:41 ..
drwxrwxr-x  8 vagrant vagrant  4096 Apr 16 17:08 .git
-rw-rw-r--  1 vagrant vagrant   151 Apr 16 14:41 AUTHORS
-rw-rw-r--  1 vagrant vagrant  1104 Apr 16 14:41 README.md
-rw-rw-r--  1 vagrant vagrant   283 Apr 16 14:41 _free.c
-rw-rw-r--  1 vagrant vagrant  1925 Apr 16 15:11 environt.c
-rw-rw-r--  1 vagrant vagrant   336 Apr 16 14:41 execute_execve.c
-rw-rw-r--  1 vagrant vagrant  1656 Apr 16 15:49 fun_strin.c
-rw-rw-r--  1 vagrant vagrant   720 Apr 16 15:49 holberton.h
-rwxrwxr-x  1 vagrant vagrant 19860 Apr 16 15:53 hsh
-rw-rw-r--  1 vagrant vagrant   361 Apr 16 17:18 man_1_simpleshell
-rw-rw-r--  1 vagrant vagrant   143 Apr 16 16:25 man_1_simpleshell~
-rw-rw-r--  1 vagrant vagrant   940 Apr 16 15:53 shell.c
-rw-rw-r--  1 vagrant vagrant   555 Apr 16 14:41 token.c
```
```bash
env 
XDG_SESSION_ID=8
TERM=xterm-256color
SHELL=/bin/bash
SSH_CLIENT=10.0.2.2 49439 22
SSH_TTY=/dev/pts/5
USER=vagrant
LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lz=01;31:*.xz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36:
MAIL=/var/mail/vagrant
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games
PWD=/home/vagrant/simple_shell
LANG=en_US.UTF-8
SHLVL=1
HOME=/home/vagrant
LOGNAME=vagrant
SSH_CONNECTION=10.0.2.2 49439 10.0.2.15 22
LC_CTYPE=UTF-8
LESSOPEN=| /usr/bin/lesspipe %s
XDG_RUNTIME_DIR=/run/user/1000
LESSCLOSE=/usr/bin/lesspipe %s %s
_=./hsh
OLDPWD=/home/vagrant
```

## Autors

* Oscar Vargas
* Giovanny Rubio.
