#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,a,rem;

    for(;;)
    {
         cout<< "Enter a number:";
         cin>> n;
         cout<< "Reverse is: ";
         a=n;
         while(a!=0)
         {
             rem = a%10;
             cout<< rem ;
             a=a/10;
         }
        cout<<endl;
        cout<<endl;
    }
}

