struct Obj_82521C00;
typedef struct VT_82521C00 { void (*f0)(struct Obj_82521C00 *, void *); } VT_82521C00;
typedef struct Rc_82521C00 { char pad[0xc]; int refs; } Rc_82521C00;
typedef struct Item_82521C00 { void *a; Rc_82521C00 *rc; } Item_82521C00;
typedef struct Vec_82521C00 { Item_82521C00 **begin; Item_82521C00 **end; } Vec_82521C00;
typedef struct Obj_82521C00 { VT_82521C00 *vt; char cs[0x1c]; Vec_82521C00 v; } Obj_82521C00;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82522ED8(void *p);
extern void *memmove(void *d, const void *s, unsigned int n);

void fn_82521C00(Obj_82521C00 *o, Item_82521C00 *key)
{
    Vec_82521C00 *v;
    Item_82521C00 **it, **nx;
    Item_82521C00 *item;
    Rc_82521C00 *rc;
    RtlEnterCriticalSection(o->cs);
    it = o->v.begin;
if (it != o->v.end) {
    nx = it + 1;
    do {
        item = *it;
        if (key == item) {
            o->vt->f0(o, item->a);
            rc = item->rc;
            if (rc != 0) { if (--rc->refs <= 0) fn_82522ED8(rc); }
            fn_82522ED8(item);
            v = &o->v;
            memmove(it, nx, (v->end - nx) * sizeof(Item_82521C00 *));
            v->end--;
        } else { it++; nx++; }
    } while (it != o->v.end);
}

    RtlLeaveCriticalSection(o->cs);
}
