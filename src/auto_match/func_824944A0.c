long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_824944A0 Rep_824944A0;
typedef struct RepVt_824944A0 {
    void (*destroy)(Rep_824944A0 *);
    void (*deleteThis)(Rep_824944A0 *);
} RepVt_824944A0;
struct Rep_824944A0 {
    RepVt_824944A0 *vt;
    long uses;
    long weaks;
};

typedef struct Item_824944A0 {
    char pad0[0x5c];
    void *ptr;
    Rep_824944A0 *rep;
} Item_824944A0;

typedef struct Iter_824944A0 {
    Item_824944A0 **cur;
} Iter_824944A0;

extern unsigned char fn_8223AAC0(Rep_824944A0 *rep);
extern void fn_822315A0(Rep_824944A0 *rep);

static __forceinline unsigned char Matches(Item_824944A0 *item, void **target)
{
    Rep_824944A0 *wrep = item->rep;
    void *wptr = item->ptr;
    void *sptr;
    Rep_824944A0 *srep;
    unsigned char found;

    if (wrep != 0) {
        _InterlockedIncrement(&wrep->weaks);
    }
    sptr = 0;
    srep = 0;
    if (wrep != 0 && fn_8223AAC0(wrep) != 0) {
        srep = wrep;
        sptr = wptr;
    }
    found = *target == sptr;
    if (srep != 0) {
        fn_822315A0(srep);
    }
    if (wrep != 0) {
        if (_InterlockedDecrement(&wrep->weaks) == 0) {
            wrep->vt->deleteThis(wrep);
        }
    }
    return found;
}

Iter_824944A0 *fn_824944A0(Iter_824944A0 *out, Item_824944A0 **first, Item_824944A0 **last, void **target)
{
    Item_824944A0 **it = first;
    for (; it != last; it++) {
        if (Matches(*it, target)) {
            break;
        }
    }
    out->cur = it;
    return out;
}
