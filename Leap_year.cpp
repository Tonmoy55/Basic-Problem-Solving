#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int year;
         double r1;

         cout<< "Enter the Year:";
         cin>> year;
         if((year%4)==0 && ((year%400)==0 || (year%100)!=0 ))
            cout<< "This is a Leap year";
         else
            cout<< "This is not a Leap year";




         cout<<endl;
         cout<<endl;
}

}



