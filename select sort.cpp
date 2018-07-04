#include <stdio.h>
#include <math.h>
void swap(int *a,int *b) //ユ传ㄢ跑计
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len) 
{
    int i,j;

	for (i = 0 ; i < len - 1 ; i++) 
    {
		int min = i;
		for (j = i + 1; j < len; j++)     //ǐ砐ゼ逼じ
			if (arr[j] < arr[min])    //тヘ玡程
				min = j;    //魁程
	   	swap(&arr[min], &arr[i]);    //暗ユ传
	}
}
