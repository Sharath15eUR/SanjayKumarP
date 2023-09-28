#include <stdio.h>
int main()
{
	int array[100], search, n, count = 0;
	scanf("%d", &n); 
	int c;
	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);
	scanf("%d", &search); 
	int i;
	for(i=0;i<n;i++){
	if(search==array[i]){
		count+=1;
		printf("%d is present at location %d.\n", search, i+1); 
  	}
	}	

	if(count!=0){
		printf("%d is present %d times in the array.", search, count);
	}  
	else
  		printf("%d is not present in the array.", search);

	return 0;

}
