typedef struct Pool_82FF61E8 {
    int words[8];
} Pool_82FF61E8;

typedef struct Self_82FF61E8 {
    char pad0[0x10];
    Pool_82FF61E8 nodes;
    Pool_82FF61E8 extra;
    char pad50[0x6c - 0x50];
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
} Self_82FF61E8;

extern void *lbl_831BC768;
extern int fn_82FF5DA8(Pool_82FF61E8 *pool, unsigned int count, unsigned int a, void *heap);
extern int fn_82FF5E70(Pool_82FF61E8 *pool, unsigned int count, unsigned int a, void *heap);

void fn_82FF61E8(Self_82FF61E8 *self)
{
    if (fn_82FF5DA8(&self->nodes, 8, 0xffffffff, lbl_831BC768) == 1)
        fn_82FF5E70(&self->extra, 8, 0xffffffff, lbl_831BC768);
    self->f6c = 0;
    self->f70 = 0;
    self->f74 = 0;
    self->f78 = 0;
    self->f7c = 0;
    self->f80 = 0;
}
