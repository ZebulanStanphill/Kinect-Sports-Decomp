extern int WSASend(unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int flags, void *overlapped, void *completion);

int fn_82F93EE8(int ctx, unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int flags, void *overlapped, void *completion)
{
    return WSASend(s, buffers, count, bytes, flags, overlapped, completion);
}
