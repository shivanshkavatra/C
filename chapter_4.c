// #include<stdio.h>
//  q1. print the sum of first n natural numbers
// int main(){
//     int n;
//     int sum;
//     printf("enter the number: ");
//     scanf("%d", &n);

//     sum= n * (n+1)/2;

//     printf("%d\n", sum);
    



//     return 0;
// }

// q2. print the sum of n natural numbers and also print them in reverse.

// #include<stdio.h>

// int main(){
//     int n;
//     int sum=0;
//     printf("enter a number: ");
//     scanf("%d", &n);

    // for (int i = n; i > 0; i--)
    // {
    //     sum+= i;
    //     printf("%d", i);
    // }
    
    // printf("\n%d\n", sum);

    // OR

//     for (int i = 1 ,j=n ; i <=n || j > 0 ; i++,j--)
//     {
//         sum+= i;
//         printf("%d", j);
//     }
    
//     printf("\n%d\n", sum);


//     return 0;
// }

// q3. print the table of number.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i < 11; i++)
//     {
//         printf("%d\n", n*i);
//     }
    


//     return 0;
// }

// q4. keep taking numbers from user until user enters an odd number.

// #include<stdio.h>

// int main(){
//     int n;
    
//     for (int i = 0; ; i++)
//     {
//         printf("enter a number: ");
//         scanf("%d", &n);
//         if (n % 2 != 0)
//         {
//             break;
//         }
        
//     }
    
//     return 0;
// }

// keep taking input till user enters a number that is not a multiple of 7.

// #include<stdio.h>

// int main(){
//     int n;
    
//     for (int i = 0; ; i++)
//     {
//         printf("enter a number: ");
//         scanf("%d", &n);
//         if (n % 7 == 0 )
//         {
//             break;
//         }
        
//     }
    
//     return 0;
// }

// print all odd numbers from 5 to 50.

// #include<stdio.h>

// int main(){

//     for (int i = 5; i < 51; i++)
//     {
//         if (i%2 != 0)
//         {
//             printf("%d\n", i);
//         }
        
//     }
    
    
    

//     return 0;
// }

// or

// #include<stdio.h>

// int main(){

//     for (int i = 5; i < 51; i++)
//     {
//         if (i%2 == 0)
//         {
//             continue;
//         } else{
//             printf("%d\n", i);
//         }
        
//     }
//     return 0;
// }

// print factorial of n.

#include<stdio.h>

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*= i;
        
    }
    printf("%d\n", fact);
    
    return 0;
}