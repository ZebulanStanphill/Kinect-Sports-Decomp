long _InterlockedDecrement(long volatile *);

typedef struct Rep_8250EC68 Rep_8250EC68;
typedef struct RepVt_8250EC68 {
    void (*destroy)(Rep_8250EC68 *);
    void (*deleteThis)(Rep_8250EC68 *);
} RepVt_8250EC68;
struct Rep_8250EC68 {
    RepVt_8250EC68 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_8250EC68 {
    void *px;
    Rep_8250EC68 *rep;
} WeakPtr_8250EC68;

typedef struct Target_8250EC68 {
    char pad0[0x2fc];
    int f2fc;
    char pad300[0x4ac - 0x300];
    int f4ac;
} Target_8250EC68;

typedef struct Obj_8250EC68 {
    char pad0[0x10];
    int f10;
    Target_8250EC68 *target;    /* 0x14 */
    WeakPtr_8250EC68 owner;     /* 0x18 */
} Obj_8250EC68;

static __forceinline unsigned char Expired_8250EC68(WeakPtr_8250EC68 *w)
{
    return w->rep == 0 || w->rep->uses == 0;
}

static __forceinline void Decwref_8250EC68(Rep_8250EC68 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Reset_8250EC68(WeakPtr_8250EC68 *w)
{
    if (w->rep != 0)
        Decwref_8250EC68(w->rep);
    w->rep = 0;
    w->px = 0;
}

void fn_8250EC68(Obj_8250EC68 *self)
{
    if (!Expired_8250EC68(&self->owner)) {
        self->target->f2fc = 0;
        self->target->f4ac = 0;
    }
    self->f10 = 0;
    self->target = 0;
    Reset_8250EC68(&self->owner);
}
