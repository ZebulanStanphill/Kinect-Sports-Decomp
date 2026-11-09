typedef struct Sub_82D96EB0 {
    short a;        /* 0x94 */
    char b;         /* 0x96 */
    char c[1];      /* 0x97 */
} Sub_82D96EB0;

typedef struct Obj_82D96EB0 {
    short f0;               /* 0x00 */
    char pad02[0x8e];       /* 0x02 */
    short f90;              /* 0x90 */
    short pad92;            /* 0x92 */
    Sub_82D96EB0 s;         /* 0x94 */
    float f98;              /* 0x98 */
} Obj_82D96EB0;

extern void fn_82CE5458(void *dst, const void *src);
extern float lbl_82134508;

static __forceinline void Sub_init_82D96EB0(Sub_82D96EB0 *s, float v)
{
    s->a = 5;
    s->b = 0;
    fn_82CE5458((char *)s + 3, &v);
}

Obj_82D96EB0 *fn_82D96EB0(Obj_82D96EB0 *param_1)
{
    param_1->f0 = 2;
    param_1->f90 = 0xc;
    Sub_init_82D96EB0(&param_1->s, 1.0f);
    param_1->f98 = lbl_82134508;
    return param_1;
}
