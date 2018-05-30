#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	char s[1000];
	printf("Vui long nhap sau ki tu : ");
	fflush(stdin);
	fgets(s, 1000, stdin);
	s[-1] = ' ';
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] == ' ' && (s[i + 1] == '.' || s[i + 1] == ',')) {
			continue;
		}
		if (s[i] == ' ' && s[i - 1] == ' ') {
			continue;
		}
		if (s[i] == ',' || s[i] == '.')
		{
			if (s[i + 1] == ',' || s[i + 1] == '.') {
				continue;
			}
			else if (s[i + 1] != ' ')
			{
				printf("%c", s[i]);
				printf(" ");
				continue;
			}
		}
		printf("%c", s[i]);
	}
	_getch();
}