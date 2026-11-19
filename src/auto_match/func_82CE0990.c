extern int NetDll_connect(int caller, unsigned int s, const void *name, int nameLen);

int connect(unsigned int s, const void *name, int nameLen)
{
    return NetDll_connect(1, s, name, nameLen);
}
