struct Obj_82521B20;
typedef struct VT_82521B20 { void (*f0)(struct Obj_82521B20 *, void *); } VT_82521B20;
typedef struct Rc_82521B20 { char pad[0xc]; int refs; } Rc_82521B20;
typedef struct Item_82521B20 { void *a; Rc_82521B20 *rc; } Item_82521B20;
typedef struct Vec_82521B20 { Item_82521B20 **begin; Item_82521B20 **end; } Vec_82521B20;
typedef struct Obj_82521B20 {
    VT_82521B20 *vt;
    char cs[0x1c];
    Vec_82521B20 v;
    char pad28[0xa0 - 0x28];
    long pending;
} Obj_82521B20;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82522ED8(void *p);
extern void *memmove(void *d, const void *s, unsigned int n);
long _InterlockedExchange(long volatile *p, long v);

void fn_82521B20(Obj_82521B20 *o)
{
    Vec_82521B20 *v;
    Item_82521B20 **it, **nx;
    Item_82521B20 *item;
    Rc_82521B20 *rc;
    RtlEnterCriticalSection(o->cs);
    it = o->v.begin;
    if (it != o->v.end) {
        nx = it + 1;
        do {
            item = *it;
            o->vt->f0(o, item->a);
            rc = item->rc;
            if (rc != 0) { if (--rc->refs <= 0) fn_82522ED8(rc); }
            fn_82522ED8(item);
            v = &o->v;
            memmove(it, nx, (v->end - nx) * sizeof(Item_82521B20 *));
            v->end--;
        } while (it != o->v.end);
    }
    RtlLeaveCriticalSection(o->cs);
    _InterlockedExchange(&o->pending, 0);
}
