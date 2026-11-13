/* 0x7c-byte present-parameters block (layout looks like D3DPRESENT_PARAMETERS; field names unverified) */
typedef struct {
    unsigned int width;        /* 0x00 */
    unsigned int height;       /* 0x04 */
    unsigned int format;       /* 0x08 */
    unsigned int f0c;        /* 0x0c */
    unsigned int f10;        /* 0x10 */
    unsigned int f14;     /* 0x14 */
    unsigned int f18;             /* 0x18 */
    void *f1c;                 /* 0x1c */
    int f20;                        /* 0x20 */
    int f24;          /* 0x24 */
    unsigned int depthFormat; /* 0x28 */
    unsigned int f2c;                  /* 0x2c */
    unsigned int f30;            /* 0x30 */
    unsigned int f34;   /* 0x34 */
    int f38;
    int f3c;
    char rest[0x7c - 0x40];
} PresentParams_82547198;
typedef struct {
    char pad[0x2c];
    int flag;
} Obj_82547198;
extern void fn_82A1EFC0(void *dst, int c, unsigned int n);

void fn_82547198(Obj_82547198 *self, PresentParams_82547198 *pp)
{
    fn_82A1EFC0(pp, 0, sizeof(*pp));
    pp->width = 0x500;
    pp->height = 0x2d0;
    pp->f3c = 1;
    if (self->flag != 0) {
        pp->f2c = 0;
    } else {
        pp->f2c = 1;
    }
    pp->f0c = 0;
    pp->f24 = 0;
    pp->f18 = 1;
    pp->f34 = 1;
    pp->format = 0x28280106;
    pp->depthFormat = 0x1a220197;
    pp->f10 = 0;
}
