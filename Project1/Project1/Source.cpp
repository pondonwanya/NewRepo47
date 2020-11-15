#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include <dos.h>  
#include <stdio.h> 
#include <string.h> 

void inputpassword(void);

void outputpassword(void);

struct password
{
	char password[6];
	int check;
}gotoo;



int main()
{

	inputpassword();
	printf("Please push Enter .\n");
	_getch();
	outputpassword();

	_getch();
}

void inputpassword()
{
	printf("Enter Password : ");

	for (gotoo.check = 0; gotoo.check < 6; gotoo.check++) {


		gotoo.password[gotoo.check] = _getch();


		printf("*");
	}
	gotoo.password[gotoo.check] = '\0';
	printf("\n");
}

void outputpassword()
{
	printf("Show password : ");
	if (gotoo.password[gotoo.check] != '\0' || gotoo.password[gotoo.check] != 'x') {
		for (gotoo.check = 0; gotoo.password[gotoo.check] != '\0'; gotoo.check++)
			printf("%c", gotoo.password[gotoo.check]);
	}

}