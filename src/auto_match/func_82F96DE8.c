extern int fn_82CE0908(unsigned int s, int level, int optname, const char *optval, int optlen);

int fn_82F96DE8(int ctx, unsigned int s, int level, int optname, const char *optval, int optlen)
{
    return fn_82CE0908(s, level, optname, optval, optlen);
}
