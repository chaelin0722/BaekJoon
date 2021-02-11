#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include <iostream>

using namespace std;

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	
}

int main(){
	init();
	int testcase, num;
	cin>>testcase;
	while(testcase--){
		int DP[11]={0,};
		DP[1] = 1;
		DP[2] = 2;
		DP[3] = 4;
		cin>>num;
		for(int i=4;i <= num;i++){
			DP[i] = DP[i-3] + DP[i-2] + DP[i-1];
		}		
		cout<<DP[num]<<endl;
	}

	
	return 0;
}
