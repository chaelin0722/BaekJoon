#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t, i;
	long long x, y;
	
	cin.tie(0);
	cin >> t;
	for(i=0;i<t;i++){
		cin >> x>> y;
		double dist = y-x;
		double ddist = sqrt(dist);
		int pow = round(sqrt(dist)); // �ݿø�  
		
				
		if(ddist <= pow) cout << pow*2 -1<<"\n"; 
		else cout<< pow*2 <<"\n"; 
	
	}

	return 0;
}
/*
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	cin.tie(0);
	int t;
	cin >> t;
	
	long long x, y;
	
	for(int i=0; i<t; i++){
		cin >> x >> y;
		double dist = y-x; // �� ���� ������ �Ÿ�
		double dpow = sqrt(dist); // �Ÿ��� ������
		int pow = round(sqrt(dist)); // �Ÿ��� �������� �ݿø�
		
		if(dpow <= pow) cout << pow * 2 - 1 << "\n"; 
		else cout << pow * 2 << "\n"; 
	}
		
	return 0;
}
*/
