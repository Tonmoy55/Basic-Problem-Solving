#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int n, sum=0;
        cout<< "Enter the number of the series: ";
        cin>>n;

        for(int i = 1; i<=n ; i++)
        {
           sum+=(i*i);
        }
        cout<< "Sum is: "<<sum;
        cout<<endl;
        cout<<endl;
    }
}



