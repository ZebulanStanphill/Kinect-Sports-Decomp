typedef struct Ref_8269F500 {
    int count;
} Ref_8269F500;

typedef struct Tmp_8269F500 {
    int pad0;
    int pad4;
    int count;
} Tmp_8269F500;

typedef struct Sub_8269F500 {
    void **vt;
    int pad[5];
} Sub_8269F500;

typedef struct Obj_8269F500 {
    void **vt;
    int pad04[7];
    int f20;
    unsigned char pad24[0x42];
    unsigned char flags66;
    unsigned char pad67;
    Sub_8269F500 sub;
    int cache;
} Obj_8269F500;

extern void *fn_8267B890(int a, int size, int c);
extern void fn_8267BE38(void *p);
extern void fn_826944C8(Tmp_8269F500 *p);
extern void fn_8269A608(Ref_8269F500 *p);
extern Ref_8269F500 *fn_8269F1B8(void *mem, void *a, int b, Obj_8269F500 *c);
extern void fn_826FF4E8(Tmp_8269F500 **out, int src);

int fn_8269F500(Obj_8269F500 *o)
{
    Ref_8269F500 *n;
    Ref_8269F500 *old;
    Tmp_8269F500 *tmp;
    Tmp_8269F500 *t;
    void *mem;
    int r;
    int q;

    if (o->cache == 0) {
        r = ((int (*)(Obj_8269F500 *))o->vt[16])(o);
        if (((int (*)(Sub_8269F500 *))o->sub.vt[2])(&o->sub) == 2 && (o->flags66 & 0x10) != 0) {
            mem = fn_8267B890(*(int *)(r + 0x14), 0x14, 0);
            if (mem != 0) {
                q = ((int (*)(Obj_8269F500 *))o->vt[22])(o);
                n = fn_8269F1B8(mem, *(char **)(q + 0x78) + 8, 0, 0);
            } else {
                n = 0;
            }
            old = (Ref_8269F500 *)o->cache;
            if (old != 0) {
                if (--old->count <= 0) {
                    fn_8269A608(old);
                    fn_8267BE38(old);
                }
            }
            o->cache = (int)n;
        } else {
            fn_826FF4E8(&tmp, r);
            mem = fn_8267B890(*(int *)(r + 0x14), 0x14, 0);
            if (mem != 0) {
                n = fn_8269F1B8(mem, &tmp, o->f20, o);
            } else {
                n = 0;
            }
            old = (Ref_8269F500 *)o->cache;
            if (old != 0) {
                if (--old->count <= 0) {
                    fn_8269A608(old);
                    fn_8267BE38(old);
                }
            }
            o->cache = (int)n;
            t = tmp;
            if (--t->count == 0) {
                fn_826944C8(t);
            }
        }
    }
    return o->cache;
}
