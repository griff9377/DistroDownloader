import wget
import colorama
import sys
from colorama import Fore

initiate = colorama.init()
print(Fore.GREEN + "Linux Distributions...")
print("0. Exit")
print("1. Ubuntu 18.04 - 64bit")
print("2. Ubuntu 16.04 - 32bit")
print("3. Kubuntu 18.04 - 64bit")
print("4. Kubuntu 18.04 - 32bit")
print("5. Linux Mint cinnamon 19 - 64bit")
print("6. Linux Mint cinnamin 19 - 32bit")
print("7. Fedora Workstation 28 - 64bit")
print("8. Fedora Workstation 28 - 32bit")
print("9. Elementary OS 0.4.1")
print("10. Deepin 15.6 - 64bit")
print("11. Kali Linux 2018.2 - 64bit")
print("12. Kali Linux 2018.2 - 32bit")
print("13. Arch Linux 2018.07.01 - 64bit")
print("14. Tails OS 3.8 - 64bit")
print("15. Cent OS 7 - 64bit")


response = raw_input("Select Distribution Number: ")
location = raw_input("Enter Desired Output Location: ")
name = raw_input("Enter Desired File Name: ")

if response == "0":
    sys.exit()
elif response == "1":
    wget.download("http://releases.ubuntu.com/18.04/ubuntu-18.04-desktop-amd64.iso?_ga=2.81709911.1182761075.1531315491-1957683495.1531315491", location + name)
elif response == "2":
	wget.download("http://releases.ubuntu.com/16.04/ubuntu-16.04.4-desktop-i386.iso?_ga=2.148117555.521715080.1531381800-897397522.1531381800", location + name)
elif response == "3":
    wget.download("http://cdimage.ubuntu.com/kubuntu/releases/18.04/release/kubuntu-18.04-desktop-amd64.iso", location + name)
elif response == "4":
    wget.download("http://cdimage.ubuntu.com/kubuntu/releases/18.04/release/kubuntu-18.04-desktop-i386.iso", location + name)
elif response == "5":
    wget.download("https://mirrors.layeronline.com/linuxmint/stable/19/linuxmint-19-cinnamon-64bit.iso", location + name)
elif response == "6":
    wget.download("https://mirrors.layeronline.com/linuxmint/stable/19/linuxmint-19-cinnamon-32bit.iso", location + name)
elif response == "7":
    wget.download("https://download.fedoraproject.org/pub/fedora/linux/releases/28/Workstation/x86_64/iso/Fedora-Workstation-Live-x86_64-28-1.1.iso", location + name)
elif response == "8":
	wget.download("https://download.fedoraproject.org/pub/fedora-secondary/releases/28/Workstation/i386/iso/Fedora-Workstation-Live-i386-28-1.1.iso", location + name)
elif response == "9":
	wget.download("https://sgp1.dl.elementary.io/download/MTUzMTM4MjI4MA==/elementaryos-0.4.1-stable.20180214.iso", location + name)
elif response == "10":
	wget.download("http://cdimage.deepin.com/releases/15.6/deepin-15.6-amd64.iso", location + name)
elif response == "11":
	wget.download("http://cdimage.kali.org/kali-2018.2/kali-linux-2018.2-amd64.iso", location + name)
elif response == "12":
	wget.download("http://cdimage.kali.org/kali-2018.2/kali-linux-light-2018.2-i386.iso", location + name)
elif response == "13":
	wget.download("https://mirror.aarnet.edu.au/pub/archlinux/iso/2018.07.01/archlinux-2018.07.01-x86_64.iso", location + name)
elif response == "14":
	wget.download("https://tails.mirror.metalgamer.eu/tails/stable/tails-amd64-3.8/tails-amd64-3.8.iso", location + name)
elif response == "15":
	wget.download("http://mirror.xnet.co.nz/pub/centos/7/isos/x86_64/CentOS-7-x86_64-Everything-1804.iso", location + name)

