extern int NetDll_recvfrom(int caller, unsigned int s, char *buf, int len, int flags, void *from, int *fromlen);

int fn_82CE0A60(unsigned int s, char *buf, int len, int flags, void *from, int *fromlen)
{
    return NetDll_recvfrom(1, s, buf, len, flags, from, fromlen);
}
