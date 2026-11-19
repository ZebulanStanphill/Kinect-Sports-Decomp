typedef struct Slot_82549660 {
    unsigned char pad0[0x8];
    void *block; /* 0x8 */
} Slot_82549660;

typedef struct Pool_82549660 {
    unsigned int count; /* 0x00 */
    unsigned char pad4[0xc - 0x4];
    void *memory; /* 0x0c */
    unsigned char pad10[0x1c - 0x10];
    Slot_82549660 *slots; /* 0x1c */
} Pool_82549660;

typedef struct PoolState_82549660 {
    Pool_82549660 *pool;            /* 0x00 */
    unsigned int base;              /* 0x04 */
    unsigned int count;             /* 0x08 */
    unsigned char lock[0x1c - 0xc]; /* 0x0c */
} PoolState_82549660;

extern PoolState_82549660 lbl_83296D40;
extern void fn_82549610(unsigned int *guard, void *lock);
extern void fn_8259C738(unsigned int guard);
extern unsigned int fn_82A1BB18(void);
extern void fn_82522ED8(void *block);
extern void fn_82A1F238(void *memory);
extern void fn_8265CA20(void *p);
extern void *fn_8265C9E0(unsigned int size);
extern int fn_82811460(unsigned int pages);
extern Pool_82549660 *fn_825B4898(void *self, int levels, unsigned int count, unsigned int flags);

void fn_82549660(unsigned int base, unsigned int count)
{
    PoolState_82549660 *state = &lbl_83296D40;
    Pool_82549660 *pool;
    unsigned int guard;
    unsigned int i;
    int levels;
    unsigned int size;
    unsigned int flags;
    void *memory;

    fn_82549610(&guard, state->lock);
    if (state->pool != 0) {
        pool = state->pool;
        for (i = 0; i < pool->count; i++) {
            Slot_82549660 *slots = pool->slots;
            fn_82522ED8(slots[i].block);
        }
        fn_82522ED8(pool->slots);
        fn_82A1F238(pool->memory);
        pool->memory = 0;
        fn_8265CA20(pool);
        state->pool = 0;
    }
    if (base != 0 && count != 0) {
        levels = fn_82811460(base >> 12) + 1;
        size = (0x1000 << (levels - 1)) * count;
        if ((size & 0xffffff) == 0)
            flags = 0x80000004;
        else if ((size & 0xffff) == 0)
            flags = 0x20000004;
        else
            flags = 4;
        memory = fn_8265C9E0(0x20);
        if (memory != 0)
            state->pool = fn_825B4898(memory, levels, count, flags);
        else
            state->pool = 0;
        state->base = base;
        state->count = count;
    }
    fn_82A1BB18();
    fn_8259C738(guard);
}
