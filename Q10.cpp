#include <iostream>
using namespace std;
int main(){
	int n=5;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=5-i){
			cout<<" ";
			j++;
		}
		cout<<"*";
		cout<<endl;
		i++;
	}
}
