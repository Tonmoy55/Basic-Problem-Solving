#include <bits/stdc++.h>

using namespace std;

int main()
{

    for(;;)
    {
         int countr=0,countr2=0,length,len2,m=0;
         char s2[500],arr[100];
         arr[0]='\0';
         string s1;
         double total_marks=0,percent=0;
         cout<< "Enter the first string:";
         cin>> s1;

        for(int i =0 ; i<s1.length() ; i++)
        {
            s2[i]=s1[i];
            //cout<<s2[i];
        }
        for(int i =0; i<s1.length()  ; i++)
        {

            for( int j =0; j<s1.length(); j++)
            {
                if(s1[i]==s2[j])
                    countr++;
            }
            if(countr>=2)
            {
                     for( int k =0; k<s1.length(); k++)
                        {
                            if(s1[i]==arr[k])
                                countr2++;
                        }
                    if(countr2==0)
                    {
                      cout<< "character "<<s1[i] << " appears " << countr <<" times in "<<s1<<endl;
                      arr[m]=s1[i];
                      m++;

                    }
                    countr2=0;

            }

            countr=0;

        }

        delete [] s2;
        delete [] arr;
        s1.clear();
         cout<<endl;
         cout<<endl;
    }

}





