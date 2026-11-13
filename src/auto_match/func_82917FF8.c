extern void fn_82631290(void *device, unsigned int start, const int *data, unsigned int count);

int fn_82917FF8(void *device, unsigned int start, const int *data, int *flags, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        flags[i] = data[i] != 0;
    }
    fn_82631290(device, start, data, count);
    return 0;
}
