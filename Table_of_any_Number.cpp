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
        cout<< "Table of Number "<< n << "is: "<<endl;
        for(int i=1 ; i<=10 ; i++)
        {
            a=i*n;
            cout<< n << " X " <<i<< "= "<< a <<endl;
        }
    }

}

