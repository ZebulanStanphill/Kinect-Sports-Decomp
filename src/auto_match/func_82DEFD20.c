typedef struct Iface_82DEFD20 Iface_82DEFD20;
typedef struct { void *f0; char *(*get)(unsigned char *out, Iface_82DEFD20 *self); } VT_82DEFD20;
struct Iface_82DEFD20 { VT_82DEFD20 *vt; };
typedef struct { char pad[0xc]; Iface_82DEFD20 sub; } Mid_82DEFD20;
typedef struct { char pad[0x28]; Mid_82DEFD20 *mid; } Obj_82DEFD20;

unsigned char *fn_82DEFD20(unsigned char *out, Obj_82DEFD20 *self)
{
    unsigned char buf[16];
    unsigned char v;
    if (self->mid != 0) {
        char *p = self->mid->sub.vt->get(buf, &self->mid->sub);
        v = 0;
        if (*p == 0) goto done;
    }
    v = 1;
done:
    *out = v;
    return out;
}
