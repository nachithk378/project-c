#include<stdio.h>
void main()
{  int noofRows,row,col1,col2,noofcol;
    noofRows=5;
    noofcol=noofRows-1;
    for(row=1;row<=noofRows;row++){
    
       for(col1=1;col1<=noofcol;col1++){
            printf("-");
        }
        noofcol--;
       for(col2=1;col2<=row;col2++){
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}