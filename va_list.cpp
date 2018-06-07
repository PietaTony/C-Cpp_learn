#include <stdio.h>
#include <stdarg.h>

void print(int count, ...){
	va_list list;
    va_start(list, count);
    for (int i=0; i < count; i++)
    {
 	   printf("%s",va_arg(list, char *));
 	}
    va_end(list);
}

int main(){
	print(4,"T","E","S","T");
	print(5,"T","E","S","T","1");
	system("PAUSE");
} 
