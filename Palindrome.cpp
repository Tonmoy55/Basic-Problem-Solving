#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

//    ----String palindrome----
    for(;;)

    {
        int length,flag=0;
        string s1;

         cout<< "Enter a string:";
         cin>> s1;
         length = s1.length();
         for(int i = 0, j = length-1; i<length/2 ; i++, j--)
         {
             if(s1[i]!=s1[j])
             {
                flag=1;
                break;
             }

         }
        if(flag==1)
        {
            cout<< "This is not a palindrome.";
        }

        else
        {
             cout<< "This is a palindrome.";
        }

        cout<<endl;
}
}
