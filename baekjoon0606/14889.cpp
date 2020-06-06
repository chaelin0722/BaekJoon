#include<iostream>
#define MAX 22
#define INF 987654321
#define ABS(X) (X) > 0? (X): -(X)

using namespace std;

bool check[MAX];
int map[MAX][MAX];
int N, dab = INF;

void dfs(int d, int pos){
	
	if(d == N / 2){
		int start = 0, link = 0;
		
		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				if(check[i] && check[j]) start += map[i][j];
				if(check[i] && !check[j]) start += map[i][j];
			}
		}
		int tmp = ABS(start - link);
		if(tmp < dab) dab = tmp;
		return;
	}
	for(int i = pos; i <N; i++){
		check[i] = true;
		dfs(d+1, i+1);
		check[i] = false;
	}	
}

int main(void){
	cin >> N;
	for(int i=1;i<=N; i++){
		for(int j=1; j<=N; j++){
			cin>> map[i][j];
		}
	}
	dfs(0,1);
	cout<< dab << endl;
	
	return 0;
}
