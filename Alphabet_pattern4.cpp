#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int n;
        cout<< "Enter the number:";
        cin>>n;

        for(int i = 1; i<=n ; i++)
        {
            for(int j =1 ; j<=i ; j++)
            {
                if(j%2==0)
                    cout<< "A";
                else
                    cout<< "*";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
    }
}

