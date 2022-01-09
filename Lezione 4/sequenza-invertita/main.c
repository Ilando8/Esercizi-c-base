#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];

	for (int i = 0; i<10; i++) {
		printf ("Elemento %d:", i+1);
		scanf("%d",&a[i]);
	}
	for(int i=9; i>=0; i--) {
		if (a[i]%2==0)
			printf("%d \n", a[i]/2);
        else
            printf("%d \n", a[i]);
	}
	return 0;
}
