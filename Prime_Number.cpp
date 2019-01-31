
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;


    for(;;)
    {
        cout<< "Enter a number: "<<endl;
        cin>> num;
        if(num==1)
            cout<< "The smallest prime number is 2.";
        for( i = 2 ; i<num ; i++)
        {
            if(num%i==0)
            {
                cout<< "Not a prime number";
                break;
            }
        }
         if(num==i)
                cout<< "prime number";

        cout<<endl;
    }

}

