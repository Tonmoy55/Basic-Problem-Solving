#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int temp,in,F,C;
         double r1;

         cout<< "Enter a number:";
         cin>> temp;
         cout<< "1.Celsious to Farenhite: \n2.Farenhite to celsious: ";
         cin>> in;
         cout<<endl;
         if(in==1)
         {
             F = ((temp*9)/5)+32;
             cout<< F<<" Degree Farenhite.";
         }
         else
         {
             C= ((5*temp)-160)/9;
             cout<< C<<" Degree Celsious.";
         }

         cout<<endl;
         cout<<endl;
}

}



