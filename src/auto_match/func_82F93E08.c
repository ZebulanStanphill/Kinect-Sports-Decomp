extern int fn_82CE09F0(unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags);

int fn_82F93E08(int ctx, unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags)
{
    return fn_82CE09F0(s, overlapped, transferred, wait, flags);
}
