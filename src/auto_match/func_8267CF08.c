extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_8267C908(void *p);
extern void *lbl_831E7E64;

void **fn_8267CF08(void **out)
{
    void *mem = fn_8267B890(lbl_831E7E64, 0x28, 0);
    *out = mem ? fn_8267C908(mem) : 0;
    return out;
}
