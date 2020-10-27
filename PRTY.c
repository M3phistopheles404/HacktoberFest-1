#include <stdio.h>
void main()
{int i,np,pry[100],bt[100],st[100],wt[100],tt[100],a,b,j;
float swt=0,stt=0;
 int p[100],pr;
 printf("Enter no of processes");
 scanf("%d",&np);
 printf("\n Enter process, Priority and Burst time");
 for(i=0;i<np;i++)
 {
     printf("\n Process-");
     scanf("%d",&p[i]);
     printf("\n Priority-");
     scanf(" %d",&pry[i]);
     printf("\n Burst time-");
     scanf("\n %d",&bt[i]);
 }
for(i=0;i<np;++i)
 {for(j=i+1;j<np;++j)
 {if(pry[i]>pry[j])
 {   a=pry[i];
     pry[i]=pry[j];
     pry[j]=a;

      pr=p[i];
     p[i]=p[j];
     p[j]=pr;

      b=bt[i];
     bt[i]=bt[j];
     bt[j]=b;
 }}}
st[0]=0;
for(i=1;i<np;i++)
{
    st[i]=st[i-1]+bt[i-1];
}
for(i=0;i<np;i++)
{if(i==0)
  {wt[i]=0;
   }
else
{wt[i]=wt[i-i]+bt[i-1];}
tt[i]=wt[i]+bt[i];
swt=swt+wt[i];
stt=stt+tt[i];
}
 printf("PROCESS\tPRTY\tBT\tST\tWT\tTT\n");
 for(i=0;i<np;i++)
 {printf("P[%d]\t%d\t%d\t%d\t%d\t%d\n",p[i],pry[i],bt[i],st[i],wt[i],tt[i]);
 }
 printf("Average waiting time= %f\n",(swt/np));
 printf("Average turnaround time= %f\n",(stt/np));
 printf("\nGANT CHART\n");
 for(i=0;i<np;i++)
 {printf(" |P[%d]\t",p[i]);
 }
  printf("|\n");
printf("%d",st[0]);
 for(i=0;i<np;i++)
 {printf("\t%d ",st[i]+bt[i]);
 }
 }
