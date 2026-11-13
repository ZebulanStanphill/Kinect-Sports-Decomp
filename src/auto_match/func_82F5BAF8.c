typedef struct Obj_82F5BAF8 {
    int count;                  /* 0x000 */
    unsigned char a[0x50];      /* 0x004 */
    unsigned char b[0x50];      /* 0x054 */
    char padA4[0xc];            /* 0x0a4 */
    unsigned char c[0x140];     /* 0x0b0 */
    char pad1F0[0xe0];          /* 0x1f0 */
    int f2d0;                   /* 0x2d0 */
    char pad2D4[0x3c];          /* 0x2d4 */
    int f310;                   /* 0x310 */
    int f314;                   /* 0x314 */
    char pad318[0x18];          /* 0x318 */
    unsigned char d[0xc0];      /* 0x330 */
} Obj_82F5BAF8;

extern void *memset(void *dst, int c, unsigned int n);

void fn_82F5BAF8(Obj_82F5BAF8 *self)
{
    self->count = 0;
    memset(self->a, 0, sizeof(self->a));
    memset(self->b, 0, sizeof(self->b));
    memset(self->c, 0, sizeof(self->c));
    memset(self->d, 0, sizeof(self->d));
    self->f2d0 = 0;
    self->f310 = 1;
    self->f314 = 1;
}
