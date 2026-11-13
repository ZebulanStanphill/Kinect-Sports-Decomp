typedef struct Obj_827FE170 {
    char pad[0x98];
    int f98;
} Obj_827FE170;

extern void fn_827FD998(int a, int b, int c, float f, int d);
extern void fn_827FAB20(int a, int b, int c, float f);

void fn_827FE170(Obj_827FE170 *a, int b, Obj_827FE170 *c, int d, float f, Obj_827FE170 *e, int g)
{
    fn_827FD998(a->f98, c->f98, e->f98, f, 0);
    fn_827FAB20(b, d, g, f);
}
