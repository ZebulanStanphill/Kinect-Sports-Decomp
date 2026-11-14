extern void fn_826312F0(void *device, unsigned int start, const float *data, unsigned int count);

int fn_82918370(void *device, unsigned int start, const float *data, int *flags, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        flags[i] = data[i] != 0.0f;
    }
    fn_826312F0(device, start, data, count);
    return 0;
}
