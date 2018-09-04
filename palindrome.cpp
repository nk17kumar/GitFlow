#include "bits/stdc++.h"
using namespace std;

int main(int argc, char* argv[])
{
    string s;
    cin >> s;
    int l = s.length();

    if ( isPalindrome(s) )
        cout << "yesah";
    else
        cout << "nopes";

    return 0;
}
