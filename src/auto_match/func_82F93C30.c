extern int fn_82CE0928(unsigned int s, int level, int optname, char *optval, int *optlen);

int fn_82F93C30(int ctx, unsigned int s, int level, int optname, char *optval, int *optlen)
{
    return fn_82CE0928(s, level, optname, optval, optlen);
}
