#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    string s1, s2, s3, s4;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s4 = s1 + s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());
    if(s4 == s3) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}