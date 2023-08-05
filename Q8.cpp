#include <iostream>
using namespace std;
int main(){
	int n=9;
	int i=1;
	while(i<=n){
		if(i<=5){
			int j=1;
			while(j<=i){
				cout<<"*";
				j++;
			}
		}
		else{
			int j=1;
			while(j<=10-i){
				cout<<"*";
				j++;
			}
		}
		cout<<endl;
		i++;
		}
	}
