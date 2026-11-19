extern int NetDll_ioctlsocket(int caller, unsigned int s, int cmd, unsigned int *arg);

int ioctlsocket(unsigned int s, int cmd, unsigned int *arg)
{
    return NetDll_ioctlsocket(1, s, cmd, arg);
}
