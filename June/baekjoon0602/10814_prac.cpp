#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

bool comp(pair<int,string> a, pair<int, string> b){
	return a.first < b.first;
}
int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
	
	int n;
	cin>>n;
	vector< pair<int, string> > vec(n); //n크기의 vec이름으로 vector객체 생성  
	
	int i;
	for(i=0;i<n;i++){
		cin>>vec[i].first>>vec[i].second;
	}
	
	stable_sort(vec.begin(),vec.end(),comp);
	
	for(i=0;i<n;i++){
		//printf("%d %s\n", vec[i].first, vec[i].second);
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	
	return 0;
}
