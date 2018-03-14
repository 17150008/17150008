
#include <stdio.h>

void  my_sort_int_array(int *array,int size)
{
 int tmp;
  for(int i=0;i<size-1;i++)
{
	for(int j=i+1;j<size;j++)
	{
		if(array[i]>array[j])
		{
			tmp=array[i];
			array[i]=array[j];
			array[j]=tmp;
	}
}
}
}

