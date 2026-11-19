extern int recv(int s, char *buf, int len, int flags);

int fn_82F96CA8(int ctx, int s, char *buf, int len, int flags)
{
    return recv(s, buf, len, flags);
}
