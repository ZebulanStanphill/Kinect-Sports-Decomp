int abs(int);

float fn_82E92580(void *self, int *a, int *b, unsigned int n, int mode)
{
    int sum = 0;
    int i;

    if (mode == 1) {
        for (i = 0; i < 256; i++) {
            sum += abs(a[i] - b[i]);
        }
        return (float)sum / (float)n;
    }
    if (mode == 2) {
        for (i = 0; i < 256; i++) {
            sum += a[i] < b[i] ? a[i] : b[i];
        }
        return (float)(int)(n - sum) * 2.0f / (float)n;
    }
    return -1.0f;
}
