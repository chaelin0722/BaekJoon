#include<iostream>
using namespace std;

int main(void){
	int n, m;
	cin>>n>>m;
	
	int card[100];
	int sum =0, i,j,k;
	
	for(i=0;i<n;i++) cin>>card[i];	
	
	for(i=0;i<n-2;i++){
		for(j = i+1; j<n-1;j++){
			for(k=j+1;k<n;k++){
				if(card[i]+card[j]+card[k] <= m && m-(card[i]+card[j]+card[k])<m-sum){
					sum = card[i]+card[j]+card[k];
				}
			}
		}
	}
	
	cout<<sum<<endl;
		
	return 0;
}
