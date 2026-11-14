extern long _InterlockedIncrement(long *);
typedef struct Rep_8289EE78 {
    void *vt;
    long uses;
    long weaks;
} Rep_8289EE78;
typedef struct Ptr_8289EE78 {
    void *px;
    Rep_8289EE78 *rep;
} Ptr_8289EE78;

Ptr_8289EE78 *fn_8289EE78(Ptr_8289EE78 *first, Ptr_8289EE78 *last, Ptr_8289EE78 *dest)
{
    for (; first != last; first++, dest++) {
        if (dest != 0) {
            dest->px = first->px;
            dest->rep = first->rep;
            if (dest->rep != 0) {
                _InterlockedIncrement(&dest->rep->uses);
            }
        }
    }
    return dest;
}
