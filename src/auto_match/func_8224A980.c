typedef struct Iface_8224A980 Iface_8224A980;
typedef struct Vtable_8224A980 { void *pad[4]; char *(*get10)(Iface_8224A980 *); char *(*get14)(Iface_8224A980 *); } Vtable_8224A980;
struct Iface_8224A980 { Vtable_8224A980 *vt; };
typedef struct Object_8224A980 { char pad[0x20]; Iface_8224A980 *src; } Object_8224A980;
extern int fn_8240D928(int);
static __forceinline char *Get10(Object_8224A980 *o) { if (o->src != 0) return o->src->vt->get10(o->src); return 0; }
static __forceinline char *Get14(Object_8224A980 *o) { if (o->src != 0) return o->src->vt->get14(o->src); return 0; }
static __forceinline char *Access(char *base, int index) {
    unsigned cap = *(unsigned *)(base+0x18);
    return cap <= 4 ? base + (index+2)*4 : *(char **)(base+(index+2)*4);
}
extern unsigned fn_82248C08(Object_8224A980 *);
unsigned fn_8224A980(Object_8224A980 *o, int idx) {
    char *base;
    if (Get10(o) != 0) {
        base = Get10(o);
        return *(unsigned *)Access(base+8, fn_8240D928(idx));
    }
    if (Get14(o) != 0) {
        base = Get14(o);
        return *(unsigned *)Access(base+12, fn_8240D928(idx));
    }
    return fn_82248C08(o);
}
