#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{ //direction(0右1下2左3上) count两次一个循环 n边界长度 length每次循环长度
	int **map,num,n,x = 0, y = 0, length = 1, count = 0, direction = 0;
	std::cout << "请输入一个整数:";
	std::cin >> num;
	for (n = 0; n*n <= num; n++);  //查找最接近的平方数
	map = new int*[++n];   //++n防止越界
	for (int i = 0; i < n; i++)  //初始化数组
		memset(map[i] = new int[n], 0, sizeof(int)*n);
	map[n / 2][n / 2] = num--;
	while (num > 0)
	{
		if(direction % 4 ==0)
			for (int i = 1; i <= length && num > 0; i++)  //走length步
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
		direction = ++direction % 4;  //转向
		if (!((++count) % 2))length++; //2次递增一次长度
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