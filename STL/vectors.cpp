#include<iostream>
#include<string>
#include<vector>
using namespace std;

void func(vector<vector<int> > &v){
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) a[i]=42;
    vector<int> b;   // it size can be dynamically change
    b.push_back(1);
    b.push_back(37);
    // b.pop_back();
    cout<<b[0]<<" "<<b.size()<<" "<<b[1]<<endl;

    vector<int> c(n,42);
    // cin>>c[1]>>c[0];
    cout<<c[0]<<" "<<c[1]<<endl;
    c.push_back(238);
    cout<<c[2]<<endl;
    vector<pair<int,int> > v;
    v.push_back(make_pair(1,2));
    vector<string> p;
    vector<pair<string,string> > k;
    vector<vector<int> > s(7,vector<int> (7,-7));
    // auto t = s.begin();
    // auto aj = s[0].begin();
    func(s);
    s[1].push_back(0);
    s[2].push_back(3);
    s[2].push_back(4);
    s[2].push_back(5);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[i].size();j++) cout<<s[i][j]<<" ";
        cout<<endl;
    }


}