#include<iostream>
#include<string>
using namespace std;
void Alice(string &s){
    int count=0;
    for(char c:s){
        if(c=='a' || c=='e' ||c=='i' ||c=='o' || c=='u'){
            count++;
        }
        cout<<s<<count<<endl;
        s.erase(0,1);
        cout<<s<<endl;
        if(count==3) return;
    }
}
void bob(string &s){
    for(char c:s){
        if(c=='a' || c=='e' ||c=='i' ||c=='o' || c=='u') {
            return;
        }
        s.erase(0,1);
    }
}
bool doesAliceWin(string &s) {
    bool alice = true;
    while(s.length()!=0){
        if(alice==true){
            Alice(s);
            cout<<s.length()<<"  "<<s<<endl;
            alice=false;
        }
        else {
            bob(s);
            alice=true;
            cout<<s.length()<<"  "<<s<<endl;
        }
    }
    cout<<alice<<endl;
    return alice;
}
int main(){
    string s= "leetcoder";
    cout<<doesAliceWin(s);
}