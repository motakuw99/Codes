#include <iostream>
using namespace std;
int main()
{
    string x;
    cout << "please enter number \n";
    cin >> x;
    for (int i=0 ; i<x.size() ; i++)
    {
        if ((x[i]=='1') || (x[i]=='4') || (x[i]=='7'))
        {
            for (int m = x[i] ; m < 999 ; m++)
            {
                for (int i = 0 ; i < x.size() ; i++)
                {
                    if ((x[i]=='1') || (x[i]=='4') || (x[i]=='7'))
                    {
                        continue ;
                    }
                    else
                    {
                        cout << " T is : " << x << endl ;

                    }
                }
            }
        }

        else
        {
            cout << "the number is : " << x << "\n";
            //break;
        }
    }
}
