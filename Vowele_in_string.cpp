
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
     string s1,s2;
     int countr=0;

         cout<< "Enter a string:";
         cin>> s1;
         for(int i=0; i<s1.length();i++)
         {
             if((s1[i]=='A') || (s1[i]=='a') || (s1[i]=='E') || (s1[i]=='e') || (s1[i]=='I') ||
                (s1[i]=='i') || (s1[i]=='O') || (s1[i]=='o') || (s1[i]=='U') || (s1[i]=='u'))
                countr++;
         }

         //use backslass(\) to use double quote in c++
        cout<< "There are " << countr << " Vowels in " << " \" " <<s1 << " \" ";

         cout<<endl;
         cout<<endl;
}

}




