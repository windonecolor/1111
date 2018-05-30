#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	int temp;

	printf("Vui long nhap so nguyen co 3 chu so : ");
	nhap:
	scanf_s("%d", &n);

	if (n < 100 || n > 999) {
		printf("Vui long nhap so nguyen co 3 chu so : ");
		printf("\nVui long nhap lai !!!");
		goto nhap;
	}

	int a;
	a= n % 10; 
	int j;
	j = n / 10;
	int b;
	b = j % 10;
	int c;
	c = j / 10; 

	
	if (a>b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a>c) {
		temp = a;
		a = c;
		c = temp;
	}

	
	if (b>c) {
		temp = b;
		b = c;
		c = temp;
	}

	printf("\n %d%d%d", c, b, a);

	_getch();
	return 0;
}
