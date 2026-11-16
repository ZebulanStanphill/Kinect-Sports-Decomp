extern void fn_82838A20(float **values, int *indices, float *output, int count);

void fn_82838B18(int *indices, float **values, float *output, int count, int sortedCount)
{
    int index;
    if (sortedCount > count) {
        fn_82838A20(values, indices, output, sortedCount);
    } else {
        for (index = 0; index < count; ++index) {
            indices[index] = index;
            if (values[index] != 0) {
                output[index] = *values[index];
            } else {
                output[index] = 0.0f;
            }
        }
    }
}
