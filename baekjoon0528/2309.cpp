#include<iㅎostream>
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
				height[j] = MAX;  //임의의 숫자를 대입한다.  
				check = true;
				break;
			}
		}
		
		if(check)	break;
	}
	/*sort 함수는 기본적으로 오름차순 정렬을 수행하고
	 배열의 시작점주소와 마지막 주소+1 을 적으면 된다.*/
	sort(height, height+10);  //총 10개의 원소가 있는 배열 height 를 정렬해줌  
	/*
	임의의 숫자를 대입한 경우.. 그것만 빼서 출력하면 되지만.. 이미 입력시
	100을 넘기지 않는 숫자만 입력받으므로 sort  과정에서 8번째와 9번째로 들어갔을 것이다.
	따라서 출력은 맨 아래와 같이 1부터 7만 하면 더 간단하지 않나~ ㅎ 
	for(int i=1;i<=7;i++){
		if(height[i]!=MAX) cout<<height[i]<<endl;
	}
	*/
	for(int i=1;i<=7;i++){
		cout<<height[i]<<endl;
	} 

	
	
	return 0;
}
