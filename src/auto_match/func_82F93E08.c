extern int WSAGetOverlappedResult(unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags);

int fn_82F93E08(int ctx, unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags)
{
    return WSAGetOverlappedResult(s, overlapped, transferred, wait, flags);
}
