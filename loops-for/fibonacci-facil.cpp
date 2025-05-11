/*
QuestC#o Fibonacci FC!cil - Luis Teixeira
https://judge.beecrowd.com/pt/problems/view/1151
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a = 0, b = 1;
	while(n>0) {
		if (n!=1) {
            cout<<a<<" ";
		} else{
		    cout<<a<<endl; //esse programa tem que haver o endline mesmo que ele nao peça na questão
		}
		int temp = b;
		b = a+b;
		a = temp;
		n--;
	}
	return 0;
}