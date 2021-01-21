#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, M, num, cnt = 0;
	vector<int> deque;

	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		deque.push_back(i);

	for (int j = 0; j < M; j++) {
		scanf("%d", &num);

		for (int i = 0; i < N; i++) 
			if (deque[i] == num) {

                // ��&�ڿ��� Ž���� �� �߿��� ���� ���� cnt������
				cnt += min(i, N - i);
                
                // �ش� ������ rotate����. (�˸°� deque���� ����)
				rotate(deque.begin(), deque.begin() + i + 1, deque.end() - j);
				break;
			}

		N--; // �����ϳ��� �̾Ƴ±� ������ Deque�� ���� ������ �پ��
	}

	printf("%d\n", cnt);

	return 0;
}
