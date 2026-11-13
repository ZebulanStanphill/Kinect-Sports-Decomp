extern void *fn_8267B890(void *heap, unsigned int size, unsigned int flags);
extern void fn_8267C4F0(void *p);
extern void fn_82686228(void *out, const char *name, void *obj);
extern void *fn_8278ADD8(void *mem, void *a, void *b, void *c, void *heap);
extern void *lbl_831E7E64;
extern char lbl_83156A70[];

void *fn_8278AF50(void *out, void *a, void *b, void *c, void *heap)
{
    void *mem;
    void *obj;

    mem = fn_8267B890(heap ? heap : lbl_831E7E64, 0x18, 0);
    if (mem != 0) {
        obj = fn_8278ADD8(mem, a, b, c, heap);
    } else {
        obj = 0;
    }
    fn_82686228(out, lbl_83156A70, obj);
    if (obj != 0) {
        fn_8267C4F0(obj);
    }
    return out;
}
