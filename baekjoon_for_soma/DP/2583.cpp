#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX 101

int mat[MAX][MAX];
int N, M,K;
int cnt = 0;
bool visit[MAX][MAX];

int dx = {0,0,1,-1};
int dy = (1,-1, 0, 0);

void DFS(int x, int y){
	visit[x][y] = true;
	cnt++;
	for(int i=0;i<4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0|| nx >= M || ny>=N) continue;
		if(mat[nx][ny] == 0 && !visit[nx][ny]){
			DFS(nx, ny);
		};
	}	
	
}

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main(){
	init();
	cin>>M>>N>>K;
	
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			mat[i][j];
		}
	}
	
	
	cout<< <<endl;
	cout<< <<endl;
	return 0;
}
