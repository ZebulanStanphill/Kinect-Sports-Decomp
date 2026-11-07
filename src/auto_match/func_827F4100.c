typedef struct Obj_827F4100 {
    char pad0[0x34];
    float a[8];   /* 0x34 */
    float b[8];   /* 0x54 */
} Obj_827F4100;

typedef struct Src_827F4100 {
    int pad0;
    int pad4;
    int handle;   /* 0x08 */
} Src_827F4100;

extern void fn_827F6F58(Obj_827F4100 *p, int v);
extern int fn_827F7210(int h);
extern int fn_827F6AB8(int h);
extern int fn_827FA1E8(int h);
extern void fn_827F6BA0(Obj_827F4100 *p, unsigned short v);
extern void fn_827F6AC0(Obj_827F4100 *p, int v);
extern void fn_827FA1F0(Obj_827F4100 *p, int v);
extern void fn_827F9AB0(Obj_827F4100 *p, int v);
extern float lbl_82002AE0;

void *memset(void *dst, int c, unsigned int n);

Obj_827F4100 *fn_827F4100(Obj_827F4100 *p, Src_827F4100 *s)
{
    unsigned short v0;
    int v1;
    int v2;
    float *b;
    float f;

    fn_827F6F58(p, 0);
    v0 = (unsigned short)fn_827F7210(s->handle);
    v1 = fn_827F6AB8(s->handle);
    v2 = fn_827FA1E8(s->handle);
    fn_827F6BA0(p, v0);
    fn_827F6AC0(p, v1);
    fn_827FA1F0(p, v2);
    fn_827F9AB0(p, 0xffff);
    b = p->b;
    memset(p->a, 0, 0x20);
    memset(b, 0, 0x20);
    f = lbl_82002AE0;
    b[3] = f;
    p->a[3] = f;
    return p;
}
