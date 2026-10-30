typedef struct Rel Rel;
typedef struct {
    void (*slot0)(Rel *r);
    void (*release)(Rel *r);
} RelVtbl;
struct Rel {
    RelVtbl *vt;
};

typedef struct {
    int x0;
    int x4;
    int x8;
    char padc[0x18 - 0xc];
    int x18;
    Rel *rel;
} Obj;

int fn_82FF8648(Obj *o)
{
    if (o->rel != 0) {
        o->rel->vt->release(o->rel);
        o->rel = 0;
    }
    o->x18 = 0;
    o->x8 = 0;
    return 1;
}
