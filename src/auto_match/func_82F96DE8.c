extern int setsockopt(unsigned int s, int level, int optname, const char *optval, int optlen);

int fn_82F96DE8(int ctx, unsigned int s, int level, int optname, const char *optval, int optlen)
{
    return setsockopt(s, level, optname, optval, optlen);
}
