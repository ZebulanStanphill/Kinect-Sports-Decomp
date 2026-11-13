long _InterlockedDecrement(long volatile *);
extern void *memmove(void *d, const void *s, unsigned int n);

typedef struct Rep_822C1A38 Rep_822C1A38;
typedef struct RepVt_822C1A38 {
    void (*destroy)(Rep_822C1A38 *);
    void (*deleteThis)(Rep_822C1A38 *);
} RepVt_822C1A38;
struct Rep_822C1A38 {
    RepVt_822C1A38 *vt;
    long uses;
    long weaks;
};

typedef struct Owner_822C1A38 Owner_822C1A38;

typedef struct Handle_822C1A38 {
    Owner_822C1A38 *owner;
    Rep_822C1A38 *rep;
} Handle_822C1A38;

typedef struct Vec_822C1A38 {
    Handle_822C1A38 **first;
    Handle_822C1A38 **last;
} Vec_822C1A38;

struct Owner_822C1A38 {
    int pad[2];
    Vec_822C1A38 handles;   /* 0x8 */
};

extern unsigned char fn_8223AAC0(Rep_822C1A38 *);
extern void fn_822315A0(Rep_822C1A38 *);

static __forceinline void Decwref_822C1A38(Rep_822C1A38 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Erase_822C1A38(Vec_822C1A38 *v, Handle_822C1A38 **p)
{
    Handle_822C1A38 **nx = p + 1;
    memmove(p, nx, (v->last - nx) * sizeof(*p));
    v->last--;
}

static __forceinline Handle_822C1A38 **Find_822C1A38(Owner_822C1A38 *o, Handle_822C1A38 *h)
{
    Handle_822C1A38 **last = o->handles.last;
    Handle_822C1A38 **p;
    for (p = o->handles.first; p != last; p++)
        if (*p == h)
            break;
    return p;
}

void fn_822C1A38(Handle_822C1A38 *self)
{
    Rep_822C1A38 *rep = self->rep;
    Owner_822C1A38 *owner = self->owner;
    if (rep != 0 && fn_8223AAC0(rep)) {
        if (owner != 0) {
            Handle_822C1A38 **p = Find_822C1A38(owner, self);
            if (p != owner->handles.last)
                Erase_822C1A38(&owner->handles, p);
            if (self->rep != 0)
                Decwref_822C1A38(self->rep);
            self->rep = 0;
            self->owner = 0;
        }
        fn_822315A0(rep);
    }
}
