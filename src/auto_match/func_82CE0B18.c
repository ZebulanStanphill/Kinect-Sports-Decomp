extern int NetDll_sendto(int caller, unsigned int s, const char *buf, int len, int flags, const void *to, int tolen);

int fn_82CE0B18(unsigned int s, const char *buf, int len, int flags, const void *to, int tolen)
{
    return NetDll_sendto(1, s, buf, len, flags, to, tolen);
}
