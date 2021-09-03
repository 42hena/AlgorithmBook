#include <stdio.h>

int main()
{
	int C;
	int N, L;
	int c;
	int i, j;
    int num;
	int arr[100];
	double min=1000;
	double sum = 0;
	scanf("%d", &C);
	for(c = 0 ; c < C ; c++){
		scanf("%d %d", &N, &L);
		for(i = 0 ; i < N ; i++)
			scanf("%d", &arr[i]);
		//입력

		for(i = 0 ; i < N - L ; i++)
		{
			sum = 0;
			for(j=i ; j <i+L ; j++)
				sum += arr[j];
			if (sum/L < min)
				min = sum/L;
            num = L;
			for(j = i + L ; j < N; j++)
            {
                num++;
				sum += arr[j];
                if (sum/num < min)
				    min = sum/num;
            }
		}
		printf("%lf\n", min);
	}
}