#include <stdio.h>

void add_matrices(int m, int n, int a[][n], int b[][n], int result[][n])
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
       	{
            *(result[i] + j) = *(a[i] + j) + *(b[i] + j);
        }
    }
}

void print_matrix(int m, int n, int matrix[][n])
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
       	{
            printf("%d ", *(matrix[i] + j));
        }
        printf("\n");
    }
}

int main() {
    int m, n, i, j;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], result[m][n];

    printf("Enter the elements of first matrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
       	{
            scanf("%d", &(*(a[i] + j)));
        }
    }

    printf("Enter the elements of second matrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
       	{
            scanf("%d", &(*(b[i] + j)));
        }
    }

    add_matrices(m, n, a, b, result);

    printf("The sum of the two matrices is:\n");

    print_matrix(m, n, result);

    return 0;
}

