#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define MAX 1001
using namespace std;

int maze[MAX][MAX];
int temp[MAX][MAX];
int N,M;

int DP(){
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			int compare = 0;
			compare = max(temp[i-1][j-1], max(temp[i-1][j], temp[i][j-1]));
			temp[i][j] = compare + maze[i][j];
		}
	}	
	return temp[N][M];	
}

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	
}

int main(){
	init();
	cin>>N>>M;	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>maze[i][j];
		}
	}	
	
	cout<<DP()<<endl;
	return 0;
}
