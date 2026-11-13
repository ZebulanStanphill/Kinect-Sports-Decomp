typedef struct Obj_827FE110 {
    char pad[0x98];
    int f98;
} Obj_827FE110;

extern void fn_827FD988(int a, int b, int c, float f, int d);
extern void fn_827FA968(int a, int b, int c, float f);

void fn_827FE110(Obj_827FE110 *a, int b, Obj_827FE110 *c, int d, float f, Obj_827FE110 *e, int g)
{
    fn_827FD988(a->f98, c->f98, e->f98, f, 0);
    fn_827FA968(b, d, g, f);
}
