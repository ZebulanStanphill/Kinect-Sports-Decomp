typedef long HRESULT;

extern void *fn_82EE00C0(void *p, unsigned int size);

HRESULT fn_82EE0140(void *p, void **out)
{
    void *r;

    if (p == 0) {
        *out = 0;
        return 0;
    }
    r = fn_82EE00C0(p, ((unsigned int *)p)[-1]);
    *out = r;
    return r ? 0 : (HRESULT)0x8007000E;
}
