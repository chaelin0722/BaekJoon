#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
int N,M;
char ch;
#define MAX 11

int board[MAX][MAX];
bool visit[MAX][MAX] = {false, };

int dx[4] = {0,0,-1,1};
int dy[4] = { -1, 1, 0,0};

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main(){
	cin>>N>>M;	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>ch;
			board[i][j] = ch;
		}
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(board[i][j] == '#'){
				visit[i][j] = true;
			}
		}
	}
	return 0;
}
