extern unsigned int lbl_821C7F7C;
extern int fn_8251E370();
extern int fn_8251F720();
extern int fn_82520158();
extern void *fn_8265C9E0();
typedef struct {
    int f0; int *f4; char pad0[0x24 - 8]; int f24, f28, f2c, f30, f34, f38; char pad1[0x44 - 0x3c]; int f44; char pad2[0x50 - 0x48];
    char a[8][0x14]; char pad3[0xf4 - 0xf0]; int ff4;
} Obj;
void fn_8253C910(Obj *o)
{
    char buf[8];
    int *p;
    int i;
    fn_8251E370(o->a[0], 4, 0);
    fn_8251E370(o->a[1], 4, 0);
    fn_8251E370(o->a[2], 4, 0);
    fn_8251E370(o->a[3], 4, 0);
    fn_8251E370(o->a[4], 4, 0);
    fn_8251E370(o->a[5], 4, 0);
    fn_8251E370(o->a[6], 4, 0);
    fn_8251E370(o->a[7], 4, 0);
    if (fn_82520158("friction_table", buf, 0) != 0)
        o->f24 = fn_8251F720(buf, 0);
    if (fn_82520158("wheelmarks_table", buf, 0) != 0)
        o->f28 = fn_8251F720(buf, 0);
    if (fn_82520158("surface_sfx", buf, 0) != 0)
        o->f2c = fn_8251F720(buf, 0);
    if (fn_82520158("surface_fx", buf, 0) != 0)
        o->f30 = fn_8251F720(buf, 0);
    if (fn_82520158("physicsfx_settings", buf, 0) != 0)
        o->f38 = fn_8251F720(buf, 0);
    o->f44 = 0;
    o->f0 = 0;

    p = fn_8265C9E0(4);
    o->f4 = p ? (*p = (int)&lbl_821C7F7C, p) : 0;
    o->ff4 = 0;

}
