#include <stdio.h>
#include<conio.h>>
#define MAX_SIZE 100
int main() 
{
int arr[MAX_SIZE];
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
if (n <= 0 || n > MAX_SIZE) 
{
printf("Invalid input size.\n");
return 1; 
}
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) 
{
scanf("%d", &arr[i]);
}
int freqCount[MAX_SIZE] = {0};
int uniqueCount = 0;
for (int i = 0; i < n; i++) {
bool isNew = true;
for (int j = 0; j < uniqueCount; j++) {
if (arr[i] == freqCount[j]) {
isNew = false;
break;
}
}
 if (isNew) 
{
 freqCount[uniqueCount++] = arr[i];
 }
 }
 printf("Frequently repeated numbers:\n");
 for (int i = 0; i < uniqueCount; i++) {
 int count = 0;
 for (int j = 0; j < n; j++) {
 if (arr[j] == freqCount[i]) {
 count++;
}
}
if (count > 1) {
printf("%d appears %d times\n", freqCount[i], count);
}
}
return 0;
}
