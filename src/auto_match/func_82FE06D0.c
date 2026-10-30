typedef struct Alloc_82FE06D0 Alloc_82FE06D0;
typedef struct { void *f0; void *f1; void (*release)(Alloc_82FE06D0 *, void *); } AVT_82FE06D0;
struct Alloc_82FE06D0 { AVT_82FE06D0 *vt; };
typedef struct { char pad[0x60]; char tail[0xc]; } Item_82FE06D0;
typedef struct {
    char pad0[0xc4];
    unsigned int count;
    char pad1[0xd4 - 0xc8];
    Item_82FE06D0 *items;
} Obj_82FE06D0;
extern void fn_82FE4E90(Item_82FE06D0 *, Alloc_82FE06D0 *);
extern void fn_82FE4220(void *, Alloc_82FE06D0 *);

void fn_82FE06D0(Obj_82FE06D0 *o, Alloc_82FE06D0 *a)
{
    unsigned int i;
    if (o->items != 0) {
        for (i = 0; i < o->count; i++) {
            fn_82FE4E90(o->items + i, a);
            fn_82FE4220(o->items[i].tail, a);
        }
        a->vt->release(a, o->items);
        o->items = 0;
    }
}
