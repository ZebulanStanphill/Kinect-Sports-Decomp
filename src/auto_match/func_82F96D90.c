extern int sendto(unsigned int s, const char *buf, int len, int flags, const void *to, int tolen);

int fn_82F96D90(int ctx, unsigned int s, const char *buf, int len, int flags, const void *to, int tolen)
{
    return sendto(s, buf, len, flags, to, tolen);
}
