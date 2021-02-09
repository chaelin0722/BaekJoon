#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>

#define MAX 1001
int N;
int DP[MAX];

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
		DP[i] = DP[i-1] + DP[i-2];
	}
	
	cout<<DP[N-1]%10007;
	return 0;
}
