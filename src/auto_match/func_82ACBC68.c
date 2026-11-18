typedef struct BitData_82ACBC68 {
    unsigned int count; /* 0x0: number of words */
    unsigned int words[1];
} BitData_82ACBC68;

typedef struct BitSet_82ACBC68 {
    unsigned int bits; /* tagged: inline bits when bit 0 is set, else BitData pointer */
} BitSet_82ACBC68;

typedef struct Context_82ACBC68 {
    char pad0[0x318];
    void *source; /* 0x318 */
} Context_82ACBC68;

typedef struct Allocator_82ACBC68 {
    Context_82ACBC68 *ctx; /* 0x0 */
    BitSet_82ACBC68 set;   /* 0x4 */
} Allocator_82ACBC68;

extern int fn_82ACB228(Allocator_82ACBC68 *self, unsigned int start, unsigned int count, int step);
extern void fn_82ACBB48(BitSet_82ACBC68 *set, unsigned int size);
extern unsigned int fn_82ACA4F0(unsigned int mask, unsigned int key);
extern void fn_82ACAD38(BitSet_82ACBC68 *set, unsigned int first, unsigned int last, unsigned int mask);
__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);

static __forceinline unsigned int Capacity(BitSet_82ACBC68 *set)
{
    if ((~set->bits & 1) == 0)
        return 0x1f;
    return ((BitData_82ACBC68 *)set->bits)->count * 0x20 - 1;
}

static __forceinline void ReportFull(Allocator_82ACBC68 *self)
{
    if (self->ctx->source)
        fn_82AA66A8(self->ctx, 0xdbe);
    fn_82AA66A8(self->ctx, 0xded);
}

int fn_82ACBC68(Allocator_82ACBC68 *self, unsigned int key, unsigned char report)
{
    int slot;
    unsigned int first;
    unsigned int mask;

    slot = fn_82ACB228(self, 0, key, 4);
    if (slot == -1) {
        if (Capacity(&self->set) / 4 - 1 >= 0xff) {
            if (report)
                ReportFull(self);
            return -1;
        }
        fn_82ACBB48(&self->set, Capacity(&self->set) + 4);
        slot = fn_82ACB228(self, 0, key, 4);
        if (slot == -1) {
            if (report)
                ReportFull(self);
            return -1;
        }
    }
    first = ((unsigned int)slot >> 4) * 4;
    mask = fn_82ACA4F0(slot & 0xf, key);
    fn_82ACAD38(&self->set, first, first + 3, mask);
    return (slot & ~0xf) | (mask & 0xf);
}
