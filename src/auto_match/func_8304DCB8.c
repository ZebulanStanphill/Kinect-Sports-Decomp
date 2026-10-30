typedef struct Rel Rel;
typedef struct {
    void (*slot0)(Rel *r);
    void (*release)(Rel *r);
} RelVtbl;
struct Rel {
    RelVtbl *vt;
};

typedef struct {
    char pad0[0x28];
    Rel *rel;
    char pad2c[0x41 - 0x2c];
    unsigned char x41;
} Obj;

extern void fn_8304D648(Obj *o);

void fn_8304DCB8(Obj *o)
{
    if (o->rel != 0) {
        o->rel->vt->release(o->rel);
        o->rel = 0;
    }
    o->x41 = 0;
    fn_8304D648(o);
}
