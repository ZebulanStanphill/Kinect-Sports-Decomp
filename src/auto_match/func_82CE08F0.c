extern int NetDll_ioctlsocket(int caller, unsigned int s, int cmd, unsigned int *arg);

int fn_82CE08F0(unsigned int s, int cmd, unsigned int *arg)
{
    return NetDll_ioctlsocket(1, s, cmd, arg);
}
