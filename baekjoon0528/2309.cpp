#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 987654321
int main(void){
	
	int i, j, sum=0;
	int height[10];
	bool check = false;
	
	for(i=1;i<=9;i++){
		
		cin>>height[i];
		sum += height[i];
	}
	for(i=1;i<=9;i++){
		for(j = i+1;j<=9;j++){
			if((sum - height[i]-height[j])==100){
				height[i] = MAX;
				height[j] = MAX;
				check = true;
				break;
			}
		}
		
		if(check)	break;
	}
	/*sort 함수는 기본적으로 오름차순 정렬을 수행하고
	 배열의 시작점주소와 마지막 주소+1 을 적으면 된다.*/
	sort(height, height+10);  //총 10개의 원소가 있는 배열 height 를 정렬해줌  
	for(int i=1;i<=7;i++){
		if(height[i]!=MAX) cout<<height[i]<<endl;
	}

	
	
	return 0;
}
