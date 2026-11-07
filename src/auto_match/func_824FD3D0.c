typedef struct VObj_824FD3D0 VObj_824FD3D0;
typedef struct VObjVt_824FD3D0 {
    void (*destroy)(VObj_824FD3D0 *self, int flags);
} VObjVt_824FD3D0;
struct VObj_824FD3D0 {
    VObjVt_824FD3D0 *vt;
};

typedef struct RefObj_824FD3D0 RefObj_824FD3D0;
typedef struct RefObjVt_824FD3D0 {
    void *slot0;
    void (*release)(RefObj_824FD3D0 *self);
} RefObjVt_824FD3D0;
struct RefObj_824FD3D0 {
    RefObjVt_824FD3D0 *vt;
    int unk4;
    long refCount;
};

typedef struct Handle_824FD3D0 {
    void *unk0;
    RefObj_824FD3D0 *ref;
} Handle_824FD3D0;

typedef struct Pair_824FD3D0 {
    void *a;
    void *b;
} Pair_824FD3D0;

typedef struct Owned_824FD3D0 {
    char pad0[0x60];
    void *buf;
    int count;
    int capacity;
} Owned_824FD3D0;

typedef struct Self_824FD3D0 {
    char pad0[0xb60];
    VObj_824FD3D0 *objB60;
    int padB64[3];
    VObj_824FD3D0 *objB70;
    VObj_824FD3D0 *objB74;
    VObj_824FD3D0 *objB78;
    VObj_824FD3D0 *objB7C;
    int padB80;
    Owned_824FD3D0 *ownedB84;
    void *objB88;
} Self_824FD3D0;

long _InterlockedDecrement(long volatile *addend);

extern void *fn_82F51468(Handle_824FD3D0 *out, VObj_824FD3D0 *src);
extern void fn_824D2AE8(Pair_824FD3D0 *out, void *in);
extern void fn_82F52C20(void *a, void *b, int c);
extern void fn_822315A0(void *p);
extern void fn_82359C18(Owned_824FD3D0 *p);
extern void fn_8265CA20(void *p);

void fn_824FD3D0(Self_824FD3D0 *self)
{
    VObj_824FD3D0 *o;
    Owned_824FD3D0 *owned;

    if (self->objB88 != 0) {
        Pair_824FD3D0 s;
        Handle_824FD3D0 tmp;
        fn_824D2AE8(&s, fn_82F51468(&tmp, self->objB60));
        if (tmp.ref != 0) {
            RefObj_824FD3D0 *r = tmp.ref;
            if (_InterlockedDecrement(&r->refCount) == 0) {
                r->vt->release(r);
            }
        }
        fn_82F52C20(s.a, self->objB88, 1);
        if (s.b != 0) {
            fn_822315A0(s.b);
        }
    }
    o = self->objB60;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
    o = self->objB70;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
    o = self->objB7C;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
    owned = self->ownedB84;
    if (owned != 0) {
        if (owned->buf != 0) {
            fn_8265CA20(owned->buf);
        }
        owned->buf = 0;
        owned->count = 0;
        owned->capacity = 0;
        fn_82359C18(owned);
        fn_8265CA20(owned);
    }
    o = self->objB78;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
    o = self->objB74;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
}
