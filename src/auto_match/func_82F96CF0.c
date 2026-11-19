extern int recvfrom(unsigned int s, char *buf, int len, int flags, void *from, int *fromlen);

int fn_82F96CF0(int ctx, unsigned int s, char *buf, int len, int flags, void *from, int *fromlen)
{
    return recvfrom(s, buf, len, flags, from, fromlen);
}
