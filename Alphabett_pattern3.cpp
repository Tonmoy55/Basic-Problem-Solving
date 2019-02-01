#include <bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        char ch []= "INDIA";
        for(int i = 0; i<strlen(ch) ; i++)
        {
            for(int j =0 ; j<=i ; j++)
            {
                cout<< ch[j];
            }
            cout<<endl;
        }
}

