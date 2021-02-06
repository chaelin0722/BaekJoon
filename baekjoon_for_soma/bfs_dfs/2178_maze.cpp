#include <iostream>
#include <queue> // use bfs algorithm
#include <stdio.h> // use printf, scanf
#include <cstring> // use memset
#define MAX 100

using namespace std;

int M, N;
int maze[MAX][MAX];
int dist[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool isInside(int nx, int ny){
	return (0<= nx && 0<=ny && nx < N && ny < M);
}

void BFS(int x, int y){


	queue < pair<int, int> > que;
	que.push(make_pair(x,y));
	visited[x][y] = true;
	dist[x][y] = 1;

	while(!que.empty()){
		x = que.front().first;
		y = que.front().second;
		que.pop();

		for(int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];

			if(isInside(nx, ny) && maze[nx][ny] && !visited[nx][ny]){
				visited[nx][ny] = true;
				dist[nx][ny] = dist[x][y] + 1;
				que.push(make_pair(nx, ny));
			} //end if
		}//end for
	}//end while

}


int main(void){

  memset(maze, false, sizeof(maze));
	memset(dist, false, sizeof(dist));
	memset(visited, false, sizeof(visited));

	int i, j, num;

	scanf("%d %d", &N, &M);
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d", &maze[i][j]);
		}
	}

	BFS(0,0);

	printf("%d\n", (dist[N-1][M-1]));

	return 0;
}
