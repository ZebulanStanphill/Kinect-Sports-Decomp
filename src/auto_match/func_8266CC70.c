long _InterlockedDecrement(long volatile *);

typedef struct Rep_8266CC70 Rep_8266CC70;
typedef struct RepVt_8266CC70 {
    void (*destroy)(Rep_8266CC70 *);
    void (*deleteThis)(Rep_8266CC70 *);
} RepVt_8266CC70;
struct Rep_8266CC70 {
    RepVt_8266CC70 *vt;
    long uses;
    long weaks;
};

typedef struct Entry_8266CC70 {
    void *ptr;
    Rep_8266CC70 *rep;
    int value;            /* 0x08 */
} Entry_8266CC70;

extern Entry_8266CC70 *fn_8266CB08(Entry_8266CC70 *dst, Entry_8266CC70 *src);
extern void fn_8256E1D8(Entry_8266CC70 *self, void *p, Rep_8266CC70 *r);

static __forceinline void Decwref_8266CC70(Rep_8266CC70 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_8266CC70(Entry_8266CC70 *a, Entry_8266CC70 *b)
{
    Entry_8266CC70 tmp;
    Rep_8266CC70 *rep;

    fn_8266CB08(&tmp, a);
    fn_8256E1D8(a, b->ptr, b->rep);
    a->value = b->value;
    rep = tmp.rep;
    fn_8256E1D8(b, tmp.ptr, rep);
    b->value = tmp.value;
    if (rep != 0)
        Decwref_8266CC70(rep);
}
