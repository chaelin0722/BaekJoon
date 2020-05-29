/*제한조건! 
시간 : 1초
메모리 : 128MB
따라서 아래코드는 시간 초과 발생.. mergesort 나 quick sort 사용 필요 
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	
	int n,i;
	cin>>n;
	
	int arr[n];
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
