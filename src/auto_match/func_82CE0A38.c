extern int NetDll_WSARecv(int caller, unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *overlapped, void *completion);

int WSARecv(unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *overlapped, void *completion)
{
    return NetDll_WSARecv(1, s, buffers, count, bytes, flags, overlapped, completion);
}
