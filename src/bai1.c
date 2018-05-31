#include<stdio.h>
#include<conio.h>

int main() {
	int m;
	m = Input();
	Action(m);

	_getch();
	return 0;
}

int Input() {
	int n;
	printf("Vui long nhap vao so nguyen co 3 chu so: ");

	do
	{
		scanf_s("%d", &n);

		if (n < 100 || n > 999) {
			printf("Ban nhap sai !!!\nVui long nhap lai: ");
		}
	}

	while (n < 100 || n > 999);

	return n;
}
int Action(int m) {

	int a;
	a = m % 10; 
	int j;
	j = m / 10;
	int b;
	b = j % 10; 
	int c;
	c = j / 10;

	int temp;

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

	printf("\n%d%d%d", c, b, a);
}

