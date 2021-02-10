#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>

#define MAX 51
using namespace std;

int testcase, N, M,K;
int mat[MAX][MAX]={0,};
bool visit[MAX][MAX]={false,};

int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	

}
void DFS(int x, int y){
	for(int i=0;i<4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
		if(mat[nx][ny] == 1 && !visit[nx][ny]){
			visit[nx][ny] = true;
			DFS(nx,ny);
		}
	}
}
int main(){
	init();
	cin>>testcase;
	
	while(testcase--){
		int cnt = 0;
		memset(mat, 0, sizeof(mat));
		memset(visit, false, sizeof(visit));
		
		cin>>M>>N>>K;
		
		for(int i=0;i<K;i++){
			int x, y;
			cin>>x>>y;
			mat[x][y] = 1;
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				if(mat[i][j] == 1 && !visit[i][j]){
					cnt++;
					visit[i][j] = true;
					DFS(i,j);
				}
			}
		}
		
		cout<<cnt<<endl;
	}
	
	return 0;
}
