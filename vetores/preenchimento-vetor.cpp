/*
Questao Preenchimento de Vetor I - Luis Teixeira
https://judge.beecrowd.com/pt/problems/view/1173
*/
#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(10);
    v[0] = n;
    cout<<"N[0] = "<<v[0]<<endl;
    for(int i=1; i<10; i++){
        v[i] = v[i-1]*2;
        cout<<"N["<<i<<"] = "<<v[i]<<endl;
    }
    return 0;
}