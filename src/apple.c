#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int i;
    int sum = 0;
    for(i = 0; i < n; i++){
        sum = sum + (A[i] / m) + 1;
    }
    return (long long int) sum <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 1;
    ub = 1000000000;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
  printf("%d\n", lb);
  return 0;
}
