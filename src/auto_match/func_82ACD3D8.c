typedef struct Budget_82ACD3D8 {
    char pad0[0x10];
    unsigned int used; /* 0x10 */
} Budget_82ACD3D8;

typedef struct Scheduler_82ACD3D8 {
    char pad0[0x4];
    char ready[0x2c];     /* 0x4 */
    unsigned int context; /* 0x30 */
    char pad34[0x4];
    Budget_82ACD3D8 *budget; /* 0x38 */
    unsigned int current;    /* 0x3c */
    unsigned int limit;      /* 0x40 */
    char pad44[0x4];
    unsigned char failed; /* 0x48 */
    char pad49[0x1];
    unsigned char unlimited; /* 0x4a */
} Scheduler_82ACD3D8;

extern void fn_82AA66A8(unsigned int context, int code);
extern unsigned char fn_82AC8B10(void *list, unsigned int node);
extern void fn_82AC8CE8(void *list, unsigned int node);
extern unsigned int fn_82ACBE00(unsigned int context, unsigned int node, unsigned int block,
                                Budget_82ACD3D8 *budget);
extern unsigned int fn_82ACD310(Scheduler_82ACD3D8 *self, unsigned int block, unsigned int target);
extern void fn_82ACCBB8(unsigned int context, unsigned int node, unsigned int block, Budget_82ACD3D8 *budget,
                        unsigned int target);
extern void fn_82ACC5D8(Scheduler_82ACD3D8 *self, unsigned int node, int flag);
extern void fn_82ACB458(unsigned int context, unsigned int block, int flag);

int fn_82ACD3D8(Scheduler_82ACD3D8 *self)
{
    unsigned int node;
    unsigned int block;
    unsigned int flags;
    unsigned int link;

    if (self->failed != 0) {
        fn_82AA66A8(self->context, 0x12c0);
    }
    node = self->current;
    if (!fn_82AC8B10(self->ready, node)) {
        return 1;
    }
    block = *(unsigned int *)(node + 0x1c);
    flags = fn_82ACBE00(self->context, node, block, self->budget);
    fn_82AC8CE8(self->ready, node);
    if (((flags & 2) != 0 || (self->unlimited == 0 && self->budget->used >= self->limit)) &&
        fn_82ACD310(self, block, node) != node) {
        fn_82ACC5D8(self, node, 0);
        fn_82ACB458(self->context, block, 1);
        self->failed = 1;
        return 2;
    }
    fn_82ACCBB8(self->context, node, block, self->budget, node);
    if (self->unlimited == 0 && self->budget->used >= self->limit) {
        fn_82ACC5D8(self, node, 0);
        fn_82ACB458(self->context, block, 1);
        self->failed = 1;
        return 2;
    }
    link = *(unsigned int *)((node & ~1u) + 0x24);
    if (link & 1) {
        self->current = 0;
    } else {
        self->current = (link & ~1u) - 0x28;
    }
    return 0;
}
