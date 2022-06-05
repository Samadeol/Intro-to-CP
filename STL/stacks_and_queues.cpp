#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int n = 15,a;
    stack<int> s;  //lifo
    queue<int> q;  //fifo
    for(int i=0;i<15;i++){
        cin>>a;
        q.push(a);
        s.push(a);
    }
    cout<<"STACK: ";
    while(s.empty()==0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<"QUEUE: ";
    while(q.empty()==0){
        cout<<q.front()<<" ";
        q.pop();
    }
}