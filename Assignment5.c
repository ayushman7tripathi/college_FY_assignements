#include <stdio.h>

void add(int A[10][10], int B[10][10], int r, int c) {
    int C[10][10];
    printf("\nMatrix Addition Result:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int A[10][10], int r, int c) {
    int found = 0;
    for(int i = 0; i < r; i++) {
        int min = A[i][0], col = 0;
        for(int j = 1; j < c; j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        int k;
        for(k = 0; k < r; k++) {
            if(A[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo Saddle Point\n");
}

int determinant(int A[10][10], int n) {
    int det = 0;

    if(n == 2) {
        det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    }
    else if(n == 3) {
        det = A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1])
            - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])
            + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    }

    return det;
}

void inverse(int A[10][10], int n) {
    if(n != 2) {
        printf("\nInverse only implemented for 2x2 matrix\n");
        return;
    }

    int det = determinant(A, n);

    if(det == 0) {
        printf("\nInverse not possible (Determinant = 0)\n");
        return;
    }

    float inv[2][2];

    inv[0][0] = A[1][1] / (float)det;
    inv[0][1] = -A[0][1] / (float)det;
    inv[1][0] = -A[1][0] / (float)det;
    inv[1][1] = A[0][0] / (float)det;

    printf("\nInverse Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%.2f ", inv[i][j]);
        }
        printf("\n");
    }
}

void magicSquare(int A[10][10], int n) {
    int sum = 0;

    for(int j = 0; j < n; j++)
        sum += A[0][j];

    int flag = 1;

    for(int i = 0; i < n; i++) {
        int rsum = 0;
        for(int j = 0; j < n; j++)
            rsum += A[i][j];
        if(rsum != sum)
            flag = 0;
    }

    for(int j = 0; j < n; j++) {
        int csum = 0;
        for(int i = 0; i < n; i++)
            csum += A[i][j];
        if(csum != sum)
            flag = 0;
    }

    int d1 = 0, d2 = 0;
    for(int i = 0; i < n; i++) {
        d1 += A[i][i];
        d2 += A[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        flag = 0;

    if(flag)
        printf("\nIt is a Magic Square\n");
    else
        printf("\nIt is NOT a Magic Square\n");
}

int main() {
    int A[10][10], B[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter Matrix A:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter Matrix B:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    add(A, B, r, c);

    saddlePoint(A, r, c);

    if(r == c)
        inverse(A, r);
    else
        printf("\nInverse not possible (Not a square matrix)\n");

    if(r == c)
        magicSquare(A, r);
    else
        printf("\nMagic square check not possible (Not square)\n");

    return 0;
}
