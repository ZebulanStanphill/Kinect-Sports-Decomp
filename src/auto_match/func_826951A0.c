static __forceinline unsigned char isKind34_826951A0(unsigned char k)
{
    return k == 3 || k == 4;
}

unsigned char fn_826951A0(const unsigned char *p)
{
    unsigned char k = *p;
    return k == 5 || k == 2 || k == 1 || isKind34_826951A0(k);
}
