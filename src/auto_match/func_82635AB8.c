typedef struct Unk Unk;
typedef struct {
    void (*AddRef)(Unk *p);
    void (*Release)(Unk *p);
} UnkVtbl;
struct Unk {
    UnkVtbl *vt;
};
typedef struct {
    char pad[0x4db8];
    Unk *ref;
} Obj;

void fn_82635AB8(Obj *o, Unk *p)
{
    if (o->ref != 0) {
        o->ref->vt->Release(o->ref);
        o->ref = 0;
    }
    o->ref = p;
    if (p != 0)
        p->vt->AddRef(p);
}
