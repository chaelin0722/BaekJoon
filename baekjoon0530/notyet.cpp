#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
	
	int n, i;
	cin>>n;
	
	vector< vector<int> > arr(n, vector<int>(2,0)); //n*2�� �ʱ�ȭ 
	// n*m �������� int�� ���� arr�� 0���� �ʱ�ȭ 
	/*
	   vector<vector<int>> arr;
	   arr.assign(n, vector<int>(m,0)); �� ����  
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
