#include<stdio.h>
int main(){
   int day;
   int n;
   printf("Enter 1 to start the Program: ");
   scanf("%d",&n);

   while(n){
    printf("Enter the day: ");
   scanf("%d", &day);
   switch(day)
   {
   case 1:
    printf("Monday\n"); 
    
    printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);  
     break;
    case 2:
    printf("Tuesday\n"); 
     printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);   
     break;
    case 3:
    printf("Wednesday\n");  
     printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);  
     break;
      case 4:
    printf("Thursday\n");  
     printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);  
     break;
      case 5:
    printf("Friday\n");  
     printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);  
     break;
      case 6:
    printf("Saturday\n");
     printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);    
     break;
      case 7:
    printf("Sunday\n"); 
     printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n);   
     break;
   default:

    printf("Enter 0 to exit and 1 to go again : ");
     scanf("%d",&n); 
    
   break;
   }


   }



    return 0;
}