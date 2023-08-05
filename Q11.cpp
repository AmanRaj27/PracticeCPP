#include <iostream>
using namespace std;
int main(){
	int n=5;
	int i=1;
	char p="a";
	while(i<=n){
		int j=1;
		
		while(j<=n){ 
			if(j<=n-i){
				cout<<" ";
			}
			else{
				cout<<p;
			}
			
			j++;
		}
		cout<<endl;
		i++;
	}
}
