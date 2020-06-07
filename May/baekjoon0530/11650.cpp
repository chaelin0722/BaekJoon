#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
	
	int n, i;
	cin>>n;
	
	vector< vector<int> > arr(n, vector<int>(2,0)); //n*2로 초기화 
	// n*m 사이즈인 int형 벡터 arr을 0으로 초기화 
	/*
	   vector<vector<int>> arr;
	   arr.assign(n, vector<int>(m,0)); 과 같다  
	*/ 
	
	
	for(i=0;i<n;i++){		
		cin>>arr[i][0]>>arr[i][1]; 
	}
	sort(arr.begin(), arr.end());
	for(i=0;i<n;i++){
		cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
	}
	return 0;
}
