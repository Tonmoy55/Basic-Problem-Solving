#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,digit=0;

    for(;;)
    {
         cout<< "Enter a number:";
         cin>> n;
         if(n<0)
            n=n*(-1);
         if(n==0)
            n=1;
         while(n!=0)
         {
             n=n/10;
             digit++;
         }
        cout<< "Total number of digit is:"<< digit;
            digit=0;
            cout<<endl;
            cout<<endl;
    }
}


