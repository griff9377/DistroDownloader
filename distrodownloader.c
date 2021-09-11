#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void distrosites(){
    printf("Distro Web Sites\n");
    printf("https://ubuntu.com/\n");
    printf("https://www.debian.org\n");
    printf("https://getfedora.org\n");
    printf("https://neon.kde.org\n");
    printf("https://www.opensuse.org\n");
    printf("https://www.endeavouros.com\n");
    printf("https://www.manjaro.org\n\n");
}


void completemsg(){
    distrosites();
    printf("Download Process Complete\nCheck the folder you ran the program from for your downloaded '.iso'\n");
}


void manjaro(){
	unsigned int manjaro_response;

	printf("\nChoose a version to install...\n\n");
	printf("0. Exit\n");
	printf("1. XFCE Edition\n");
	printf("2. KDE Plasma Edition\n");
	printf("3. Gnome Edition\n\n");
	printf("Select Version Number: ");
	scanf("%i", &manjaro_response);

	if (manjaro_response == 1){
		system("wget https://download.manjaro.org/xfce/21.1.2/manjaro-xfce-21.1.2-210904-linux513.iso");
		completemsg();	
	}

	else if (manjaro_response == 2){
		system("wget https://download.manjaro.org/kde/21.1.2/manjaro-kde-21.1.2-210904-linux513.iso");
		completemsg();
	}

	else if (manjaro_response == 3){
		system("wget https://download.manjaro.org/gnome/21.1.2/manjaro-gnome-21.1.2-210904-linux513.iso");
		completemsg();
	}
	
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
    printf("6. EndeavourOS - 64bit\n");
    printf("7. Manjaro - 64bit\n");
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
    else if (response == 6){
    	system("wget https://github.com/endeavouros-team/ISO/releases/download/1-EndeavourOS-ISO-releases-archive/endeavouros-2021.08.27-x86_64.iso");
    	completemsg();
    }
    else if (response == 7){
    	manjaro();
    	completemsg();
    }
    else{
        distrosites();
        printf("Program exiting...\n");
    }
    return 0;
}
