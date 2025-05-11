/*
Questao Numero Primo - Luis Teixeira
https://judge.beecrowd.com/pt/problems/view/1165
*/

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int i=0; i<n; i++){
        int num; cin>>num;
        bool primo = true;
        if(num==1){
            primo = false; 
            cout<<num<<" nao eh primo"<<endl;
            continue;
        }
        if(num==2){
            primo = true;
            cout<<num<<" eh primo"<<endl;
            continue;
        } 
        for (int j=2; j<=num; j++){
            if(num%j==0&&j!=num){
                primo = false;
                break;
            }
        }
        if(primo){
            cout<<num<<" eh primo"<<endl;
        } 
        else{
            cout<<num<<" nao eh primo"<<endl;
        }
    }
    return 0;
}