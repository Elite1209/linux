////////////////////Feb 9///////////////////
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int i = 4;
//     double d = 4.0;
//     char s[] = "HackerRank ";

    
//     // Declare second integer, double, and String variables.
//     int j;
//     double e;
//     char t[99];
//     // Read and save an integer, double, and String to your variables.
//     scanf("%d",&j);
//     scanf("%lf",&e);
//     scanf("%*[\n] %[^\n]",&t);
    
    
//     printf("%d\n",i+j);
//     // Print the sum of both integer variables on a new line.
//     printf("%.1lf\n",d+e);
//     // Print the sum of the double variables on a new line.
    
//     // Concatenate and print the String variables on a new line
//     // The 's' variable above should be printed first.
//     printf("%s%s",s,t);
//     // printf("The modified string is %s",s);

//     return 0;
// }

///////////////////////////Wed///////////////////Feb 10//////////////////////////
// #include <assert.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char* readline();

// // Complete the solve function below.
// void solve(double meal_cost, int tip_percent, int tax_percent) {
//  double tip=meal_cost*tip_percent/100;
//     double tax=meal_cost*tax_percent/100;
//     int totalCost=(int)round(meal_cost+tip+tax);    
//     printf("%d",totalCost);


// }

// int main()
// {
//     char* meal_cost_endptr;
//     char* meal_cost_str = readline();
//     double meal_cost = strtod(meal_cost_str, &meal_cost_endptr);

//     if (meal_cost_endptr == meal_cost_str || *meal_cost_endptr != '\0') { exit(EXIT_FAILURE); }

//     char* tip_percent_endptr;
//     char* tip_percent_str = readline();
//     int tip_percent = strtol(tip_percent_str, &tip_percent_endptr, 10);

//     if (tip_percent_endptr == tip_percent_str || *tip_percent_endptr != '\0') { exit(EXIT_FAILURE); }

//     char* tax_percent_endptr;
//     char* tax_percent_str = readline();
//     int tax_percent = strtol(tax_percent_str, &tax_percent_endptr, 10);

//     if (tax_percent_endptr == tax_percent_str || *tax_percent_endptr != '\0') { exit(EXIT_FAILURE); }

//     solve(meal_cost, tip_percent, tax_percent);

//     return 0;
// }

// char* readline() {
//     size_t alloc_length = 1024;
//     size_t data_length = 0;
//     char* data = malloc(alloc_length);

//     while (true) {
//         char* cursor = data + data_length;
//         char* line = fgets(cursor, alloc_length - data_length, stdin);

//         if (!line) { break; }

//         data_length += strlen(cursor);

//         if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

//         size_t new_length = alloc_length << 1;
//         data = realloc(data, new_length);

//         if (!data) { break; }

//         alloc_length = new_length;
//     }

//     if (data[data_length - 1] == '\n') {
//         data[data_length - 1] = '\0';
//     }

//     data = realloc(data, data_length);

//     return data;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////For printing the odd and even indices of an array differently/////////////////////////////
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>


// void myFunction(char s[])
// {
//     for(int i=0;i<strlen(s);i++)
//     {
//         if (i%2 == 0)
//         {
//             printf("%c",s[i]);
//         }
//     }
    
//     printf(" ");

//     for(int i=0;i<strlen(s);i++)
//     {
//         if (i%2 != 0)
//         {
//             printf("%c",s[i]);
//         }
//     } 
    
//     printf("\n");
// }

// int main() 
// {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     int n; char s[10000];
//     scanf("%d",&n);
    
//     for(int i=0;i<n;i++)
//     {
//        scanf("%s",s);
//        myFunction(s);
//    }
// }