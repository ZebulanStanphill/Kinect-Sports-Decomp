extern int NetDll_getsockname(int caller, unsigned int s, void *name, int *nameLen);

int fn_82CE0948(unsigned int s, void *name, int *nameLen)
{
    return NetDll_getsockname(1, s, name, nameLen);
}
