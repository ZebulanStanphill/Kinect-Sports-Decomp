typedef struct { int x, y, z; } V3_829F48D8;
typedef struct { char pad0[0x4c]; V3_829F48D8 a; int bx; int by; char pad1[0x30]; int flag; } O_829F48D8;
extern void fn_829F3E78();
extern void fn_829F4290(void *, void *, void *, O_829F48D8 *);
extern void fn_829F3428(void *, void *, void *, O_829F48D8 *, void *);

void fn_829F48D8(void *a, void *b, void *c, O_829F48D8 *o, void *e)
{
    V3_829F48D8 v;
    int dx, dz;
    fn_829F3E78();
    if (o->flag == 0) {
        v = o->a;
        dz = v.y - o->by;
        dx = v.x - o->bx;
        if (dx * dx + dz * dz <= 0xe || (fn_829F4290(a, b, c, o), o->flag == 0)) {
            fn_829F3428(a, b, c, o, e);
        }
    }
}
