#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

bool comp(pair<int,string> a, pair<int, string> b){
	if(a.first < b.first) return true;
	if(a.first == b.first) return a.first<b.first;  // ���̰� ������ �Է¼������ ���� 
	return false; 
}
int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 	
	int n;
	cin>>n;
	
	vector< pair<int, string> > vec(n); //nũ���� vec�̸����� vector��ü ����  
	
	int i;
	for(i=0;i<n;i++){
		cin>>vec[i].first>>vec[i].second;
	}
	
	sort(vec.begin(),vec.end(),comp);
	
	for(i=0;i<n;i++){
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	
	return 0;
}
