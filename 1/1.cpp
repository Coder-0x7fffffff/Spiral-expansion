#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{ //direction(0��1��2��3��) count����һ��ѭ�� n�߽糤�� lengthÿ��ѭ������
	int **map,num,n,x = 0, y = 0, length = 1, count = 0, direction = 0;
	std::cout << "������һ������:";
	std::cin >> num;
	for (n = 0; n*n <= num; n++);  //������ӽ���ƽ����
	map = new int*[++n];   //++n��ֹԽ��
	for (int i = 0; i < n; i++)  //��ʼ������
		memset(map[i] = new int[n], 0, sizeof(int)*n);
	map[n / 2][n / 2] = num--;
	while (num > 0)
	{
		if(direction % 4 ==0)
			for (int i = 1; i <= length && num > 0; i++)  //��length��
				map[n / 2 + y][n / 2 + ++x] = num--;
		else if (direction % 4 == 1)
			for (int i = 1; i <= length && num > 0; i++)
				map[n / 2 + ++y][n / 2 + x] = num--;
		else if (direction % 4 == 2)
			for (int i = 1; i <= length && num > 0; i++)
				map[n / 2 + y][n / 2 + --x] = num--;
		else if (direction % 4 == 3)
			for (int i = 1; i <= length && num > 0; i++)
				map[n / 2 + --y][n / 2 + x] = num--;
		direction = ++direction % 4;  //ת��
		if (!((++count) % 2))length++; //2�ε���һ�γ���
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j])
				std::cout << map[i][j] <<"\t";
			else std::cout << "\t";
		}
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}