#include <stdio.h>
#include <math.h>
void swap(int *a,int *b) //�洫����ܼ�
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
		for (j = i + 1; j < len; j++)     //���X���ƧǪ�����
			if (arr[j] < arr[min])    //���ثe�̤p��
				min = j;    //�����̤p��
	   	swap(&arr[min], &arr[i]);    //���洫
	}
}
