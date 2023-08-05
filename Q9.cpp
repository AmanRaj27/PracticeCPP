#include <iostream>
using namespace std;
int main(){
	int n=11;
	int i=1;
	while(i<=n){
		if(i<=6){
			int j=1;
			while(j<=6){
				if(j<=6-i){
					cout<<" ";
				}
				else{
					cout<<"* ";
				}
				j++;
			}
		}
		else{
			int j=1;
			while(j<=6){
				if(j<=i-6){
					cout<<" ";
				}
				else{
					cout<<"* ";
				}
				j++;
			}
		}
		cout<<endl;
		i++;
	}
}
