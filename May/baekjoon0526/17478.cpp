#include<iostream>
using namespace std;

int N = 0;

void jague(int n){
	if((n>=1 && n<=50 && N<n)){
		cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
		N = n;
	}
	if(n==0)	{
		for (int i = N; i > 0; i--) { cout << "____"; }
		cout << "\"����Լ��� ������?\"" << endl;
		for (int i = N; i > 0; i--) { cout << "____"; }
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
		for (int i = N; i > 0; i--) { cout << "____"; }
		cout << "��� �亯�Ͽ���." << endl;
	}
	int i;
	if(n>=1 && n <=50){
		for(i=N;i>n;i--) cout<<"____";
		cout<<"\"����Լ��� ������?\""<< endl; 
		for(i=N;i>n;i--) cout<<"____";
		cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\""<< endl;
		for(i=N;i>n;i--) cout<<"____";
		cout<<"\"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\""<< endl;
		for(i=N;i>n;i--) cout<<"____";
		cout<<"\"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\""<< endl;
		
		jague(n-1);
		for(i = N;i>n;i--) cout<<"____";
		cout<<"��� �亯�Ͽ���."<<endl; 

	}
	
	return;
}

int main(void){
	int n;
	cin>>n;

	jague(n);


	return 0;
}
