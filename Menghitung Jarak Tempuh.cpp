#include<stdio.h>
#include<conio.h>
int main()
{
	int s,v,t;
	printf("Masukkan kecepatan (v) : ");scanf("%i", &v);
	printf("masukkan waktu dalam sekon (t) : ");scanf("%i", &t);
	s=v*t;
	printf("S = %i * %i = %i Meter",v,t,s);
	getch();
}
