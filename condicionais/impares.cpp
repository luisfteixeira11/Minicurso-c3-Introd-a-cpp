/*
Questão impares - Rielly Luiza
https://judge.beecrowd.com/pt/problems/view/1066
*/
#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    int pares=0, impares=0, positivos=0, negativos=0;
    cin>>a;
    if (a%2==0){
        pares++;
    } else {
        impares++;
    } if(a>0){
        positivos++;
    } else if (a<0){
        negativos++;
    }
    cin>>b;
    if (b%2==0){
        pares++;
    } else {
        impares++;
    } if(b>0){
        positivos++;
    } else if (b<0){
        negativos++;
    }
    cin>>c;
    if (c%2==0){
        pares++;
    } else {
        impares++;
    } if(c>0){
        positivos++;
    } else if (c<0){
        negativos++;
    }
    cin>>d;
    if (d%2==0){
        pares++;
    } else {
        impares++;
    } if(d>0){
        positivos++;
    } else if (d<0){
        negativos++;
    }
    cin>>e;
    if (e%2==0){
        pares++;
    } else {
        impares++;
    } if(e>0){
        positivos++;
    } else if (e<0){
        negativos++;
    }
    cout<<pares<<" valor(es) par(es)"<<endl;
    cout<<impares<<" valor(es) impar(es)"<<endl;
    cout<<positivos<<" valor(es) positivo(s)"<<endl;
    cout<<negativos<<" valor(es) negativo(s)"<<endl;
}