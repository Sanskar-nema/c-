#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"enter sp";
    cin>>sp;
    
    cout<<"enter cp";
    int cp;
    cin>>cp;

    if(sp>cp){
        cout<<"You have a profit";

        
    }
    if(cp>sp){
        cout<<"you have a loss";

    }
    if(sp==cp)
    cout<<"no profit no loss";
}