extern unsigned char fn_82898298(void *);
extern void fn_82898240(void *, void *);

struct Iface_828A1318;
typedef struct { void *f0; void *f4; unsigned char (*f8)(struct Iface_828A1318 *); } VT_828A1318;
typedef struct Iface_828A1318 { VT_828A1318 *vt; } Iface_828A1318;
typedef struct { char pad[0x1c]; Iface_828A1318 *iface; } Item_828A1318;
typedef struct { char pad[0x2c4]; void *cur; } Obj_828A1318;

void fn_828A1318(Obj_828A1318 *o, Item_828A1318 *item)
{
    unsigned char c;
    unsigned char b;

    c = item->iface->vt->f8(item->iface);
    if (c != 0) {
        c = fn_82898298(item);
        if (c != 0 || o->cur == item) {
            b = 1;
        } else {
            b = 0;
        }
        if (!b) {
            fn_82898240(item, o->cur);
            o->cur = item;
        }
    }
}
