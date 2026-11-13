extern int fn_82CE0B18(unsigned int s, const char *buf, int len, int flags, const void *to, int tolen);

int fn_82F96D90(int ctx, unsigned int s, const char *buf, int len, int flags, const void *to, int tolen)
{
    return fn_82CE0B18(s, buf, len, flags, to, tolen);
}
