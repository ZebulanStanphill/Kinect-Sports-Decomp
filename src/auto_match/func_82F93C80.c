extern int ioctlsocket(int s, int cmd, unsigned int *out);

int fn_82F93C80(int ctx, int s, int cmd, unsigned int *out)
{
    return ioctlsocket(s, cmd, out);
}
