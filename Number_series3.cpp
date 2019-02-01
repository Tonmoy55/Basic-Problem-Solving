#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int n, sum1=0 , sum2=0;
        cout<< "Enter the number of the series: ";
        cin>>n;

        for(int i = 1; i<=n ; i++)
        {
            for(int j = 1 ; j<=i ; j++)
            {
                   sum1+=j;
            }
            sum2+=sum1;
            sum1=0;
        }
        cout<< "Sum is: "<<sum2;
        cout<<endl;
        cout<<endl;
    }
}




