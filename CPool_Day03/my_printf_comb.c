/*
 * my_printf_comb.c
 * 
 * Copyright 2018 qiaolinqi <qiaolinqi@qiaolinqi-VirtualBox>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int my_printf_comb(void)
{
	int i,j,k;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			for(k=0;k<=9;k++)
			{
				if(i<j&&j<k)
				{
					printf("%d%d%d",i,j,k);
					printf("\n");
				}
			}
		}
	}
	return (0);
}
int main(void)
{
	my_printf_comb();
	return(0);
}
	

