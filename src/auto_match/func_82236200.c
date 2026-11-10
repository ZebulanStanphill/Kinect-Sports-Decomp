typedef struct Iface_82236200 Iface_82236200;
typedef struct Vtable_82236200 { void *pad[4]; char *(*get10)(Iface_82236200 *); char *(*get14)(Iface_82236200 *); } Vtable_82236200;
struct Iface_82236200 { Vtable_82236200 *vt; };
typedef struct Object_82236200 { char pad[0x20]; Iface_82236200 *src; } Object_82236200;
extern int fn_8240D928(int);
static __forceinline char *Get10(Object_82236200 *o) { if (o->src != 0) return o->src->vt->get10(o->src); return 0; }
static __forceinline char *Get14(Object_82236200 *o) { if (o->src != 0) return o->src->vt->get14(o->src); return 0; }
static __forceinline char *Access(char *base, int index) {
    unsigned cap = *(unsigned *)(base+0x18);
    return cap <= 4 ? base + (index+2)*4 : *(char **)(base+(index+2)*4);
}
char *fn_82236200(Object_82236200 *o, int idx) {
    char *base;
    if (Get10(o) != 0) {
        base = Get10(o);
        return Access(base+8, fn_8240D928(idx));
    }
    if (Get14(o) != 0) {
        base = Get14(o);
        return Access(base+12, fn_8240D928(idx));
    }
    base = (char *)o + 4;
    return *(unsigned *)((char *)o+0x10) <= 4 ? base+8 : *(char **)(base+8);
}
