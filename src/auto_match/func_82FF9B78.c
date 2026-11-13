typedef struct Base_82FF9B78 {
    const void *vt;        /* 0x00 */
    int pad4[2];
    int a;                 /* 0x0c */
    int b;                 /* 0x10 */
    int c;                 /* 0x14 */
    int d;                 /* 0x18 */
    unsigned char e;       /* 0x1c */
    int f[8];              /* 0x20 */
} Base_82FF9B78;

typedef struct Obj_82FF9B78 {
    Base_82FF9B78 base;
    int count;             /* 0x40 */
    int end;               /* 0x44 */
    unsigned char hasData : 1; /* 0x48 */
    unsigned char mode : 2;
    unsigned char rest : 5;
    int size;              /* 0x4c */
} Obj_82FF9B78;

extern const char lbl_8217BCF4[];

static __forceinline void Base_init(Base_82FF9B78 *b, int a, int d)
{
    b->d = d;
    b->a = a;
    b->b = 0;
    b->vt = lbl_8217BCF4;
    b->c = 0;
    b->e = 0;
    {
        int *p = b->f;
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p[4] = 0;
        p[5] = 0;
        p[6] = 0;
        p[7] = 0;
    }
}

void fn_82FF9B78(Obj_82FF9B78 *self, int a, int d, int count, int start, int size)
{
    Base_init(&self->base, a, d);
    self->hasData = count != 0;
    self->count = count;
    self->end = start + size;
    self->size = size;
    self->mode = 0;
}
