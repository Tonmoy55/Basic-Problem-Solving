#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int a,n,rem,sum=0;

         cout<< "Enter the number:";
         cin>> n;
         a=n;
         while(a!=0)
         {
             rem=a%10;
             sum=sum+rem;
             a=a/10;
         }
         cout<< "Some of the digit " << n << " is:" << sum;
         cout<<endl;
         cout<<endl;
}

}

