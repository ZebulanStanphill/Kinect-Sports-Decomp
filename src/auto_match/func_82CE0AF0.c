extern int NetDll_WSASend(int caller, unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int flags, void *overlapped, void *completion);

int fn_82CE0AF0(unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int flags, void *overlapped, void *completion)
{
    return NetDll_WSASend(1, s, buffers, count, bytes, flags, overlapped, completion);
}
