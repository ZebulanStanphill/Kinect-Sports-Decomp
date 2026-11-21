typedef struct Slot_82ED4830 {
    char pad0[0x10];
    void *owner; /* 0x10 */
    int pending; /* 0x14 */
    char pad18[0x4014];
} Slot_82ED4830;

typedef struct Pool_82ED4830 {
    char pad0[0xc];
    unsigned int width;  /* 0x0c */
    unsigned int height; /* 0x10 */
    int pad14;
    Slot_82ED4830 *slots; /* 0x18 */
    unsigned int count;   /* 0x1c */
    int pad20[3];
    unsigned int current; /* 0x2c */
    int pad30;
    int pendingCount; /* 0x34 */
} Pool_82ED4830;

extern void fn_82ED24C0(Slot_82ED4830 *slot, unsigned char *base, unsigned char *second,
                        unsigned char *third);
extern void fn_82ED3E48(Slot_82ED4830 *slot, unsigned char *base, unsigned char *second,
                        unsigned char *third);

Slot_82ED4830 *fn_82ED4830(Pool_82ED4830 *pool, unsigned char *base, unsigned char *second,
                           unsigned char *third, void *owner)
{
    unsigned int i;
    unsigned int size;

    if (pool->slots == 0)
        return 0;
    if (pool->pendingCount > 0) {
        for (i = 0; i < pool->count; i++) {
            if (pool->slots[i].pending > 0) {
                pool->current = i;
                pool->pendingCount--;
                pool->slots[i].pending = 0;
                break;
            }
        }
        if (i == pool->count)
            return 0;
    } else {
        pool->current = (pool->current + 1) % pool->count;
    }
    fn_82ED24C0(&pool->slots[pool->current], base, second, third);
    if (owner == 0)
        owner = base;
    pool->slots[pool->current].owner = owner;
    if (pool->count >= 1) {
        if (second == 0 || third == 0) {
            size = pool->height * pool->width;
            second = base + size;
            third = second + size / 4;
        }
        fn_82ED3E48(&pool->slots[pool->current], base, second, third);
    }
    return &pool->slots[pool->current];
}
