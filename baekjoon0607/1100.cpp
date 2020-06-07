#include<iostream>

using namespace std;

int main(void){
	char chess[8][8];
	int count = 0;
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>chess[i][j];	
		}
	}
	
	
	for(int i=0;i<8;i+=2){
		for(int j=0;j<8;j+=2){
			if(chess[i][j] == 'F') count++;			
		}
	}
	for(int i=1;i<8;i+=2){
		for(int j=1;j<8;j+=2){
			if(chess[i][j] == 'F') count++;			
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}
