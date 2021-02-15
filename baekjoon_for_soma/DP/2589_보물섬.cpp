#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include <iostream>
#include <queue>
using namespace std;

#define MAX 51

int island[MAX][MAX];
int sum[MAX][MAX];
int N, M;
int max_num = 0;
bool visit[MAX][MAX];


int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1, 0, 0};

void BFS(int x, int y){
	visit[x][y] = true;
	queue< pair <int, int> > que;
	que.push(make_pair(x,y));
	
	while(!que.empty()){
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		
		for(int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(island[nx][ny] == 1 && !visit[nx][ny]){
				visit[nx][ny] = true;
				que.push(make_pair(nx,ny));
				sum[nx][ny] = sum[x][y] + 1;
				max_num = max(max_num, sum[nx][ny]);
			}
		}	
	}
	
}
void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main(){
	init();
	char temp;
	cin >> N >> M;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>temp;
			if(temp == 'L') island[i][j] = 1;
		}
	} 
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(island[i][j] == 1){
				BFS(i,j);
				memset(visit, false, sizeof(visit));
				memset(sum, 0, sizeof(sum));
			}
			
		}
	}
	cout<<max_num;
	
	return 0;
}
