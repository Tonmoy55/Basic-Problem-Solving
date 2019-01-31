/*
Question:
Input Format

The first and only line consists of n integers separated by commas.

Output Format

Print the integers after parsing it.

P.S.: I/O will be automatically handled. You need to complete the function only.

Sample Input

23,4,56
Sample Output

23
4
56
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> vec;
    stringstream ss(str);
    int digit;
    char ch;
    while(ss>>digit)
    {
        vec.push_back(digit);
        ss>>ch;
    }
    return vec;

}

int main() {
    string str;
    cout<< "Enter the string separeted with commas:"<< endl;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
