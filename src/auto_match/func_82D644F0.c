typedef struct Target Target;
typedef struct {
    void *slot[5];
    void (*set)(Target *t, unsigned int id, int value);
} TargetVtbl;
struct Target {
    TargetVtbl *vt;
};

typedef struct Obj Obj;
typedef struct {
    void (*release)(Obj *o, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
    int x4;
    Target *target;
    unsigned short id;
};

void fn_82D644F0(Obj *o, int value)
{
    if (o->id != 0xffff) {
        o->target->vt->set(o->target, o->id, value);
    }
    o->vt->release(o, 1);
}
