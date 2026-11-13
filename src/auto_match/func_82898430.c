typedef struct Iface_82898430 Iface_82898430;
typedef struct Vtable_82898430 {
    void *pad0;
    unsigned char *(*get4)(Iface_82898430 *);
    void *pad8[3];
    unsigned char *(*get14)(Iface_82898430 *);
} Vtable_82898430;
struct Iface_82898430 { Vtable_82898430 *vt; };
typedef struct Object_82898430 { char pad[0x20]; Iface_82898430 *src; } Object_82898430;
extern int fn_8240D928(int);
static __forceinline unsigned char *Get4(Object_82898430 *o) { if (o->src != 0) return o->src->vt->get4(o->src); return 0; }
static __forceinline unsigned char *Get14(Object_82898430 *o) { if (o->src != 0) return o->src->vt->get14(o->src); return 0; }
static __forceinline int Test(unsigned char *bits, int index) { return (bits[4 + index / 8] & (1 << (index % 8))) != 0; }
int fn_82898430(Object_82898430 *o, int key)
{
    int result = 0;
    if (Get4(o) != 0) {
        result = Test(Get4(o), fn_8240D928(key));
    } else if (Get14(o) != 0) {
        result = Test(Get14(o), fn_8240D928(key));
    }
    return result;
}
