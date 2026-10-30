typedef struct Ent_82FED848 {
    char pad0[0x10];
    char sub[0x70];
    char name[4];
    int state;
    char pad1[0x108];
    unsigned char f190;
} Ent_82FED848;
typedef struct Req_82FED848 {
    char pad[0xda];
    unsigned char flags;
} Req_82FED848;
extern void fn_82FEF800(void *out, Req_82FED848 *r);
extern unsigned fn_83025190(void *name);
extern Ent_82FED848 *fn_82FECFF0(void *a, unsigned b, int c);
extern void fn_83023DA8(unsigned a, void *sub);
extern unsigned char fn_83025288(void *name);
extern unsigned char fn_830251F0(void *name);
extern void fn_830245B0(void *sub, int x);
extern Ent_82FED848 **lbl_832643F4[];
extern unsigned lbl_832643D4;
extern unsigned lbl_83264428[];

Ent_82FED848 *fn_82FED848(Req_82FED848 *r)
{
    struct { void *p; } key;
    unsigned h;
    Ent_82FED848 **it;
    Ent_82FED848 *e;
    unsigned b;
    int c;

    fn_82FEF800(&key, r);
    h = fn_83025190(&key);
    for (it = lbl_832643F4[0]; it != lbl_832643F4[1]; it++) {
        e = *it;
        if (fn_83025190(e->name) == h && e->state != 2)
            return e;
    }
    if (r->flags & 2)
        e = fn_82FECFF0(key.p, 4, 1);
    else
        e = fn_82FECFF0(key.p, lbl_83264428[1], 0x400);
    if (e == 0)
        return e;
    e->f190 = (r->flags & 0xfe) << 6 | (e->f190 & 0x7f);
    if ((r->flags & 2) == 0)
        fn_83023DA8(lbl_832643D4, e->sub);
    if (fn_83025288(&key) == 0 && fn_830251F0(&key) == 0)
        fn_830245B0(e->sub, 0);
    return e;
}
