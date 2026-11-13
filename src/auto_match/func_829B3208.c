typedef struct { __int64 v[4]; } Desc_829B3208;

typedef struct Obj_829B3208 {
    void *vt;
    char pad4[0xc];
    Desc_829B3208 desc;
    unsigned int type;
    int a[2];
    int b[2];
    int c[2];
    int d;
    int f50;
    int f54;
    int f58;
    int f5c;
    __int64 f60;
    __int64 f68;
    int f70;
    int f74;
} Obj_829B3208;

extern void fn_82930378(Obj_829B3208 *self, int kind);
extern char lbl_82054188[];

Obj_829B3208 *fn_829B3208(Obj_829B3208 *self, Desc_829B3208 *desc, unsigned int type, int a, int b, int c, int d)
{
    int idx;
    fn_82930378(self, 0x1b);
    self->vt = lbl_82054188;
    self->desc = *desc;
    self->type = type;
    self->a[0] = 0;
    self->a[1] = 0;
    self->b[0] = 0;
    self->b[1] = 0;
    self->c[0] = 0;
    self->c[1] = 0;
    idx = 0;
    if (type == 3) idx = 1;
    self->a[idx] = a;
    self->b[idx] = b;
    self->c[idx] = c;
    self->d = d;
    self->f54 = 0;
    self->f58 = 0;
    self->f5c = 0;
    self->f74 = 0;
    self->f60 = 0;
    self->f68 = 0;
    self->f70 = 0;
    self->f50 = 0;
    return self;
}
