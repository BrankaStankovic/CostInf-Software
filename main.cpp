#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

bool IsLoggedIn()
{

    string username, password, un, pw;
    cout << "Unesite korisnicko ime: ";
    cin >> username;
    cout<< "Unesite PIN: ";
    cin >> password;

    ifstream read((username + ".txt").c_str());
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int choice;
    cout<< "1:Registrovanje na sistem\n2:Prijava na sistem\nIzaberite opciju: ";
    cin>> choice;
    if(choice == 1)
    {
        string username, password;
        cout<< "Unesite korisnicko ime: ";
        cin>> username;

        int number, i;
        do{
            cout<< "Unesite PIN (4 broja): ";
            cin>> password;
            number=0;
            for (i=0; password[i]!='\0'; i++)
            {
                if(isdigit(password[i]) != 0)
                    number++;
            }
        } while(password.length()!= 4 || number != 4);


        ofstream file;
        file.open((username + ".txt").c_str());
        file<< username<< endl << password;
        file.close();
        main();

    }
    else if (choice == 2)
    {
        bool status = IsLoggedIn();

        if (!status)
        {
            cout<< "Pogresno korisnicko ime ili PIN\n"<< endl;
            system ("PAUSE");
            return 0;
        }
        else
        {
            cout<< "Prijavljeni ste na sistem!"<< endl;
            system ("PAUSE");
            return 1;
        }
    }
}
