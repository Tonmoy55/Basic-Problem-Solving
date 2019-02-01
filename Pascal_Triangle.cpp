#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
        {
            int row, column , space , no , n;
            cout<<"Enter the number of row: ";
            cin>> no;

            for(row = 0 ; row<no ; row++)
            {
                for(space=0 ; space < (no-row) ; space++)
                {
                   cout<< " ";
                }
                    n=1;
                 for(column = 0 ; column<=row ; column++)
                 {
                     cout<<" "<<n;
                     n=n*(row-column)/(column+1);
                 }
                 cout<<endl;
            }
        }
}


