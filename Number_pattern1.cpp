#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
    {
           int n, countr=1;
            cout<< "Enter a number:";
            cin>> n;

            for(int i=1 ; i<=n ; i++)
            {
                for(int j =1 ; j<=i ; j++)
                {
                    cout<< countr;
                    countr++;
                }
                cout<<endl;
            }
    }

}
