# Spiral expansion #
The first question of the first semester in CUG

## 【需求规格说明】 ##
给定一个整数 n，从 n 开始向外螺旋展开，如下 

n=12 的情况：

![](https://github.com/Coder-0x7fffffff/SpiralExpansion/blob/master/img/12.png)

n=13 的情况：

![](https://github.com/Coder-0x7fffffff/SpiralExpansion/blob/master/img/13.png)

请编写程序，打印出任意 n 的螺旋表。

## 【算法设计】 ##
1. 问题分析：

	首先，需要确定旋转方向，根据题目的图片以及题目中向外螺旋展开可知，题目要求为从最内部由向右开始向外逆时针展开。其次，要确定展开的最内部的点在何处。其次确定展开的规律
2. 设计思想：

	首先，找规律与整型取整的特性可以得出直接将宽度加一除以二即可得到中心点，根据数学分析易得规律为从向右开始两次转向为一次循环，每次转向的长度由1开始递增（如下图所示），采用动态内存存储防止极限数据越界。

	![](https://github.com/Coder-0x7fffffff/SpiralExpansion/blob/master/img/principle.png)

3. 设计表示：

	主函数(main)

## 【调试报告】 ##
采用memeset初始化动态申请的内存，降低时间复杂度

## 【附录】 ##
1. 源程序清单：

	1.cpp  \\主函数

2. 测试数据及运行结果：

	数据：32
	结果：（如下图所示）
	
	![](https://github.com/Coder-0x7fffffff/SpiralExpansion/blob/master/img/test32.png)
	
	数据：41
	结果：（如下图所示）
	
	![](https://github.com/Coder-0x7fffffff/SpiralExpansion/blob/master/img/test41.png)
	
	数据：79
	结果：（如下图所示）
	
	![](https://github.com/Coder-0x7fffffff/SpiralExpansion/blob/master/img/test79.png)
