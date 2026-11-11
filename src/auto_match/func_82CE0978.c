extern int NetDll_bind(int caller, unsigned int s, const void *name, int nameLen);

int fn_82CE0978(unsigned int s, const void *name, int nameLen)
{
    return NetDll_bind(1, s, name, nameLen);
}
