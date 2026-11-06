typedef struct Ent_827E73E8 { int v[10]; } Ent_827E73E8;
typedef struct Obj_827E73E8 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    Ent_827E73E8 *tab;
} Obj_827E73E8;
extern int fn_827D50F8(int a);
extern unsigned fn_827D9DC0(int a);
extern void fn_827D9DA0(int a, unsigned v);

int fn_827E73E8(Obj_827E73E8 *p)
{
    unsigned f;

    if (fn_827D50F8(p->f14) != 0)
        return 0x4c7;
    f = fn_827D9DC0(p->f8);
    if (p->tab[p->f4 + 3].v[0] == 0)
        return 0x4b0;
    if ((f & 2) == 0 && (f & 1) == 0)
        return 6;
    fn_827D9DA0(p->f8, f | 4);
    return 0x3e4;
}
