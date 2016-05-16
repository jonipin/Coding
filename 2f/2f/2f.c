//By ETERNUS@GAMES //
#include<stdio.h>
#include<stdlib.h>
main(){
	int x,y;
	x=3;
	y=10;
	y=x++;
	printf("1º resultado: %d %d \n" ,x,y);
	x=3;
	y=10;
	y=++x;
	printf("2º resultado: %d %d \n" ,x,y);
	x=3;
	y=10;
	y=y+(x++);
	printf("1º resultado: %d %d \n " ,x,y);
	x=3;
	y=10;
	y=y-(++x);
	printf("1º resultado: %d %d \n " ,x,y);
	system("pause");

}
