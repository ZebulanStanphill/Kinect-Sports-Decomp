extern void *fn_82EE00C0(void *, unsigned int);
long fn_82EE01A0(void *p, void **out)
{
    unsigned int size;
    void *r;
    if (p == 0) size = 0; else size = ((unsigned int *)p)[-1];
    r = fn_82EE00C0(p,size);
    *out = r;
    return r ? 0 : (long)0x8007000E;
}
