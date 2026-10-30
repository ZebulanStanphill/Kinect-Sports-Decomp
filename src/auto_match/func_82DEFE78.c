typedef struct Iface_82DEFE78 Iface_82DEFE78;
typedef struct { void *f0; char *(*get)(unsigned char *out, Iface_82DEFE78 *self); } VT_82DEFE78;
struct Iface_82DEFE78 { VT_82DEFE78 *vt; };
typedef struct { char pad[0x14]; Iface_82DEFE78 sub; } Mid_82DEFE78;
typedef struct { char pad[0x20]; Mid_82DEFE78 *mid; } Obj_82DEFE78;

unsigned char *fn_82DEFE78(unsigned char *out, Obj_82DEFE78 *self)
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
