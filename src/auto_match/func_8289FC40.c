extern long _InterlockedIncrement(long *);
typedef struct Rep_8289FC40 {
    void *vt;
    long uses;
    long weaks;
} Rep_8289FC40;
typedef struct Ptr_8289FC40 {
    void *px;
    Rep_8289FC40 *rep;
} Ptr_8289FC40;
typedef struct Src_8289FC40 {
    int pad[2];
    Ptr_8289FC40 ptr;
} Src_8289FC40;
void fn_8289FC40(Ptr_8289FC40 *out, Src_8289FC40 *src)
{
    out->px = src->ptr.px;
    out->rep = src->ptr.rep;
    if (out->rep != 0) {
        _InterlockedIncrement(&out->rep->uses);
    }
}
