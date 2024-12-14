

    #include <stdio.h>

int main() {
    int N, M;

    // Input values for N and M
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Enter the value of M: ");
    scanf("%d", &M);



     int count = 0;
    for (int i = 1; i <= M; i++) {
        if (i % N == 0) {
            count++;
        }
      }

    printf("The number of values divisible by %d that are less than or equal to %d is: %d\n", N, M, count);



return 0;
}


