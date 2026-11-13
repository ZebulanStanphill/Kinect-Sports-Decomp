typedef struct Desc_82549AD8 {
    int f0, f4, f8, fc, f10, f14;
    void *f18, *f1c, *f20;
    char pad24[0xc];
    int f30, f34;
} Desc_82549AD8;

typedef struct Obj_82549AD8 {
    void *vt;
    char pad4[0xd0 - 4];
    char table[0x4c];       /* 0xd0 */
    char pad11c[0x1d4 - 0x11c];
    int f1d4;
    int f1d8;
    int f1dc;
    int f1e0;
    int f1e4;
} Obj_82549AD8;

extern void *memset(void *, int, unsigned int);
extern Obj_82549AD8 *fn_8252DAB8(Obj_82549AD8 *self);
extern int fn_8251F720(void *src, int a);
extern void fn_82549808(void *src, int a, Desc_82549AD8 *desc);
extern void fn_825A2688(Desc_82549AD8 *desc);
extern void fn_8254A0B8(Obj_82549AD8 *self, int a, void *src, Desc_82549AD8 *desc, int b, int c, int d);
extern char lbl_821C4C08[];

Obj_82549AD8 *fn_82549AD8(Obj_82549AD8 *self, int a, void *src)
{
    Desc_82549AD8 desc;
    char *table = fn_8252DAB8(self)->table;

    self->vt = lbl_821C4C08;
    memset(table, 0, 0x4c);
    fn_8251F720(src, 0);
    self->f1d4 = 0;
    desc.f0 = 0;
    desc.f4 = 0;
    desc.f8 = 0;
    desc.fc = 0;
    desc.f10 = 0;
    desc.f14 = 0;
    desc.f18 = 0;
    desc.f1c = 0;
    desc.f20 = 0;
    *(int *)&desc.pad24[0] = 0;
    *(int *)&desc.pad24[4] = 0;
    *(int *)&desc.pad24[8] = 0;
    desc.f30 = 0;
    desc.f34 = 0;
    fn_82549808(src, 0, &desc);
    self->f1d8 = 0;
    self->f1dc = 0;
    self->f1e0 = 0;
    self->f1e4 = 0;
    fn_825A2688(&desc);
    fn_8254A0B8(self, a, src, &desc, 1, 0, 0);
    return self;
}
