#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int fun(long long binary1, long long binary2)
{
    int i = 0 , rem = 0 , sum[1001];
    long long result = 0 ;
    while(binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + rem) % 2;
        rem = (binary1 % 10 + binary2 % 10 + rem) / 2;
        binary2 /= 10;
        binary1 /= 10;
    }
    if(rem !=0)
    sum[i++] = rem;
    i--;
    while(i >= 0)
    {
        result = result * 10 + sum[i];
        i--;
    }
    return result;
}
char *findBinarySum(int N, char binValues[N][101])
{
    int i = 0, j = 0, l = 0, k = 0, m = 0;
    long binaryarray[1001];
    long long binary = 0 ;
    for (i = 0; i < N; i++)
    {
        binary = 0;
        int len = strlen(binValues[i]);
        for (j = 0; j < len; j++)
        {
            binary = binary * 10 + binValues[i][j] - '0';
        }
        binaryarray[k++] = binary;
    }
    long long sum = 0;
    binary = 0;
    for(i = 0 ; i < k ; i++)
    {
        binary = fun(sum , binaryarray[i]);
        sum = binary;
    }
    char *result = (char*)malloc(N*sizeof(char));
    sprintf(result, "%ld" , sum);
    return result;
}
int main()
{
    int N;
    scanf("%d", &N);
    char str[N][101];
    for (int index = 0; index < N; index++)
    {
        scanf("%s", str[index]);
    }
    char *binarySum = findBinarySum(N, str);
    if (binarySum == NULL || binarySum == str[0])
    {
        printf("String is not formed\n");
    }
    if (binarySum[0] == '\0' || binarySum[0] == ' ')
    {
        printf("String is empty\n");
    }
    printf("%s", binarySum);
    return 0;
}