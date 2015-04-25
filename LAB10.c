#include<stdio.h>
void main()
{
  int Proc_Number,i,Prev_Wait,k,temp,m,l;
  Prev_Wait=0;
  printf("\nEnter the no of process:");
  scanf("%d",&Proc_Number);
  int burst[Proc_Number],wait[Proc_Number],turnarnd[Proc_Number],proc[Proc_Number];
  for(i=0;i<Proc_Number;i++)
  	{
  		printf("\nEnter burst time for process %d:",i+1);
  		scanf("%d",&burst[i]);
  		
  	}
  int min =100;
  int flag[Proc_Number];
  for(i=0;i<Proc_Number;i++)
  flag[i]=0;
  int index;
 for(i=0;i<Proc_Number;i++)
{
min = 1000;
	for(k=0;k<Proc_Number;k++)
	{
		if(flag[k]!=1 && min>burst[k])
		{
			min = burst[k];
			index = k;
		}
		
	}
	wait[index]=Prev_Wait;
  		turnarnd[index]=wait[index]+burst[index];
		Prev_Wait+=burst[index];
		flag[index]=1;
		printf("\n Process: %d	   burst time = %d	    wait time = %d       turnaround time = %d\n",index+1,burst[index],wait[index],turnarnd[index]);
	
} 
getchar();
 getchar();
  
}