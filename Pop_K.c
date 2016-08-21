#include <stdio.h>

int main(void)
{
	int n = 1;
	int k = 0;
	int temp_k = 0;	//from 0 count to k
			
	scanf("%d %d", &n, &k);
	int n_array[n];	//n nums arry
	for (int i=0; i<n; i++) {
		scanf("%d", &n_array[i]);
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n-i-1; j++) {
			if (n_array[j]>n_array[j+1]) {
				int temp = n_array[j];
				n_array[j] = n_array[j+1];
				n_array[j+1] = temp;
			}
		}
		++temp_k;
		if(temp_k==k) {
			for(int m=0; m<n-1; m++) {
				printf("%d ", n_array[m]);
			}
			printf("%d\n", n_array[n-1]);
		}
	}
	
	return 0;
}
