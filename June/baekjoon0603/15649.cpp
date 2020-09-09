#include<iostream>
using namespace std;
#define MAX 9

int N,M;
int lists[MAX];
bool check[MAX] = {0, };

void dfs(int cnt){
	if(cnt == M){
		for(int i=0;i<M; i++){
			cout<<lists[i]<<" ";
		}
		cout<<endl;
		return;
	}

	for(int i=1; i<=N; i++){
		if(!check[i]){  // checked == 0 �� ���� ��  �ݴ�� if(a) �� if(a != 0) �� ������ 
			check[i] = true;
			lists[cnt] = i;
			dfs(cnt+1);
			cout<<"���� �����?\n" ;
			check[i] = false;
		} 
	}	
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>N>>M;
	dfs(0);	
	return 0;
}
