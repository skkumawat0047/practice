#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int, string>m;
    m.insert(45,"rohit");
    m["sanjay"]=6;
    cout<<m["sanjay"]<<endl;
}