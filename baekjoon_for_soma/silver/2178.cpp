/*
	미로찾기 => bfs 문제 
*/
#include <iostream>
#include <queue>
#include <cstring> //memset
#include <stdio.h> // printf, scanf
#define max 101

using namespace std; 
int n,m;
int mat[max][max] = {0,};
bool visited[max][max];
int dist[max][max];

// 네 방향 탐색
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool isInside(int ny, int nx){
	return( 0<=nx && 0<=ny && nx<m, && ny<n);
} 

void bfs(int y, int x){
	
	queue<pair<int, int>> q; // queue (y,x)
	visited[y][x] = true;
	dist[y][x] = 1; 
	
	q.push(make_pair(y,x));
	
	while(!q.empty()){
		y = q.front().first;
		x = q.front().second;	
		q.pop();
		//사방을 확인 
		int i;
		for(i=0;i<4;i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			
			if(isInside(ny, nx) && mat[ny][nx] && !visited[ny][nx]){
				visited[ny][nx] = true;
				dist[ny][nx] = dist[y][x] + 1; // 이전방문값 +1
				q.push(make_pair(ny, nx)); 
			} 
		}	
	}
}

int main(){
	//초기화
	memset(mat, false, sizeof(mat));
	memset(visited, false, sizeof(visited)); 
	memset(dist, false, sizeof(dist));
	 
	scanf("%d %d", &n, &m); 
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &mat[i][j]);
			//cin>>num;
			//mat[i][j] = num;
		}
	}
	
	bfs(0,0);
	printf("%d\n", dist[n-1][m-1]);
	return 0;
}
