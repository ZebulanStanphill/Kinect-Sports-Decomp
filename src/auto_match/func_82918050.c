extern void fn_82631290(void *device, unsigned int start, const float *data, unsigned int count);

int fn_82918050(void *device, unsigned int start, const float *data, int *flags, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        flags[i] = data[i] != 0.0f;
    }
    fn_82631290(device, start, data, count);
    return 0;
}
