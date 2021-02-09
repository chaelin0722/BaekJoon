#include<iostream>

#define MAX 1001
int N;
int DP[MAX] = {0};

using namespace std;

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	
}

int main(){
	init();
	cin>> N;
	
	DP[0] = 1;
	DP[1] = 2;
	
	for(int i=2;i<N;i++){
		DP[i] = (DP[i-1] + DP[i-2])%10007;
	}
	
	cout<<DP[N-1];
	return 0;
}
