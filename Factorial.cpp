#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

  int n ,a=1;

    for(;;)

    {

         cout<< "Enter a number:";
         cin>> n;
        for(int i=n ; i>0 ; i--)
        {
            a*=i;
        }
        cout<< "Factorial is:"<<a<<endl;
        a=1;
    }

}
