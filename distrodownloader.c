#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void distrosites(){
    printf("Distro Web Sites\n");
    printf("https://ubuntu.com/\n");
    printf("https://www.debian.org\n");
    printf("https://getfedora.org\n");
    printf("https://neon.kde.org\n");
    printf("https://www.opensuse.org\n\n");
}


void completemsg(){
    distrosites();
    printf("Download Process Complete\nCheck the folder you ran the program from for your downloaded '.iso'\n");
}


int main(){
    unsigned int response;

    printf("Select a GNU/Linux Distribution...\n");
    printf("0. Exit\n");
    printf("1. Ubuntu 21.04 - 64bit\n");
    printf("2. Debian 11 NetInstall - 64bit\n");
    printf("3. Fedora Workstation 34 - 64bit\n");
    printf("4. KDE Neon - 64bit\n");
    printf("5. openSUSE Tumbleweed - 64bit\n");
    printf("Select Distribution Number: ");
    scanf("%i", &response);

    if (response == 1){
        system("wget https://releases.ubuntu.com/21.04/ubuntu-21.04-desktop-amd64.iso");
        completemsg();
    }

    else if (response == 2){
        system("wget https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-11.0.0-amd64-netinst.iso");
        completemsg();
    }

    else if (response == 3){
        system("wget https://download.fedoraproject.org/pub/fedora/linux/releases/34/Workstation/x86_64/iso/Fedora-Workstation-Live-x86_64-34-1.2.iso");
        completemsg();
    }

    else if (response == 4){
        system("wget https://files.kde.org/neon/images/user/20210826-0945/neon-user-20210826-0945.iso");
        completemsg();
    }

    else if (response == 5){
        system("wget https://download.opensuse.org/tumbleweed/iso/openSUSE-Tumbleweed-NET-x86_64-Current.iso");
        completemsg();
    }

    else{
        distrosites();
        printf("Program exiting...\n");
    }
    return 0;
}
