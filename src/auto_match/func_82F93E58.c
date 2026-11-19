extern int WSARecv(unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *overlapped, void *completion);

int fn_82F93E58(int ctx, unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *overlapped, void *completion)
{
    return WSARecv(s, buffers, count, bytes, flags, overlapped, completion);
}
