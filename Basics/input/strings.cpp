#include<iostream>
using namespace std;

int main(){
    string s="Anuranj";
    int len=s.size();
    cout<<len<<endl;
    cout<<s[0]<<endl;
    cout<<s[3]<<endl;
    s[len-1]='a';
    cout<<s[len-1]<<endl;
    cout<<s<<endl;
}