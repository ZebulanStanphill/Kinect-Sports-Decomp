typedef struct Ided_82BEF3A8 Ided_82BEF3A8;
typedef struct { void *f0; unsigned int (*getId)(Ided_82BEF3A8 *p); } IdedVt_82BEF3A8;
struct Ided_82BEF3A8 { IdedVt_82BEF3A8 *vt; };
typedef struct { int f0; int f4; Ided_82BEF3A8 *ided; } Ref_82BEF3A8;
typedef struct { char pad[0x2c]; Ref_82BEF3A8 ref; } Owner_82BEF3A8;
typedef struct { int a; int b; int count; } List_82BEF3A8;
typedef struct {
    char pad0[0x10];
    unsigned int status;
    char pad14[0x2c - 0x14];
    Owner_82BEF3A8 *owner;
    char pad30[4];
    int mode;
    char pad38[0x4c - 0x38];
    List_82BEF3A8 list;
    unsigned int state;
} Obj_82BEF3A8;

extern void fn_82BE5340(List_82BEF3A8 *l);
extern unsigned int *fn_82BE5378(List_82BEF3A8 *l);

static __forceinline unsigned int refId(Ref_82BEF3A8 *r) { return r->ided ? r->ided->vt->getId(r->ided) : 0; }

int fn_82BEF3A8(Obj_82BEF3A8 *o)
{
    unsigned int id;

    if (o->mode != 2 && o->state >= 2) {
        o->status = 0x10;
        return 0;
    }
    fn_82BE5340(&o->list);
    if (o->list.count != 0 && o->owner != 0) {
        id = refId(&o->owner->ref);
        if (*fn_82BE5378(&o->list) != id) {
            o->status = 0x10;
            return 0;
        }
    }
    o->status = 2;
    return 0x195;
}
