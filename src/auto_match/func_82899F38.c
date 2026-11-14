typedef struct Iface_82899F38 Iface_82899F38;
typedef struct Object_82899F38 Object_82899F38;
typedef struct Vtable_82899F38 {
    void *pad0;
    Iface_82899F38 *(*get4)(Iface_82899F38 *);
    void *pad8[3];
    char *(*get14)(Iface_82899F38 *);
    void *pad18[17];
    unsigned char (*check)(Iface_82899F38 *, int, void *);
} Vtable_82899F38;
struct Iface_82899F38 { Vtable_82899F38 *vt; };
struct Object_82899F38 {
    char pad0[4];
    char ctx[0x1c];
    Iface_82899F38 *src;
};
typedef struct Item_82899F38 {
    char pad0[0x26];
    unsigned char done;
} Item_82899F38;

extern int fn_8240D928(Item_82899F38 *item);
extern unsigned char fn_82898430(Object_82899F38 *o, Item_82899F38 *item);
extern unsigned char fn_828997F0(char *a, int key, char *b, int key2);

static __forceinline Iface_82899F38 *Get4(Object_82899F38 *o) { if (o->src != 0) return o->src->vt->get4(o->src); return 0; }
static __forceinline char *Get14(Object_82899F38 *o) { if (o->src != 0) return o->src->vt->get14(o->src); return 0; }

unsigned char fn_82899F38(Object_82899F38 *o, Item_82899F38 *item)
{
    unsigned char result = 0;
    int key;
    if (Get4(o) != 0) {
        Iface_82899F38 *p = Get4(o);
        if (item->done != 0) {
            result = 1;
        } else {
            key = fn_8240D928(item);
            result = fn_82898430(o, item) == 0 && p->vt->check(p, key, o->ctx) != 0;
        }
    } else if (Get14(o) != 0) {
        char *p = Get14(o);
        if (item->done != 0) {
            result = 1;
        } else {
            key = fn_8240D928(item);
            result = fn_82898430(o, item) == 0 && fn_828997F0(p + 0x28, key, p + 0xc, key) != 0;
        }
    }
    return result;
}
