typedef struct Obj_82FB3F88 {
    char pad0[0x2c];
    int f2c;
    char pad30[0x40 - 0x30];
    char sub40[0x18];
    unsigned char f58;
} Obj_82FB3F88;
extern int fn_82FABF68(Obj_82FB3F88 *p, int a, int b);
extern int fn_82FAD460(void *self, void **out);

int fn_82FB3F88(Obj_82FB3F88 *p, int a, int b, int c, void **out)
{
    if (fn_82FABF68(p, a, b) == 1 && fn_82FAD460(p->sub40, out) == 1) {
        p->f58 = 1;
        p->f2c = p->f2c + 1;
        return 1;
    }
    return 2;
}
