extern int NetDll_WSACancelOverlappedIO(int caller, unsigned int s);

int WSACancelOverlappedIO(unsigned int s)
{
    return NetDll_WSACancelOverlappedIO(1, s);
}
