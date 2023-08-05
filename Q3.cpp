#include <iostream>
using namespace std;
int main(){
	int n=5;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
		if(j<=n-i){
			cout<<" ";
			cout<<" ";
		}
		else{
			cout<<"*";
			cout<<" ";
		}
		j++;
	}
	cout<<endl;
	i++;
	}
}
