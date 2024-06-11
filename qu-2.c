#include<stdio.h>
 main()
{
	int row,large;
	
	printf("enter the row size : ");
	scanf("%d",&row);
	
	int i,a[row];
	
	for(i=0;i<row;i++){
			printf("enter a[%d][%d]",i);
			scanf("%d",&a[i]);
			large=a[i];

	}
	printf("the largest element is : %d\n",large);
	for(i=0;i<row;i++){
			large<a[i];
		}
	
}