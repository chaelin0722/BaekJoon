/*vector �� ����ϴ� ���*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> height;
int sum = 0; 

void total(void)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
         //9�� ������ �� �� �θ��� ������ ���� ���� �� 100�� �Ǹ�
	         if (sum - height[i] - height[j] == 100)
    	     {
                for (int k = 0; k < 9; k++)
                    if (k != i && k != j)
                        cout << height[k] << endl;

                 return;
         }
  }
 }
}

int main(void)
{
    for (int i = 0; i < 9; i++)
        {
     	    int n;
            cin >> n;
            height.push_back(n);
            sum += n; //��� Ű�� �� ���ϱ�  
        }

        sort(height.begin(), height.end()); //�̸� ����
        total();

        return 0;

}


