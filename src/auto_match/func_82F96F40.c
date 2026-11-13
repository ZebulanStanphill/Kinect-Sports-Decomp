extern int fn_82CE0A80(unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *addr, int *addrlen, void *overlapped, void *completion);

int fn_82F96F40(int ctx, unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *addr, int *addrlen, void *overlapped, void *completion)
{
    return fn_82CE0A80(s, buffers, count, bytes, flags, addr, addrlen, overlapped, completion);
}
