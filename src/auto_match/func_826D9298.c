extern void *fn_8267B890(void *heap, unsigned int size, unsigned int flags);
extern void fn_8267C4F0(void *p);
extern void fn_82686228(void *out, const char *name, void *obj);
extern void *fn_826D9198(void *mem, void *a, void *b);
extern void *lbl_831E7E64;
extern char lbl_83155ABC[];

void *fn_826D9298(void *out, void *a, void *b)
{
    void *mem;
    void *obj;

    mem = fn_8267B890(lbl_831E7E64, 0x10, 0);
    if (mem != 0) {
        obj = fn_826D9198(mem, a, b);
    } else {
        obj = 0;
    }
    fn_82686228(out, lbl_83155ABC, obj);
    if (obj != 0) {
        fn_8267C4F0(obj);
    }
    return out;
}
