typedef struct Info {
    char pad[0x84];
    unsigned int : 28;
    unsigned int flag : 1;
} Info;

typedef struct Obj Obj;
typedef struct {
    void *pad[11];
    void *(*get)(Obj *self);
} ObjVT;

struct Obj {
    ObjVT *vt;
    char pad[0x3b0];
    Info *info;
};

unsigned int fn_82BA3120(Obj *p, Obj *other)
{
    unsigned int r = p->info->flag;
    if (r && p->vt->get(p) != 0) {
        r = p->info != other->info;
    }
    return r;
}
