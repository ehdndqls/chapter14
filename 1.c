#include<stdio.h>

set_proverb(char** q, int n) {
	static char* array[10] = { "A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies."
	};
	*q = array[n];
}

int main() {
	int n;
	char* p;
	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�?");
	scanf_s("%d", &n);
	
	set_proverb(&p, n);

	printf("selected proverb = %s", p);

	return 0;
}