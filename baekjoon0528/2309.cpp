#include<i��ostream>
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
				height[j] = MAX;  //������ ���ڸ� �����Ѵ�.  
				check = true;
				break;
			}
		}
		
		if(check)	break;
	}
	/*sort �Լ��� �⺻������ �������� ������ �����ϰ�
	 �迭�� �������ּҿ� ������ �ּ�+1 �� ������ �ȴ�.*/
	sort(height, height+10);  //�� 10���� ���Ұ� �ִ� �迭 height �� ��������  
	/*
	������ ���ڸ� ������ ���.. �װ͸� ���� ����ϸ� ������.. �̹� �Է½�
	100�� �ѱ��� �ʴ� ���ڸ� �Է¹����Ƿ� sort  �������� 8��°�� 9��°�� ���� ���̴�.
	���� ����� �� �Ʒ��� ���� 1���� 7�� �ϸ� �� �������� �ʳ�~ �� 
	for(int i=1;i<=7;i++){
		if(height[i]!=MAX) cout<<height[i]<<endl;
	}
	*/
	for(int i=1;i<=7;i++){
		cout<<height[i]<<endl;
	} 

	
	
	return 0;
}
