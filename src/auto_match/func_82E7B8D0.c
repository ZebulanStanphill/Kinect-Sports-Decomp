typedef struct {
    unsigned short vt;
    unsigned short r1, r2, r3;
    void *value;
    int pad;
} Prop_82E7B8D0;

typedef struct { char pad[0x10]; Prop_82E7B8D0 prop; } Src_82E7B8D0;

extern void fn_82E7F0F8(Prop_82E7B8D0 *p);
extern int fn_82E7E900(Prop_82E7B8D0 *dst, Prop_82E7B8D0 *src);
extern int fn_82E72FB8(Prop_82E7B8D0 *p);

int fn_82E7B8D0(Src_82E7B8D0 *src, void **out)
{
    Prop_82E7B8D0 v;
    int hr;
    fn_82E7F0F8(&v);
    if (src->prop.vt != 0x1f) {
        hr = 0xc00d36b2;
    } else {
        hr = fn_82E7E900(&v, &src->prop);
        if (hr >= 0) {
            *out = v.value;
            fn_82E7F0F8(&v);
        }
    }
    fn_82E72FB8(&v);
    return hr;
}
