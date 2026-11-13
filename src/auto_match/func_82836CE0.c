typedef struct Params_82836CE0 {
    int width;               /* 0x00 */
    int height;              /* 0x04 */
    int f08;
    int f0c;
    int f10;
    int f14;
    unsigned char b18, b19, b1a, b1b;
    unsigned char b1c, b1d, b1e, b1f;
    int f20;
    int f24;
    unsigned int fmt28;      /* 0x28 */
    unsigned int fmt2c;      /* 0x2c */
    int f30, f34;
} Params_82836CE0;

extern void *memset(void *, int, unsigned int);

void fn_82836CE0(Params_82836CE0 *p)
{
    memset(p, 0, sizeof(*p));
    p->f14 = 0;
    p->b1a = 1;
    p->width = 0x280;
    p->height = 0x1e0;
    p->f0c = 1;
    p->b18 = 1;
    p->b1c = 0;
    p->f10 = 0;
    p->b1d = 0;
    p->f20 = 0;
    p->fmt28 = 0x18280186;
    p->fmt2c = 0x18280106;
}
