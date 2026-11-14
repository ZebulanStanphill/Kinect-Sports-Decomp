long _InterlockedDecrement(long volatile *);

typedef struct Rep_8266D4A8 Rep_8266D4A8;
typedef struct RepVt_8266D4A8 {
    void (*destroy)(Rep_8266D4A8 *);
    void (*deleteThis)(Rep_8266D4A8 *);
} RepVt_8266D4A8;
struct Rep_8266D4A8 {
    RepVt_8266D4A8 *vt;
    long uses;
    long weaks;
};

typedef struct Entry_8266D4A8 {
    void *ptr;
    Rep_8266D4A8 *rep;
    unsigned int key;
} Entry_8266D4A8;

extern Entry_8266D4A8 *fn_8266CB08(Entry_8266D4A8 *dst, Entry_8266D4A8 *src);
extern void fn_8256E1D8(Entry_8266D4A8 *self, void *p, Rep_8266D4A8 *r);
extern void fn_8266D210(Entry_8266D4A8 *first, Entry_8266D4A8 *last, Entry_8266D4A8 *dest);

static __forceinline void Decwref_8266D4A8(Rep_8266D4A8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_8266D4A8(Entry_8266D4A8 *first, Entry_8266D4A8 *last)
{
    Entry_8266D4A8 *next;
    Rep_8266D4A8 *rep;

    if (first != last) {
        for (next = first; ++next != last; ) {
            Entry_8266D4A8 *next1 = next;
            Entry_8266D4A8 val;
            fn_8266CB08(&val, next);
            if (val.key < first->key) {
                fn_8266D210(first, next, ++next1);
                rep = val.rep;
                fn_8256E1D8(first, val.ptr, rep);
                first->key = val.key;
            } else {
                Entry_8266D4A8 *first1;
                for (first1 = next1; val.key < (--first1)->key; next1 = first1) {
                    fn_8256E1D8(next1, first1->ptr, first1->rep);
                    next1->key = first1->key;
                }
                rep = val.rep;
                fn_8256E1D8(next1, val.ptr, rep);
                next1->key = val.key;
            }
            if (rep != 0)
                Decwref_8266D4A8(rep);
        }
    }
}
