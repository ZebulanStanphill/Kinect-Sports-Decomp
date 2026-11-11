extern int NetDll_shutdown(int caller, unsigned int s, int how);

int fn_82CE08E0(unsigned int s, int how)
{
    return NetDll_shutdown(1, s, how);
}
