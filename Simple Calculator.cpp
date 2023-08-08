#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"\t\t\t~~~SIMPLE CALCULATOR~~~\n\n";
    cout<<"ENTER TWO VALUES TO PERFORM ARITHMETIC OPERATIONS\n";
    cin>>a;
    cin>>b;
    for(int i=1;i<=5; i++){
    cout<<"\n";
    cout<<"Which Operation You Want To Perfume(+,-,*,/)?\n";
    cin>>op;
    cout<<"\n";
    if(op== '+'){
    cout<<"Sum="    <<a+b<<"\n";
    }
    else if(op== '-'){
    cout<<"Subtraction="<<a-b<<"\n";
    }
    else if(op== '*'){
    cout<<"Multiplication="<<a*b<<"\n";
    }
    else if(op== '/' ){
    cout<<"Divide="<<a/b<<"\n";
    }
    else{
    cout<<"Invalid Input!";
    }
}
return 0;
}

