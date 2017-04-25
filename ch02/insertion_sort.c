#include <stdio.h>
#define N 6

void Insertion_Sort(int A[N])
{
  int i, j, key;

  for(j = 1; j < N; j++){
    key =  A[j];
    i = j - 1; //A[j]をソート済みの列A[0..j-1]に挿入する。
    
    printf("key = %d:要素番号%d\n\n", A[j], j);
    
    while(i >= 0 && A[i] > key){
      A[i+1] = A[i];
      i = i - 1;
    }
    A[i+1] = key;

    //途中までの配列の中身を見る
    for(i = 0; i < N; i++){
      printf("%d ", A[i]);
      if (i == j)
	printf("/ ");
    }
    printf("\n");

    
  }
}

int main(){

  int i;
  int A[] = {5, 2, 4, 6, 1, 3};

  printf("ソート前の配列の要素\n{ ");
  for(i = 0; i < N; i++)
    printf("%d ", A[i]);
  printf("}\n");

  Insertion_Sort(A);

  return 0;
}
