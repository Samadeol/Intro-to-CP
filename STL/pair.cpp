#include<iostream>
using namespace std;


void func(pair<int,float> &p){ //pass by reference only for template
    p.first += 12;
    p.second = 0;
    cout<<p.first<<" "<<p.second<<endl;
}

int main(){
    pair<int, float> p1;
    pair<int, char> p2;
    pair<char, char> p3;
    int a = 10;
    float b = 1.48954;
    p1 = make_pair(a,b);
    func(p1);
    cout<<p1.first<<" "<<p1.second<<endl;
    // p3 = make_pair('a','!');
    // cout<<p3.first<<" "<<p3.second<<endl;
}