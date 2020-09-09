#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
	if(a.first < b.first) return true;
	return false;
	
}

int main(void){
	ios::sync_with_stdio(false); //cin, cout �� printf, scanf ���� ������ ���� ����ȭ���ش�.. ���������ƴ� 
	vector< pair<int, string> > vec; 
	int n;
	cin>>n;
	vec.resize(n); //resize() �Լ� 
	
	int i;
	for(i=0;i<n;i++){
		cin>> vec[i].first >> vec[i].second;
		
	}
	stable_sort(vec.begin(), vec.end(), comp);
	
	for(i=0;i<n;i++){
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	
	
	return 0;
}

/* vector �Լ� 
reserve()�� ������ ����ȴ�.

�迭�� ���鶧 int array[ũ��] �ϴ°Ͱ� ����.
���� ������ �����Ͱ� ���� �߰��ȴٸ� ���Ͱ� ���� á���� ������ ������ �ø��� �ʱ� ������ 
������ �� ����� �� �ִ�.
���� ���� �����¿��� �� ��������� �þ��.


resize()�� ���� ���� + ���� ��� ������ Ư���� ������ ä���.

������ ���鶧 �����Ⱚ�� ���� �ϱ����� NULL�� �ʱ�ȭ �ϴ°Ͱ� ����ϴ�. 
ex) int array[10] = {0 ,}
���纸�� ū ������ �����ϸ� �׸�ŭ �� ����ִ´�. 
ex) 5���� ����ִ� ���¿��� resize(10)�ϸ� 5���� ���� -> 5 + 5 = 10
�뷮�� �� ������ �ִ�. �� ��������� ��������...  


stable_sort�� sort�� �ٸ� ���� �����ϴ� ���� ���� ���� ����̴�..
 
*/
