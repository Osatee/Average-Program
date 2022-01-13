#include <stdio.h>

int main()
{
	float n[5000];
	int i=0;
	float total = 0;
	float avg=0;
	
	do{
		i++;
		scanf("%f", &n[i]);
		total += n[i];
	}while (n[i] != 0);
	avg = total /(i-1);
	
	printf("%f" , avg);
}
