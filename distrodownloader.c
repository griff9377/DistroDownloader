#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void distrosites(){
    printf("Distro Web Sites\n");
    printf("https://ubuntu.com/\n");
    printf("https://www.debian.org\n");
    printf("https://getfedora.org\n");
    printf("https://neon.kde.org\n");
    printf("https://www.endeavouros.com\n");
    printf("https://www.manjaro.org\n");
    printf("https://www.freebsd.org\n");
}

void exitfunc(){
    printf("Program will now close\n");
}


void completemsg(char directorysave[50]){
    distrosites();
    printf("Download Process Complete\nCheck %s  for your downloaded '.iso'\n", directorysave);
}


void manjaro(char directorysave[50]){
    unsigned int manjaro_response;
    printf("\nChoose a version to install...\n\n");
    printf("0. Exit\n");
    printf("1. XFCE Edition\n");
    printf("2. KDE Plasma Edition\n");
    printf("3. Gnome Edition\n\n");
    printf("Select Version Number: ");
    scanf("%i", &manjaro_response);

    if (manjaro_response == 0){
        exitfunc();    
    }

    else if (manjaro_response == 1){
        char wgetcmd[200] = "wget https://download.manjaro.org/xfce/21.2rc1/manjaro-xfce-21.2rc1-211210-linux515.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);    
    }

    else if (manjaro_response == 2){
        char wgetcmd[200] = "wget https://download.manjaro.org/kde/21.2rc1/manjaro-kde-21.2rc1-211211-linux515.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else if (manjaro_response == 3){
        char wgetcmd[200] = "wget https://download.manjaro.org/gnome/21.2rc1/manjaro-gnome-21.2rc1-211211-linux515.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

}


int main(){
    unsigned int response;
    char directorysave[50];
    printf("Select a Linux or Unix Distribution...\n");
    printf("0. Exit\n");
    printf("1. Ubuntu 21.10 - 64bit\n");
    printf("2. Debian 11 NetInstall - 64bit\n");
    printf("3. Fedora Workstation 35 - 64bit\n");
    printf("4. KDE Neon - 64bit\n");
    printf("5. EndeavourOS - 64bit\n");
    printf("6. Manjaro - 64bit\n");
    printf("7. FreeBSD 13 - 64bit\n");
    printf("Select Distribution Number: ");
    scanf("%i", &response);

    printf("Before we start, specify the directory path to save the .iso to\nExample:'$HOME/Downloads'\n");
    scanf("%s", directorysave);


    if (response == 1){
        char wgetcmd[200] = "wget https://releases.ubuntu.com/21.10/ubuntu-21.10-desktop-amd64.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else if (response == 2){
        char wgetcmd[200] = "wget https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-11.2.0-amd64-netinst.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else if (response == 3){
        char wgetcmd[200] = "wget https://download.fedoraproject.org/pub/fedora/linux/releases/35/Workstation/x86_64/iso/Fedora-Workstation-Live-x86_64-35-1.2.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else if (response == 4){
        char wgetcmd[200] = "wget https://files.kde.org/neon/images/user/20211216-0945/neon-user-20211216-0945.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else if (response == 5){
        char wgetcmd[200] = "wget https://github.com/endeavouros-team/ISO/releases/download/1-EndeavourOS-ISO-releases-archive/EndeavourOS_Atlantis_neo-21_5.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else if (response == 6){
        manjaro(directorysave);
    }

    else if (response == 7){
        char wgetcmd[200] = "wget https://download.freebsd.org/releases/amd64/amd64/ISO-IMAGES/13.0/FreeBSD-13.0-RELEASE-amd64-disc1.iso -P ";
        strcat(wgetcmd, directorysave);
        system(wgetcmd);
        completemsg(directorysave);
    }

    else{
        exitfunc();
    }

    return 0;
}
