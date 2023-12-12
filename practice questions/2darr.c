//Passing 2-D array
#include<stdio.h>
void largest_ele(int[][10],int*,int*);
void main()
{
      int arr[10][10];
      int rows, cols, rc, cc;
      printf("Enter no. of rows in array(<10)\t");
      scanf("%d",&rows);
      printf("Enter no. of cols in array(<10)\t");
      scanf("%d",&cols);
      printf("Enter elements of array:\n");
      for(rc=0;rc<rows;rc++)
            for(cc=0;cc<cols;cc++)
                  scanf("%d",&arr[rc][cc]);
      largest_ele(arr,&rows,&cols);
      printf("Largest element is %d\n",arr[rows][cols]);
      printf("Located in row no. %d\n",rows);
      printf("Located in column no. %d\n",cols);
}
void largest_ele(int arr[][10],int *rows, int *cols)
{
      int row=0, col=0, rc=0, cc=0, max=arr[0][0];
      for(rc=0; rc<*rows;rc++)
            for(cc=0;cc<*cols;cc++)
                  if(arr[rc][cc]>max)
                  {
                        max=arr[rc][cc];
                        row=rc; col=cc;
                  }
      *rows=row; *cols=col;
}