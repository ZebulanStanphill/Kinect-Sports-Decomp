typedef struct Obj_82F935C0 {
    unsigned int a;          /* 0x00 */
    unsigned int b;          /* 0x04 */
    unsigned int c;          /* 0x08 */
    unsigned int d;          /* 0x0c */
    unsigned char flag;      /* 0x10 */
    unsigned char done;      /* 0x11 */
} Obj_82F935C0;

Obj_82F935C0 *fn_82F935C0(Obj_82F935C0 *self, unsigned int a, unsigned int b, unsigned int c,
                          const unsigned int *d, unsigned char flag)
{
    self->a = a;
    self->b = b;
    self->c = c;
    self->d = *d;
    self->flag = flag;
    self->done = 0;
    return self;
}
