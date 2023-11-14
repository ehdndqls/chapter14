#include<stdio.h>

void pr_str_array(char** dp);

int main() {
	char* str_array[5]={ "A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools"
	}; 
	pr_str_array(str_array);

	return 0;
}

void pr_str_array(char** dp) {
	int count = 0;
	while (count <5) {
		printf("%s\n", dp[count++]);
	}
}