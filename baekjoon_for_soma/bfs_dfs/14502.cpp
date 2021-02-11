#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX 8

int N,M;
int rcount = 0;
int mat[MAX][MAX];
int mcopy[MAX][MAX];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

vector <pair<int, int> > vec;

int BFS(){
	queue <pair <int, int> > que;
	for(int i=0;i<vec.size();i++){
		que.push(make_pair(vec[i].first, vec[i].second));
	}
	while(!que.empty()){
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		
		for(int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx<0 || nx >= M || ny <0 || ny >= N) continue;
			
			if(mcopy[nx][ny] == 0){
				mcopy[nx][ny] = 2;
				que.push(make_pair(nx, ny));
			}
		}
	}
	int size = 0;
	for(int i=0; i<N;i++){
		for(int j=0;j<M;j++){
			if(mcopy[i][j] == 0) size++;
		}
	}
	rcount = max(size, rcount);
	return rcount;
	
}
int wall(int cnt){
	if(cnt==3){
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				mcopy[i][j] = mat[i][j];
			}
		}
		return BFS();
	}	
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(mat[i][j] == 0){
				mat[i][j] = 1;
				wall(cnt+1);
				mat[i][j] = 0;
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
	cin>>N>>M;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>> mat[i][j];
			if(mat[i][j] == 2) vec.push_back(make_pair(i,j));
		}
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(mat[i][j] == 0){
				mat[i][j] = 1;
				wall(1);
				mat[i][j] = 0;				
			}
		}
	}
	cout << rcount;
	return 0;
}
