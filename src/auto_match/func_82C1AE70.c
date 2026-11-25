static __forceinline int SwapIfOutOfOrder(float *keys, unsigned int *values, int i)
{
    float *right = &keys[i + 1];
    float first = right[-1];
    float second = right[0];
    if (first > second) {
        unsigned int *item = &values[i];
        unsigned int value = item[0];
        right[-1] = second;
        item[0] = item[1];
        right[0] = first;
        item[1] = value;
        return 1;
    }
    return 0;
}

void fn_82C1AE70(float *keys, unsigned int *values, int count)
{
    int changed;
    int i;
    do {
        changed = 0;
        for (i = 0; i < count - 1; ++i) {
            if (SwapIfOutOfOrder(keys, values, i)) {
                changed = 1;
            }
        }
    } while (changed);
}
