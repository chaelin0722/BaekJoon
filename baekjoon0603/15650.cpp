/*
 ������ ���������̾�� �Ѵٴ� ��=> ������ ���ں��� ���� ���ڵ��� ������ �ȵǴ� ����! 
 �ߺ� ������ ����� �Ѵ�.. �ݴ��� ���� ������� �ʾƾ���.. 
*/
#include<iostream>
#include<vector>
#define MAX 9

using namespace std;

int N,M;
bool visit[MAX];
int arr[MAX];
vector<int> v;

void dfs(int idx, int cnt){
	if(cnt == M){
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=idx; i<N; i++){
		if(visit[i]==true) continue;
		visit[i] = true;
		v.push_back(i+1);
		dfs(i, cnt+1);
		v.pop_back();
		visit[i] = false;
	}
	
}

int main(){
	cin>>N>>M;
	dfs(0,0);
	return 0;
}
