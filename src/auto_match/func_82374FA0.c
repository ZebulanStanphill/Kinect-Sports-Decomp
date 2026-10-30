typedef struct { int pad0[10]; int cnt; int pad2c[0x88 / 4 - 11]; } Stat_82374FA0;
typedef struct { Stat_82374FA0 e[8]; } Tab_82374FA0;
typedef struct {
    char pad0[0xa4];
    int h;
    char pada8[0x204 - 0xa8];
    int f204;
    char pad208[0x7dc - 0x208];
    int *f7dc;
    char pad7e0[0xa14 - 0x7e0];
    Tab_82374FA0 tab;
} Ctx_82374FA0;
typedef struct { int pad0[9]; int f24; int f28; int f2c; } Res_82374FA0;
typedef struct { int pad[1]; void *f4; } Ref_82374FA0;
extern int fn_822315A0();
extern int fn_8236FB68();
extern int fn_82508078();

void fn_82374FA0(Ctx_82374FA0 *c, Ref_82374FA0 *r, Res_82374FA0 *a, Res_82374FA0 *b, int k)
{
    int v;

    if (a->f2c == b->f2c && k == 4 && (v = fn_8236FB68(0xf)) != 0)
        fn_82508078(c->h, v, 0);
    if (a->f24 != 0)
        c->f7dc[7] = 1;
    if (c->f204 == 0) {
        Tab_82374FA0 *t = &c->tab;
        int i2 = a->f2c;
        int i1 = a->f28;
        t->e[i2 * 2 + i1].cnt++;
    }
    if (r->f4 != 0)
        fn_822315A0(r->f4);
}
