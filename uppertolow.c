#include <stdio.h> 
char to_llower(char c) {
c = (c|(1 << 5));
return c;
}
char to_uuperr(char c) { 
c = (c & (~(1 << 5)));
return c;
}
void transform(char *str, char(*func)(char)) {
	while(*str != '\0') {
	*str = func(*str);
	++str;
	}
}
int main() {
const int size  = 5;
int choice = 0;
char str[size] = {};
printf("Enter the elements : ");
scanf("%s", str);

printf("Enter 1 for lower , enter 2 for upper :");
scanf("%d", &choice);
if(choice == 1) {
transform(str,to_llower);
}
else if(choice == 2) {
transform(str, to_uuperr);
}
printf("%s", str);
return 0;
}
