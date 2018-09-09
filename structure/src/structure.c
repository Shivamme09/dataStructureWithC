#include <stdio.h>
#pragma pack(1) //
struct emp
{
	int empno;
	char name[10];
	float sal;
}; // decl struct
int main()
{
	struct emp e1={1, "abc", 12000};
	struct emp  *ptr= &e1;

	printf("\n EmpNo   Name  \tSal \n");
	printf("%-8d %-10s %-6.2f",e1.empno, e1.name, e1.sal);

	printf("\n size of e1 =%d",sizeof(e1));
	printf("\n EmpNo   Name  \tSal using pointer \n");
	printf("%-8d %-10s %-6.2f",ptr->empno, ptr->name, ptr->sal);
	printf("\n size of e1 =%d",sizeof(ptr));
	printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
	printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);
	printf("\n EmpNo   Name  \tSal using pointer \n");
	printf("%-8d %-10s %-6.2f",(*ptr).empno, (*ptr).name, (*ptr).sal);

	return 0;
}
