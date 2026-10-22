typedef struct Obj Obj;
typedef struct Owner Owner;

typedef struct {
    char pad0[0x3c];
    unsigned int (*getTime)(Obj *o);
} ObjVt;

typedef struct {
    char pad0[0x60];
    unsigned int x60;
} Cfg;

struct Obj {
    ObjVt *vt;
    int pad4[5];
    Cfg *cfg;
    int pad1c[14];
    Owner *owner;
    unsigned int time;
};

typedef struct {
    char pad0[8];
    char *(*get)(Owner *o);
} OwnerVt;

struct Owner {
    OwnerVt *vt;
    int pad4[47];
    int xc0;
    int xc4;
};

void fn_82255DB0(Obj *p)
{
    unsigned int t;
    Owner *o;

    t = p->vt->getTime(p);
    if (t < p->time) {
        if (p->time - t < (p->cfg->x60 + 1) >> 1) {
            p->time = p->vt->getTime(p);
        }
    }
    o = p->owner;
    if (o != 0) {
        if (p == (Obj *)(o->vt->get(o) + 0x390)) {
            o->xc0 = 1;
        } else if (p == (Obj *)(o->vt->get(o) + 0x3ec)) {
            o->xc4 = 1;
        }
    }
    p->time = p->vt->getTime(p);
}
