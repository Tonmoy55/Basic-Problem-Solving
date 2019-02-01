#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
    {
           int n,i,j,k=1;
            cout<< "Enter a number:";
            cin>> n;
            for(i=1 ; i<=n ; i+=2)
            {
                for(j=n ; j>=1 ; j--)
                {
                    if(j>i)
                    cout<<" ";
                    else
                    cout<<k++;

                }
                cout<<endl;
            }

    }
}


