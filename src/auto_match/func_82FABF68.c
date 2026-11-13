typedef struct Obj_82FABF68 {
    char pad0[0xc];
    struct Obj_82FABF68 *parent;
    char pad10[0x28];
    int f38;
} Obj_82FABF68;

extern void fn_82FA8F10(Obj_82FABF68 *o);
extern int fn_82FA7188(unsigned int ctx, Obj_82FABF68 *o, int c, int b);
extern unsigned int lbl_83264230;

int fn_82FABF68(Obj_82FABF68 *o, int b, int c)
{
    fn_82FA8F10(o);
    if (o->parent != 0) {
        o->f38 = o->parent->f38;
        return 1;
    }
    return fn_82FA7188(lbl_83264230, o, c, b);
}
