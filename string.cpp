#include <bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
    string s1,s2, concat;
    char temp;
    int len1,len2;
    cin>> s1 >> s2;
    len1= s1.size();
    len2= s2.size();

    cout<<len1<< " " <<len2<<endl;
    concat = s1+s2;
    cout<< concat<<endl;

    temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout<< s1 << " " << s2;


    return 0;
}

