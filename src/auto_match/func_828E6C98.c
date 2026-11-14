extern long _InterlockedIncrement(long *);
typedef struct Rep_828E6C98 {
    void *vt;
    long uses;
    long weaks;
} Rep_828E6C98;
typedef struct Ptr_828E6C98 {
    void *px;
    Rep_828E6C98 *rep;
} Ptr_828E6C98;

Ptr_828E6C98 *fn_828E6C98(Ptr_828E6C98 *first, Ptr_828E6C98 *last, Ptr_828E6C98 *dest)
{
    for (; first != last; first++, dest++) {
        if (dest != 0) {
            dest->px = first->px;
            dest->rep = first->rep;
            if (dest->rep != 0) {
                _InterlockedIncrement(&dest->rep->weaks);
            }
        }
    }
    return dest;
}
