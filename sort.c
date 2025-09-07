#include <stdio.h>
int ascending(int a, int b) {
return a > b;
}
int descending(int a, int b) {
return a < b;
}
void sorting(int *arr, int size, int (*func)(int, int)) {
	for(int i = 0; i < size - 1; ++i) {
		for(int j = i + 1; j < size; ++j) {
			if(func(arr[i], arr[j])) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			}
		}
	}
}
int main() {
const int size = 5;
int arr[size] = {};
int choice = 0;
printf("Enter the elements : ");
for(int i = 0; i < size; ++i) {
scanf("%d", &arr[i]);
}
printf("for ascending enter 1, for descending enter 2");
scanf("%d", &choice);
if(choice == 1) {
sorting(arr, size, ascending);
}
else if(choice == 2) {
sorting(arr,size, descending);
}
for(int i = 0; i < size; ++i) {
printf("%d", arr[i]);
}
return 0;
}
