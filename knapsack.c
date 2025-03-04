#include <stdio.h>

void swap(float a[], int i, int j) {
 float temp;
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
}

int main() {

 int i, j, n, m;
 float c[100], a[100], b[100], P = 0;

 printf("Enter the number of objects:\n");
 scanf("%d", &n);

 printf("Enter the capacity of the knapsack:\n");
 scanf("%d", &m);

 printf("Enter the profit of the objects:\n");

 for (i = 0; i < n; i++) {
 scanf("%f", &a[i]);
 }

 printf("Enter the weight of the objects:\n");

 for (i = 0; i < n; i++) {
 scanf("%f", &b[i]);
 }

 for (i = 0; i < n; i++) {
 c[i] = a[i] / b[i];
 }

 for (i = 0; i < n; i++) {
 for (j = i + 1; j < n; j++) {
 if (c[i] < c[j]) {
 swap(c, i, j);
 swap(a, i, j);
 swap(b, i, j);
 }
 }}

 for (i = 0; i < n; i++) {
 if (m > 0 && b[i] <= m) {
 m = m - b[i];
 P = P + a[i];
 } else {
 break;
 }
 }

 if (m > 0) {
 P = P + a[i] * (m / b[i]);
 }

 printf("Maximum profit is %.2f\n", P);
 return 0;
}