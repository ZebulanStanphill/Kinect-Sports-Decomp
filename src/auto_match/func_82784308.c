typedef struct Sub_82784308 { int first; char pad[0xc]; } Sub_82784308;
typedef struct Obj_82784308 {
    char pad0[8];
    Sub_82784308 a;      /* 0x08 */
    Sub_82784308 b;      /* 0x18 */
    int w28;             /* 0x28 */
    int w2c;             /* 0x2c */
    int w30;             /* 0x30 */
    float f34;
    float f38;
    float f3c;
    float f40;
} Obj_82784308;
extern void fn_827B5EA8(Sub_82784308 *s);

void fn_82784308(Obj_82784308 *p)
{
    p->f34 = 1.0f;
    p->a.first = 0;
    p->f38 = 1.0f;
    p->b.first = 0;
    p->f3c = 0.0f;
    p->w28 = 0;
    p->f40 = 0.0f;
    p->w2c = 0x7fffffff;
    p->w30 = 0x80000001;
    fn_827B5EA8(&p->a);
    fn_827B5EA8(&p->b);
}
