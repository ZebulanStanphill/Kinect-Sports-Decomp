typedef struct Obj_829A1F38 {
    char pad0[0x1fc];
    unsigned char x1fc[0x20];
    int x21c[4];
    int pad22c;
    void *buffer0;      /* 0x230 */
    void *buffer1;      /* 0x234 */
} Obj_829A1F38;

void *memset(void *dst, int c, unsigned int n);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_8295BBE0(Obj_829A1F38 *self, void *arg);

void fn_829A1F38(Obj_829A1F38 *self, void *arg)
{
    int *p;
    memset(self->x1fc, 0, 0x20);
    p = self->x21c;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    fn_8265C990(self->buffer0, 0x24810000);
    fn_8265C990(self->buffer1, 0x24810000);
    self->buffer0 = 0;
    self->buffer1 = 0;
    fn_8295BBE0(self, arg);
}
