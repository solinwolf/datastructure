#include "sort.h"

void insertSort(int *array, int length){
	int  i =0;
	int j = 0;
	for(i=1;i<length;i++){	
		int temp=array[i];
		for(j=i;(j>0)&&(array[j-1]>temp);j--){
			array[j] = array[j-1];
		}
		array[j] = temp;
	}
	
}
