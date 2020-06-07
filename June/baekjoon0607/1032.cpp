#include<iostream>
#include<string>
using namespace std;

int main(void){
	string str[50];
	char c;
	int n;
	cin>>n;
	
	if(n==1){
		cin>>str[0];
		cout<<str[0]<<endl;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		cin>>str[i];	
	}
	
	for(int i=0;i<str[0].length();i++){
		c = str[0].at(i);
		for(int j=1; j<n;j++){
			if(c!=str[j].at(i)) {cout<<'?'; break;}
			else if(j==n-1) {cout<<c; break;}
		}
	}
	return 0;
}
