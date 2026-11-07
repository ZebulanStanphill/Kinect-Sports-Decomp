extern void *lbl_831E7E64;
extern char lbl_831566A8[];
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_8276A6E8(void *mem, int a, int b, int c);
extern void fn_82686228(void *out, void *type, void *obj);
extern void fn_8267C4F0(void *p);

void *fn_8276A8D0(void *out, int a, int b, int c)
{
    void *mem = fn_8267B890(lbl_831E7E64, 0x14, 0);
    void *obj;
    if (mem != 0)
        obj = fn_8276A6E8(mem, a, b, c);
    else
        obj = 0;
    fn_82686228(out, lbl_831566A8, obj);
    if (obj != 0)
        fn_8267C4F0(obj);
    return out;
}
