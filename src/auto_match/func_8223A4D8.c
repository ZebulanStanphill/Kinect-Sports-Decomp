typedef unsigned char undefined1;
typedef unsigned int undefined4;

typedef struct Pair_8223A4D8 {
    int a;
    int b;
} Pair_8223A4D8;

typedef struct Obj_8223A4D8 {
    void *vtbl;              /* 0x00 */
    int f4;                  /* 0x04 */
    Pair_8223A4D8 p8;        /* 0x08 */
    int f10[7];              /* 0x10 */
    unsigned char f2c;       /* 0x2c */
    unsigned char pad2d[3];
    int f30;                 /* 0x30 */
} Obj_8223A4D8;

extern int fn_8223B688(int *dst, int *src);
extern int fn_82517978(Pair_8223A4D8 *dst, int a, int b, int c);
extern unsigned int lbl_8219688C;

Obj_8223A4D8 *fn_8223A4D8(Obj_8223A4D8 *dst, Obj_8223A4D8 *src)
{
    int *p4;
    Pair_8223A4D8 *p8;

    p4 = src != 0 ? &src->f4 : 0;
    dst->f4 = *p4;
    p8 = src != 0 ? &src->p8 : 0;
    dst->p8.a = 0;
    dst->p8.b = 0;
    fn_82517978(&dst->p8, p8->a, p8->b, 0);
    dst->vtbl = &lbl_8219688C;
    fn_8223B688(dst->f10, src->f10);
    dst->f2c = src->f2c;
    dst->f30 = src->f30;
    return dst;
}
