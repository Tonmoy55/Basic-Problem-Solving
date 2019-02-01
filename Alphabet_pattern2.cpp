#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int n1,n2=0;
        char ch = 'A';
        cout<< "Enter the number:";
        cin>>n1;

        for(int i = 0; i<=n1 ; i++)
        {
            for(int k=0 ; k<i ; k++)
            {
                cout<< " ";
            }
            for(int j =n1 ; j>=1 ; j--)
            {
                if(j>i)
                {
                    cout<<ch;
                    ch++;
                }
            }

            cout<<endl;
        }
    }
}
