#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int(x) ;

    cout << "if you want to cipher press 1 and if you want to decipher press 2 : " << endl ;
    cin >> x ;




    if (x==1)
    {
        string(message);
        string(msg) ;
        cout << "enter your message please: " << endl ;
        cin >> message ;

        for (int(i)=0 ; i<message.length() ; i++)
        {
            int(msg) = ( char(message[i]) - 'a' ) ;
            bitset<5> code(msg) ;

            for (int(a)=0 ; a<code.size() ; a++)
            {
                if (code[a]==0)
                {
                    cout << "a" ;
                }
                else
                {
                    cout << "b" ;
                }
            }
        }

    }






    if (x==2)
    {

        string (de) ;
        cout << "enter the massage to decipher : " ;
        cin >> de ;
        cout << "mostafa" ;







    }







    return 0 ;
}
