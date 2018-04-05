#include <iostream>
#include <string>

using namespace std;


int main()
{
    cout << "\n----------------------------------------------------------------------------------------------------------------------\nAhlan ya user ya habibi (^-^)\n   What do you like to do today? \n 1- Cipher a message? \n 2- Decipher a message \n 3- End. \n";
    int option;
    cin >> option;
    string message;
    int s;
    cout << "How many shifts do you want?? \n";
    cin >> s;
    cout << "Please enter the message you want to cipher. \n";
    cin.ignore();
    getline(cin, message);

    string alpha="abcdefghijklmnopqrstuvwxyz";
    string dealpha="zyxwvutsrqponmlkjihgfedcba";
    switch(option)
    {
    case 1:

            for (int j=0; j<message.length(); ++j)
            {
                for (int i=0; i<26; ++i)

                {
                    if (message[j]==alpha[i])
                    {
                        cout << alpha[i+s];

                    }
                    if (message[j]==' ')
                    {
                        cout << " ";
                        continue;
                    }

                }
            }
            break;
    case 2:

            for (int j=0; j<message.length(); ++j)
            {
                for (int i=0; i<26; ++i)

                {
                    if (message[j]==dealpha[i])
                    {
                        cout << dealpha[i+s];

                    }
                    if (message[j]==' ')
                    {
                        cout << " ";
                        continue;
                    }

                }
            }
            break;
    case 3:
        cout << "----------------------------------------------------------------------------------------------------------------------";
            break;

    }
}
