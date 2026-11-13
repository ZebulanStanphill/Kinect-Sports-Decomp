typedef struct Iface_8247E5B0 Iface_8247E5B0;
typedef struct Vtable_8247E5B0 { void *pad[4]; char *(*get10)(Iface_8247E5B0 *); char *(*get14)(Iface_8247E5B0 *); } Vtable_8247E5B0;
struct Iface_8247E5B0 { Vtable_8247E5B0 *vt; };
typedef struct Object_8247E5B0 { char pad[0x20]; Iface_8247E5B0 *src; } Object_8247E5B0;
typedef struct Value_8247E5B0 { unsigned char data[0x428]; } Value_8247E5B0;
extern int fn_8240D928(int);
static __forceinline char *Get10(Object_8247E5B0 *o) { if (o->src != 0) return o->src->vt->get10(o->src); return 0; }
static __forceinline char *Get14(Object_8247E5B0 *o) { if (o->src != 0) return o->src->vt->get14(o->src); return 0; }
static __forceinline char *Access(char *base, int index) {
    unsigned cap = *(unsigned *)(base+0x18);
    return cap <= 4 ? base + (index+2)*4 : *(char **)(base+(index+2)*4);
}
extern Value_8247E5B0 *fn_8247E4D8(Value_8247E5B0 *out, Object_8247E5B0 *);
Value_8247E5B0 *fn_8247E5B0(Value_8247E5B0 *out, Object_8247E5B0 *o, int idx) {
    char *base;
    if (Get10(o) != 0) {
        base = Get10(o);
        *out = *(Value_8247E5B0 *)Access(base+8, fn_8240D928(idx));
        return out;
    }
    if (Get14(o) != 0) {
        base = Get14(o);
        *out = *(Value_8247E5B0 *)Access(base+12, fn_8240D928(idx));
        return out;
    }
    fn_8247E4D8(out, o);
    return out;
}
