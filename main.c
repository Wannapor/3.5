#include <stdio.h>

int main(void) {
  float B,H,ans;
  printf("Enter base : ");
  scanf("%f", &B);
  printf("Enter high : ");
  scanf("%f", &H);
ans = 0.5*B*H;
printf("ANSWER IS %0.2f", ans); 
  return 0;
}