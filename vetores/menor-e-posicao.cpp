/*
Questao Menor e Posicao - Luis Teixeira
https://judge.beecrowd.com/pt/problems/view/1180
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int menor = 100000;
    int pos = -1;
    for (int i=0; i<n; i++){
        if(v[i]<menor){
            menor = v[i];
            pos = i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;
    return 0;
}
