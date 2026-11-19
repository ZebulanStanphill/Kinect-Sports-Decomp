extern int NetDll_getsockname(int caller, unsigned int s, void *name, int *nameLen);

int getsockname(unsigned int s, void *name, int *nameLen)
{
    return NetDll_getsockname(1, s, name, nameLen);
}
