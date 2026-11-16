extern double fabs(double value);

float fn_829DCEC0(float **rows, int first, int second)
{
    float *left = (float *)((char *)*rows + first * 0x7d4);
    float *right = (float *)((char *)*rows + second * 0x7d4);
    float sum = 0.0f;
    int index;
    for (index = 0; index < 500; index++) {
        sum = (float)fabs(left[index] - right[index]) + sum;
    }
    return sum * 0.002f;
}
