# DistroDownloader
DistroDownloader is a simple program that is extremely useful for users who often switch between different Linux distributions.
Credit is given to Aaron-JM for creating the original Python version, This new version is updated for 2021 and written in C.
The number of distros included was reduced to 7 Linux and Unix distros from the original's 15. I chose distros with complete installs and a good amount of support.

# System Requirements
This program is written as a C interface for a Linux shell that includes an installation of wget. So make sure that you are running Linux or WSL
and you have the wget application installed, a C compiler is also required to build from source, I used GCC version 11.

# New Features
I have added a prompt that ensures that the downloaded .iso can be saved to a user specified directory, for example a user can type in '$HOME/Documents'
at the prompt to save to their Documents subdirectory within their Linux user folder
