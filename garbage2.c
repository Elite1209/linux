// #include<stdio.h>
// int main (){

//     int array[55];
//     int n,temp;
//     printf("Enter the number of elements you want to input in the array \n");
//     scanf("%d",&n);
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d",&array[i]);
//     }
//     printf("\n\nBefore\n\n");
//     for (int  i = 0; i < n; i++)
//     {
//         printf("%d  ",array[i]);
//     }
//     for (int i = 0; i < n/2; i++)
//     {
//         temp = array[i];
//         array[i] = array[n-i-1];
//         array[n-i-1] = temp;
//     }
//     printf("\n\nAfter\n\n");

//     for (int  i = 0; i < n; i++)
//     {
//         printf("%d  ",array[i]);
//     }

// return 0;
// }

////////////////////////////???????????????/////////////////////////////////Travel Agency Structure////////////////////////////////////////

// #include<stdio.h>
// typedef struct travelAgencyManger
// {
//     char name[55];
//     char dlno[55];
//     int route;
//     int kms;
// }dr;

// int main ()
// {
//     int n;
//     dr d[20];
//     printf("Enter the number of drivers you want to input\n");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the name for driver %d\n",i+1);
//         // scanf("%s", &dr[i].name);
//         // scanf("%s",&d[i].name);
//         fgets(d[i].name);

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the number of Driving Liscense for driver %d\n",i+1);
//         // scanf("%s", &dr[i].name);
//         scanf("%s",&d[i].dlno);

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Specify the route for driver %d (1,2,or 3)\n",i+1);
//         // scanf("%s", &dr[i].name);
//         scanf("%d",&d[i].route);

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the kms travelled for driver %d\n",i+1);
//         // scanf("%s", &dr[i].name);
//         scanf("%d",&d[i].kms);

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Name of driver %d is %s\n",i+1,d[i].name);
//         printf("Driving Liscense of driver %d is %s\n",i+1,d[i].dlno);
//         printf("Route of driver %d is %d\n",i+1,d[i].route);
//         printf("Kms driven for driver %d is %d\n",i+1,d[i].kms);
//         printf("\n\n");

//     }

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////Random Number Generator/////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main (){

//     srand(time(NULL));//Here time function return the second count if we dont initialize to null or 0 it will not givea random number
//     int random  = (rand()%3)+1;
//     printf("%d ",random);

// return 0;
// }