extern int fn_82CE0B38(unsigned int s, void *buffers, unsigned int count, unsigned int *bytesSent, unsigned int flags, const void *to, int tolen, void *overlapped, void *completion);

int fn_82F93F48(int ctx, unsigned int s, void *buffers, unsigned int count, unsigned int *bytesSent, unsigned int flags, const void *to, int tolen, void *overlapped, void *completion)
{
    return fn_82CE0B38(s, buffers, count, bytesSent, flags, to, tolen, overlapped, completion);
}
