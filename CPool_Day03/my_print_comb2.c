/*
 * my_print_comb2.c
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

int my_print_comb2(void)
{
	int i,j;
	for(i=0;i<=99;i++)
	{
		for(j=0;j<99;j++)
		{
			if(i<j)
			{
				if(i<10&&j>9) printf("%d %d",i,j);
				else if(i>9&&j<10)printf("%d%d",i,j);
				else if(i<10&&j<10)printf("%d%d",i,j);
				else printf("%d %d",i,j);
			}
		}
	}
	return 0;
}
int main(void)
{
	my_print_comb2();
	return 0;
}

				
			
