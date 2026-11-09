typedef struct Elem_8252D108 {
    char pad[0x170];
    void *cb1;   /* 0x170 */
    void *cb2;   /* 0x174 */
    void *ctx;   /* 0x178 */
} Elem_8252D108;

typedef struct Obj_8252D108 {
    char pad[0x18c];
    unsigned int count;          /* 0x18c */
    Elem_8252D108 **items;       /* 0x190 */
} Obj_8252D108;

typedef struct Vt_8252D108 {
    char pad[0x4c];
    void *(*get)(void *self);    /* 0x4c */
} Vt_8252D108;

typedef struct Src_8252D108 {
    Vt_8252D108 *vt;
} Src_8252D108;

typedef struct Sub_8252D108 {
    int pad0[3];
    void *src;                   /* 0x18c */
    Obj_8252D108 *obj;           /* 0x190 */
    int pad14[4];
    int x24;                     /* 0x1a4 */
} Sub_8252D108;

typedef struct Main_8252D108 {
    char pad0[0x180];
    Sub_8252D108 sub;            /* 0x180 */
    char pad1a8[0x7b0 - 0x1a8];
    void *x7b0;                  /* 0x7b0 */
    char pad7b4[0x8c0 - 0x7b4];
    Src_8252D108 *x8c0;          /* 0x8c0 */
} Main_8252D108;

extern void fn_8252D9D0(void);
extern void fn_8252DA48(void);
extern Obj_8252D108 *fn_82554260(void *mem, void *src, int n);
extern void fn_825A2108(Main_8252D108 *p, Obj_8252D108 *o, int v);
extern void *fn_827F04B0(int size);
extern int fn_827F0858(Obj_8252D108 *o);
extern void fn_827F2DD0(void *src, Obj_8252D108 *o, float f, int a, int b);

Obj_8252D108 *fn_8252D108(Main_8252D108 *p)
{
    Sub_8252D108 *s = &p->sub;
    Obj_8252D108 *o;
    void *mem;
    unsigned int i;

    if (s->src == 0) {
        Src_8252D108 *src = p->x8c0;
        if (src == 0) {
            return 0;
        }
        s->src = src->vt->get(src);
    }
    if (s->obj == 0 && s->x24 != 0) {
        mem = fn_827F04B0(0x1a0);
        o = mem ? fn_82554260(mem, s->src, s->x24) : 0;
        s->obj = o;
        fn_827F2DD0(s->src, o, 0.0f, 0x12, 0);
        if (p->x7b0 != 0) {
            fn_825A2108(p, s->obj, fn_827F0858(s->obj));
        }
        o = s->obj;
        for (i = 0; i < o->count; i++) {
            Elem_8252D108 *e = o->items[i];
            e->cb1 = (void *)fn_8252D9D0;
            e->cb2 = (void *)fn_8252DA48;
            e->ctx = p;
        }
    }
    return s->obj;
}
