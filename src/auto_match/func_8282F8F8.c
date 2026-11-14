void fn_8282F8F8(int *values, unsigned int count)
{
    int sum = 0;
    while (count != 0) {
        int v = *values;
        *values++ = sum;
        sum += v;
        count--;
    }
}
