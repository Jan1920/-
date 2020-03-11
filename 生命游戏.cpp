#include<graphics.h>//图形库,建立细胞边界 
#include<conio.h>//定义输入输出函数 getch()等 
#include<time.h>//某些时间函数 
#include<stdio.h>

//定义全局变量
_int8 word[102][102] ={0};//定义一个二维世界 

IMAGE imgLive,imgEmpty;//定义活细胞和死细胞 

//函数声明
void Init();//初始化
void SquareWorld();//定义细胞边界为方形
void RandWord();//生成的是一个随机的细胞世界
void paintWord();//绘制世界
void Evolution();//细胞随环境变化 


int main() 
{
	Init();
	int speed =750;//游戏速度
	while(true)
	{
		
	 } 
} 
