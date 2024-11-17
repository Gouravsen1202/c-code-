#include<iostream>
using namespace std;
int main(){
    int u;
    int a;
    int b;
    int c;
    int t;
if(u<=100){
    cout<<a,"enter your hindi marks";
    cin>>u;
        cout<<b,"enter your english marks";
        cin>>u;
    cout<<c,"enter your maths marks";
    cin>>u;
    t=(a+b+c)/300 *100;
    }
    else if(t>=33 &&t<=60){
        cout<<t,"your c gread";
    }
    else if(t>=61 && t<=80){
        cout<<t,"y greade is b";
    }
    else if (t>=81 && t<=100){
        cout<<t,"y g is a";
    }

    else {
        cout<<"invalid no";
    }

}