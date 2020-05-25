//#include <algorithm>
#include <iostream>
using namespace std;

/*
int d[41][2] = { {1,0},{0,1} };
int main()
{
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		for (int i = 2; i <= N; i++){
			d[i][0] = d[i - 1][0] + d[i - 2][0];
			d[i][1] = d[i - 1][1] + d[i - 2][1];
		}
		cout << d[N][0] << ' ' << d[N][1] << '\n';
	}
	return 0;
}

*/
int dp[41];

int fibonacci(int n){
	if(n <= 0) return 0;
	else if(n == 1) return 1;
    
    if(dp[n] != 0) return dp[n];
    else{
    	return dp[n] = fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int n;
	cin >>n;
	while(n-- > 0){
		int x;
		cin>> x;
		
		if(x==0){
			cout<<"1 0"<<"\n";
		}else if(x==1){
			cout<< "0 1"<<"\n";
		}else{
			fibonacci(x);
			cout<<dp[x-1]<<" "<<dp[x]<<"\n";
		}
	}
	
	return 0;
}

