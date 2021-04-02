 #include <stdio.h>
 int main()
 {
 	int a, i;
 	int arr[9];
	scanf("%d", &a);
 	switch(a)
 	{
 
		 
		
 		case 1:
 			for(i=0; i<10; i++)
 			scanf("%d", &arr[i]);
 			break;
 		case 2:
 			for(i=0; i<10; i++)
 			printf("%d", arr[i]);
 			break;
 		case 3:
 			printf("언디파인드 파이팅!");
 			break;
 			default:
 				break;
 			
}

	 return 0;
 }
