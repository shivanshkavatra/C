// #include<stdio.h>

// to reverse a number
// int main(){
//     long int n;
//     printf("enter a number: ");
//     scanf("%ld", &n);
//     while(n)
//     {
//         printf("%ld",n%10);
//         n=n/10;
//     }
//     return 0;
// }

// to check whether a number is armstrong or not

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
    
//     int orginal_n=n;

//     int sum=0;

//     while (n>0)
//     {
//         int last_digit=n%10;
//         sum+= pow(last_digit,3) ;
//         n=n/10;

//     }
    
//     if (sum==orginal_n)
//     {
//         printf("Given number is an Armstrong number.");
//     }
//     else{
//         printf("Given number is not an Armstrong number.");
//     }
//     return 0;
// }

// to calculate sum of the following series:
// 1+3/2! + 5/3! + .....

// #include<stdio.h>  
// int main()    
// {    
//  int i,fact=1,number;    
//  printf("Enter a number: ");    
//   scanf("%d",&number);    
//     for(i=1;i<=number;i++){    
//       fact=fact*i;    
//   }    
//   printf("Factorial of %d is: %d \n",number,fact);    
// return 0;  
// }   

