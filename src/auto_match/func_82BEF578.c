typedef struct Ided_82BEF578 Ided_82BEF578;
typedef struct { void *f0; unsigned int (*getId)(Ided_82BEF578 *p); } IdedVt_82BEF578;
struct Ided_82BEF578 { IdedVt_82BEF578 *vt; };
typedef struct { int f0; int f4; Ided_82BEF578 *ided; } Ref_82BEF578;
typedef struct { char pad[0x2c]; Ref_82BEF578 ref; } Owner_82BEF578;
typedef struct { int a; int b; int count; } List_82BEF578;
typedef struct {
    char pad[0x2c];
    Owner_82BEF578 *owner;
    char pad2[0x48 - 0x30];
    unsigned short max;
    short pad3;
    List_82BEF578 list;
    unsigned int state;
} Obj_82BEF578;
extern void fn_82BE5340(List_82BEF578 *l);
extern void fn_82BE5350(List_82BEF578 *l);
extern unsigned int *fn_82BE5378(List_82BEF578 *l);
extern void fn_82BEEEA0(Obj_82BEF578 *o, unsigned int id);
static __forceinline unsigned int refId(Ref_82BEF578 *r) { return r->ided ? r->ided->vt->getId(r->ided) : 0; }
static __forceinline unsigned int getId(Owner_82BEF578 *p) { return p ? refId(&p->ref) : 0; }

int fn_82BEF578(Obj_82BEF578 *o, unsigned int id)
{
unsigned short i = 0;
if (o->state != 1) {
    fn_82BE5340(&o->list);
    while (o->list.count != 0 && i++ < o->max) {
        if (getId(o->owner) == id) return 0;
        if (*fn_82BE5378(&o->list) == id) { fn_82BEEEA0(o, id); return 1; }
        fn_82BE5350(&o->list);
    }
}
return 0;
}
