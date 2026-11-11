extern int NetDll_WSACancelOverlappedIO(int caller, unsigned int s);

int fn_82CE0A10(unsigned int s)
{
    return NetDll_WSACancelOverlappedIO(1, s);
}
