/*
Questao Fatorial Simples - Luis Teixeira 
https://judge.beecrowd.com/pt/problems/view/1153
*/
#include <iostream>
using namespace std;

int main(){
    int n, fator=1; cin>>n;
    while(n>1){
        fator *= n;
        n--;
    }
    cout<<fator<<endl;
    return 0;
}