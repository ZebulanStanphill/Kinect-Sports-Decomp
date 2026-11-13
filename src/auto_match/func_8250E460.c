typedef struct Sub_8250E460 {
    char pad0[0x48];
    int m48;                 /* 0x48 */
} Sub_8250E460;

typedef struct Obj_8250E460 {
    char pad0[0x190];
    int list190;             /* 0x190 */
    char pad194[0x340 - 0x194];
    int list340;             /* 0x340 */
    char pad344[0x4f0 - 0x344];
    Sub_8250E460 sub;        /* 0x4f0 */
    char pad53c[0x5d8 - 0x53c];
    void *ptr;               /* 0x5d8 */
    void *rep;               /* 0x5dc */
} Obj_8250E460;

extern void fn_822315A0(void *rep);
extern void fn_827F38B0(int *p);
extern void fn_827F38B8(Sub_8250E460 *s);
extern void fn_8255F1E0(int *p);
extern void fn_827F1080(Obj_8250E460 *o);
extern void fn_827F0548(Obj_8250E460 *o);

static __forceinline void Sub_Dtor(Sub_8250E460 *s)
{
    fn_827F38B0(&s->m48);
    fn_827F38B8(s);
}

Obj_8250E460 *fn_8250E460(Obj_8250E460 *o, unsigned int flags)
{
    if (o->rep != 0) {
        fn_822315A0(o->rep);
    }
    Sub_Dtor(&o->sub);
    fn_8255F1E0(&o->list340);
    fn_8255F1E0(&o->list190);
    fn_827F1080(o);
    if (flags & 1) {
        fn_827F0548(o);
    }
    return o;
}
