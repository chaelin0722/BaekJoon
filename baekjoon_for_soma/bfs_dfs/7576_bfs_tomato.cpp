#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

#define MAX 1000
using namespace std;

int N, M;
int day;
int tomato[MAX][MAX];
bool visit[MAX][MAX];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

queue < pair < pair <int, int>, int > > que;

int BFS(){	
	while(!que.empty()){
		
		int x = que.front().first.first;
		int y = que.front().first.second;
		day = que.front().second;
		que.pop();
			
		for(int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx<0 || ny<0 || nx >= M || ny >= N ) continue;
			if(tomato[nx][ny] == 0 && !visit[nx][ny]){
				visit[nx][ny] = true;
				que.push(make_pair(make_pair(nx,ny), day+1));
			}

		}
	}//end while	
}

void check(){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(tomato[i][j] == 0 && !visit[i][j]){
				day = -1;
				break;
			}
		}
	}
}
void init() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main(){
	
	init();
	
	cin >> N >>M;
	
	for(int i=0;i<M; i++){
		for(int j=0;j<N;j++){
			cin>> tomato[i][j];
			if(tomato[i][j] == 1){
				visit[i][j] = true;
				que.push(make_pair(make_pair(i,j), 0));
			}
		}
	}
	BFS();
	check();
	cout << day<<endl;
	return 0;
}


