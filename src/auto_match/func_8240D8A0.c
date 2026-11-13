long _InterlockedDecrement(long volatile *);

typedef struct Rep_8240D8A0 Rep_8240D8A0;
typedef struct RepVt_8240D8A0 {
    void (*destroy)(Rep_8240D8A0 *);
    void (*deleteThis)(Rep_8240D8A0 *);
} RepVt_8240D8A0;
struct Rep_8240D8A0 {
    RepVt_8240D8A0 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_8240D8A0 {
    void *vt;
    int pad4[3];
    Rep_8240D8A0 *rep;     /* 0x10 */
} Obj_8240D8A0;

extern char lbl_821B81BC[], lbl_821CB794[];

static __forceinline void Decwref_8240D8A0(Rep_8240D8A0 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_8240D8A0(Rep_8240D8A0 **p)
{
    if (*p != 0)
        Decwref_8240D8A0(*p);
}

void fn_8240D8A0(Obj_8240D8A0 *o)
{
    o->vt = lbl_821B81BC;
    Release_8240D8A0(&o->rep);
    o->vt = lbl_821CB794;
}
