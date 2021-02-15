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

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1, 0, 0};

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
	vector <int> vec;
	cin>>M>>N>>K;
	while(K--){
		int x1, x2, y1, y2;
		cin >> y1 >> x1 >> y2 >> x2;
		for(int i = x1; i <x2; i++){
			for(int j = y1; j <y2; j++){
				mat[i][j]  = 1;
				visit[i][j] = true;
			}
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(mat[i][j] == 0 && !visit[i][j]){
				cnt = 0;
				DFS(i,j);
				vec.push_back(cnt);
			}
		}
	}
	sort(vec.begin(),vec.end());	
	cout<< vec.size() <<endl;
	for(int i=0;i<vec.size();i++) cout<< vec[i] <<' ';
	return 0;
}
