extern int send(int s, const char *buf, int len, int flags);

int fn_82F96D48(int ctx, int s, const char *buf, int len, int flags)
{
    return send(s, buf, len, flags);
}
