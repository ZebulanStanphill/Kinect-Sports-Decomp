typedef struct Vt_82723D28 { void *pad0[2]; int (*f8)(void *); } Vt_82723D28;
typedef struct Vt2_82723D28 { char pad[0x40]; void *(*f40)(void *); } Vt2_82723D28;
typedef struct Range_82723D28 { char pad[0x1c]; unsigned lo, hi; } Range_82723D28;
typedef struct Comp_82723D28 { char pad[8]; Range_82723D28 *range; char pad2[0x68 - 0xc]; unsigned short flags; } Comp_82723D28;
typedef struct Info_82723D28 { char pad[0x114]; int comp; } Info_82723D28;
typedef struct Owner_82723D28 { Vt2_82723D28 *vt; char pad[0xa0 - 4]; Info_82723D28 *info; } Owner_82723D28;
typedef struct Child_82723D28 { Vt_82723D28 *vt; } Child_82723D28;
typedef struct Obj_82723D28 { char pad[8]; Child_82723D28 *child; char pad2[0x18 - 0xc]; int args; int argc; } Obj_82723D28;
extern void *fn_826957D0(Obj_82723D28 *, int);
extern unsigned fn_82695608(void *, int);
extern unsigned fn_82697700(void *, int);
extern void fn_827A2950(int, unsigned, unsigned, unsigned);
static unsigned RMin(Range_82723D28 *r) { unsigned b = r->hi; unsigned a = r->lo; return a < b ? a : b; }
static unsigned RMax(Range_82723D28 *r) { return r->hi < r->lo ? r->lo : r->hi; }
#define COMP ((Comp_82723D28 *)comp)
void fn_82723D28(Obj_82723D28 *o)
{
    if (o->child != 0 && o->child->vt->f8(o->child) == 4) {
        Owner_82723D28 *owner = o->child != 0 ? (Owner_82723D28 *)((char *)o->child - 0x68) : 0;
        int comp = owner->info->comp;
        if (comp != 0) {
            unsigned bit;
            unsigned lo;
            unsigned hi;
            void *res;
            bit = COMP->flags >> 2 & 1;
            lo = RMin(COMP->range);
            hi = RMax(COMP->range);
            if (o->argc >= 1)
                bit = fn_82695608(fn_826957D0(o, 0), o->args);
            if (o->argc >= 2)
                lo = fn_82697700(fn_826957D0(o, 1), o->args);
            if (o->argc >= 3)
                hi = fn_82697700(fn_826957D0(o, 2), o->args);
            fn_827A2950(comp, lo, hi, bit);
            res = owner->vt->f40(owner);
            if (res != 0)
                *(unsigned *)((char *)res + 0xb00) |= 0x400;
        }
    }
}
