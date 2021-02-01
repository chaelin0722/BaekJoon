#include<iostream>
#include <queue>
using namespace std;

#define MAX 1001
int mat[MAX][MAX];
int visit[MAX];
int n, m, v;

void dfs(int v){
	cout<<v<<' ';
	visit[v] = 1;
	int i;
	for(i=1;i<=n;i++){
		if(visit[i]==1 || mat[v][i]==0){
			continue;
		}
		dfs(i);
	}	
}

void bfs(int v){
	queue<int> q;
	q.push(v);
	visit[v] = 0;
	int i;
	while(!q.empty()){
		v = q.front();
		cout<<q.front()<<' ';
		q.pop();
		for(i=1;i<=n;i++){
			if(visit[i]==0 || mat[v][i]==0){
				continue;
			}
			q.push(i);
			visit[i] = 0;
		} 
	}
	
}
int main(){
	int i,x,y;
	cin>>n>>m>>v;
	for(i=0;i<m;i++){
		cin>>x>>y;
		mat[x][y] = mat[y][x] = 1;
	}
	dfs(v);
	cout<<endl;
	bfs(v);
		
	return 0;
}

