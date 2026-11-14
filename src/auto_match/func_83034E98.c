typedef struct Obj_83034E98 {
    unsigned int pad[7];
    unsigned int mask;   /* 0x1c */
} Obj_83034E98;

extern int fn_83018DD8(unsigned int ctx, Obj_83034E98 *obj, int a, int b, int c,
                       int d, int e, int f, int g, int h);
extern unsigned int lbl_832642FC;

void fn_83034E98(Obj_83034E98 *obj, int a, int b, int c, int d, int e, int f)
{
    obj->mask = (1 << b) | obj->mask;
    fn_83018DD8(lbl_832642FC, obj, a, b, c, d, e, f, 0, 3);
}
