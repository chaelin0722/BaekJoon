/*vector 을 사용하는 방법*/
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
         //9명 난쟁이 합 중 두명의 난쟁이 합을 뺐을 때 100이 되면
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
            sum += n; //모든 키의 합 구하기  
        }

        sort(height.begin(), height.end()); //미리 정렬
        total();

        return 0;

}


