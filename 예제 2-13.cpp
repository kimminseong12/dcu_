#include <stdio.h>
#include <string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

void main() {
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy_s(Sptr->name, "�̼���");
	Sptr->year = 2075;
	Sptr->pay = 5900;

	printf("\n �̸� : %s", Sptr->name);
	printf("\n �Ի� : %s", Sptr->year);
	printf("\n ���� : %s", Sptr->pay);

	getchar();
}