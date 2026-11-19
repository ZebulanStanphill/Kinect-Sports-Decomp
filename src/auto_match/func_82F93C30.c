extern int getsockopt(unsigned int s, int level, int optname, char *optval, int *optlen);

int fn_82F93C30(int ctx, unsigned int s, int level, int optname, char *optval, int *optlen)
{
    return getsockopt(s, level, optname, optval, optlen);
}
