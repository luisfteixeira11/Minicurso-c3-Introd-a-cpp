/*
Questao Sequencias crescentes - Luis Teixeira
https://judge.beecrowd.com/pt/problems/view/1146
*/

#include <iostream>
using namespace std;

int main(){
    int n; 
    while(true){
        cin>>n;
        if(n==0) break;
        for(int i=1; i<=n;i++){
            if (i<n) cout<<i<<" ";
            else cout<<i<<endl;
        }
    }
    return 0;
}