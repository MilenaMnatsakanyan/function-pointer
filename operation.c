#include <stdio.h>
typedef int(*operation)(int, int);
int apply(int a, int b,operation op) {
return op(a,b);
}
int sum(int a, int b) {
return a+b;
}
int sub(int a, int b) {
return a-b;
}
int mul(int a, int b) {
return a*b;
}
int divv(int a, int b) {
return a/b;
}
int main() {
int a,b;
int choice = 0;
printf("Enter the numbers : ");
scanf("%d %d", &a, &b);
printf("for sum enter - 1, for sub - 2, for mul - 3, for div - 4");
scanf("%d", &choice);
operation op = NULL;
if(choice == 1) {
op = sum;
}else if(choice == 2) {
op = sub;
}
else if(choice == 3) {
op = mul;
}
else if(choice == 4) {
op = divv;
}
printf("%d", op(a,b));
return 0;
}
