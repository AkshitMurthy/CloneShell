#include<stdio.h>
#include<time.h>
#include<omp.h>
void main()
{
   sleep(2);
   printf("\nHello\n");
   //long int i;
   //int t1,t2;
   //t1=time(NULL);
   //int j=0;
   //#pragma omp parallel private(i) shared(j)
   //{
   //#pragma omp for
   //for(i=0;i<1000000000;i++){/*j++;*/}
   //printf("\nThread no:%d running",omp_get_thread_num());
   //}
   //printf("\nj=%d\n",j);
   //t2=time(NULL);
   //printf("\nTime taken:%d\n",t2-t1);
}
