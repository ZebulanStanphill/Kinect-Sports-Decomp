typedef struct Obj_82E8EC58 {
    char pad0[0x2d0];
    int m2d0;
    unsigned int count;
    char pad2d8[0x1a4c - 0x2d8];
    int m1a4c;
    char pad1a50[0x1a58 - 0x1a50];
    int m1a58;
    unsigned int *table;
    int m1a60;
    int m1a64;
    int m1a68;
    int m1a6c;
} Obj_82E8EC58;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void *memset(void *dst, int c, unsigned int n);

void fn_82E8EC58(Obj_82E8EC58 *self)
{
    unsigned int size;
    int v;

    self->table = (unsigned int *)fn_8265C940(self->count <= 0x3fffffff ? self->count * 4 : 0xffffffff, 0x248c8000);
    memset(self->table, 0, self->count * 4);
    self->m1a58 = 0;
    self->m1a60 = 0;
    self->m1a64 = 0;
    self->m1a6c = 1;
    self->m1a68 = 1;
    v = self->m2d0 * 0x600;
    if (v < 0x1800) {
        v = 0x1800;
    }
    self->m1a4c = v;
}
