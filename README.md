编写一个程序让用户按厘米输入一个高度值，然后，程序按照厘米和英尺英寸显示这个高度值。允许
厘米和英寸的值出现小数部分。程序允许用户继续输入，直到用户输入一个非正的数值。程序运行的示例
如下面所示： 
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters(<=O to quit): 168
168.0 cm = 5 feet, 6.1 inches
Enter a height in centimeters(<=O to quit): 0
bye

#include<stdio.h>
#define INCH 2.54  // 1 inch = 2.54cm

int main(void)
{
 float cm;
 printf("Enter a height in centimeters:");
 scanf("%f",&cm);
 while(cm>0)
 {
  printf("%.1f cm = %d feet, %.1f inches\n",cm,int(cm/INCH/12),cm/INCH-int(cm/INCH/12)*12);
  printf("Enter a height in centimeters(<=0 to quit):");
  scanf("%f",&cm);
 }
 printf("bye\n");
 return(0);
} 
