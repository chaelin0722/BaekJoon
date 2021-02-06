#include <iostream>
#include <queue> // use bfs algorithm
#include <stdio.h> // use printf, scanf
#include <cstring> // use memset
#define MAX 100

using namespace std;

int M, N;
int maze[MAX][MAX] = {0,};
int dist[MAX][MAX] = {0,};
bool visited[MAX][MAX] = {false,};

int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
/*
bool isInside(int nx, int ny){
	return (0<= nx && 0<=ny && nx < N && ny < M);
}
*/
int BFS(int x, int y, int cnt){
	
	queue < pair<pair<int, int>, int> > que;
	que.push(make_pair(make_pair(x,y), cnt));
	
	while(!que.empty()){
		x = que.front().first.first;
		y = que.front().first.second;
		cnt = que.front().second;
		que.pop();
		
		if(x == N-1 && y == M-1)	return cnt; // 마지막에 도달하면..! 리턴! 
		
		for(int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if( nx<0 || nx>=N || ny<0 || ny>=M ) continue;
			if(maze[nx][ny] && !visited[nx][ny]){
				visited[nx][ny] = true;
				que.push(make_pair(make_pair(nx,ny), cnt+1));
			}
		}	
	}
	
}
int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < M; j++)	maze[i][j] = temp[j] - '0';
	}
	visited[0][0] = true;
	cout << BFS(0, 0, 1) << endl;
	return 0;
}
/*
int main(void){

	scanf("%d %d", &N, &M);
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			scanf("%d", &maze[i][j]);
		}
	}
	
	
	visited[0][0] = true;
	
	printf("%d\n", BFS(0,0,1));
	
	return 0;
}*/
