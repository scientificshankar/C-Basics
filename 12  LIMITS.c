#include<stdio.h>
#include<limits.h>
void main ()
{

    printf("shortint:\nsigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
    
    printf("shortint:\nunsigned:%d to %hu\n",0, USHRT_MAX);
    
	printf("int:\nsigned:%d to %d\n",INT_MIN,INT_MAX);
	
	printf("int:\nunsigned:%d to %u\n",0, UINT_MAX);
	
	printf("longint:\nsigned:%ld to %ld\n",LONG_MIN, LONG_MAX);
	
	printf("longint:\nunsigned:%d to %lu\n",0,ULONG_MAX);
	
	printf("longlongint:\nsigned:%lld to %lld\n",LLONG_MIN,LLONG_MAX);
	
	printf("longlongint:\nunsigned:%d to %llu\n",0 , ULLONG_MAX);
}
