struct Cb_826C6E68;
typedef struct VT_826C6E68 { void *pad0; void (*f4)(struct Cb_826C6E68 *, void *); } VT_826C6E68;
typedef struct Cb_826C6E68 { VT_826C6E68 *vt; } Cb_826C6E68;
struct Src_826C6E68;
typedef struct SVT_826C6E68 { void *pad[12]; unsigned char (*f30)(struct Src_826C6E68 *, void *, int); } SVT_826C6E68;
typedef struct Src_826C6E68 { SVT_826C6E68 *vt; } Src_826C6E68;
typedef struct { char pad0[4]; int cnt; char pad1[0x94]; Src_826C6E68 *src; char pad2[0x20]; unsigned char *flags; } Obj_826C6E68;
typedef struct { Cb_826C6E68 **p; unsigned int n; } Vec_826C6E68;
extern void fn_8267C498(void *);

void fn_826C6E68(Obj_826C6E68 *o, int idx)
{
    if (o->flags[idx] == 0) {
        unsigned char ok = 0;
        Vec_826C6E68 v;
        v.p = 0;
        v.n = 0;
        o->cnt++;
        if (o->src->vt->f30(o->src, &v, idx) && v.n != 0) {
            unsigned int i;
            for (i = 0; i < v.n; i++)
                v.p[i]->vt->f4(v.p[i], o);
            ok = 1;
        }
        if (ok)
            o->flags[idx] = 1;
        fn_8267C498(o);
    }
}
