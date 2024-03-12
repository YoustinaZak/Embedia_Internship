#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent){
    int result=1;
    for(int i =1; i<= exponent; i++){
        result *= base;
    }
    return result;
}
int str_to_int(char* c){
    int number = atoi(c);
    return number;
}
void Embedia_Power_Matrix(char arr[3][3][4],int rows, int columns){
    int count =0;
    for(int i=0; i<columns; i++){
            int number= str_to_int(arr[1][i]);
            //printf("%d",number);
            int base =str_to_int(arr[2][i]);
            //printf("%d",base);
            int exponent =str_to_int(arr[0][i]);
    if(number== power(base,exponent))
    count++;
                          }
            if(count==columns){ //no. of cols
                printf("Embedia Power Matrix \n");
            }
            else{
        printf("Not an Embedia Power Matrix \n");
        }
}
int main()
{
    int rows=3, columns=3;

    char test_arr_1[3][3][4]= {
        "3","2","2",
        "8","9","25",
        "2","3","5"};

    char test_arr_2[3][3][4]={
        "1","3","5",
        "3","7","11",
        "5","11","17"
    };

    char test_arr_3[3][3][4]={
        "3","4","2",
        "512","256","49",
        "8","4","7"
    };

    Embedia_Power_Matrix(test_arr_1,rows,columns);
    Embedia_Power_Matrix(test_arr_2,rows,columns);
    Embedia_Power_Matrix(test_arr_3,rows,columns);
    return 0;
}
