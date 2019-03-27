#include <iostream>
#include <string>

void LazyStart(){
    std::string app;
    getline(std::cin, app);
    if (app == "y"){
        system("clear");
        system("cd LazySource");
        system("sudo pip install -r requirements.txt");
        system("sudo python setup.py install");
        system("sudo python LazySource.py");
    }
    else
    {
        system("clear");
        printf("Bye...");
    }
    
}

void LazyInstall(){
    system("clear");
    printf("Get Updates...\n");
    system("sudo apt-get update");
    system("clear");
    printf("Get Upgrades...\n");
    system("sudo apt-get upgrade");
    system("clear");
    printf("Installing python...\n");
    system("sudo apt-get install python");
    system("clear");
    printf("Installing pip...\n");
    system("sudo apt-get install python-pip");
    system("clear");
    printf("Updating PIP...\n");
    system("sudo pip install pip-update");
    system("clear");
}

void choice()
{
    std::string ch;
    std::getline(std::cin, ch);
    if (ch == "1") {
        printf("Installing LazySource...\n");
        printf("Git Clone...");
        system("git clone https://github.com/unsourcedcode/LazySource.git");
        LazyInstall();
        std::cout << "Wanna start the application? [y/n]" << std::endl;
        LazyStart();
    }
}

int main()
{
  std::cout << "-Made by Vaxure" << std::endl;
  std::cout << "-Version [0.0.1]" << std::endl;
  std::cout << "1) Install LazySource" << std::endl;
  choice();
  return 0;
}
