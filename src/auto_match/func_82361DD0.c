/* make_shared control block: _Ref_count_obj ctor (uses = weaks = 1) constructing the
   object in place (base ctor fn_8227AD00, own vtable, cleared tables). */
extern void fn_8227AD00(void *self, int a2, int a3, int a4, int a1, int zero, int one, int a5, int a6,
                        int zero2, int a7, int a8);
void *XMemSet(void *dst, int c, unsigned int n);
extern char lbl_821A8D8C[];
extern char lbl_821AC05C[];

typedef struct Obj_82361DD0 {
    void *vt;               /* 0x0000 */
    char pad4[0xa44];
    int fa48;               /* 0x0a48 */
    float fa4c;             /* 0x0a4c */
    char pada50[0x34];
    int fa84;               /* 0x0a84 */
    char pada88[0x700];
    char table[0xe70];      /* 0x1188 */
    int f1ff8;              /* 0x1ff8 */
} Obj_82361DD0;

typedef struct RefCount_82361DD0 {
    void *vt;               /* 0x00 */
    int uses;               /* 0x04 */
    int weaks;              /* 0x08 */
    int pad0c;
    Obj_82361DD0 obj;       /* 0x10 */
} RefCount_82361DD0;

RefCount_82361DD0 *fn_82361DD0(RefCount_82361DD0 *rc, int a1, int a2, const int *a3, const int *a4,
                               const int *a5, const int *a6, const int *a7, const int *a8)
{
    Obj_82361DD0 *o;

    rc->uses = 1;
    rc->vt = lbl_821A8D8C;
    rc->weaks = 1;
    o = &rc->obj;
    if (o != 0) {
        fn_8227AD00(o, a2, *a3, *a4, a1, 0, 1, *a5, *a6, 0, *a7, *a8);
        o->f1ff8 = 1;
        o->vt = lbl_821AC05C;
        XMemSet(o->table, 0, 0xe70);
        o->fa48 = 0;
        o->fa84 = 0xf;
        o->fa4c = 0.0f;
    }
    return rc;
}
