#include<iostream>
#include<string>
using namespace std;

void func(string &s){
    cout<<s<<endl;
    //s.size()
    //s.push_back('c');
    //s.pop_back()
    //s.substr()
    cout<<s.substr(2,6)<<endl;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    s1.push_back('z');
    cout<<s1<<endl<<s2<<endl;
    s1.pop_back();
    // auto t = s1.begin();  // pointer to the first character;
    // auto p = s1.end();  //pointer to one after the last character;
    // t++;
    func(s1);
    cout<<s1[5]<<endl;
    cout<<s1.size()<<endl<<s2.size()<<endl;
    s1=s1+s2;
    cout<<s1<<endl;
    //cout<<*t<<endl;
}