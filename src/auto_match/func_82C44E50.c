/* The original reloads offset right after storing it and reads size before base in source order:
   the bump-pointer fields are volatile. */
typedef struct Arena_82C44E50 {
    volatile unsigned int base;   /* 0x0 */
    volatile unsigned int offset; /* 0x4 */
    volatile unsigned int size;   /* 0x8 */
    void *tracker;                /* 0xc */
    void *lock;                   /* 0x10 */
} Arena_82C44E50;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_82A1F198(unsigned int size, unsigned int address, unsigned int alignment,
                                unsigned int protect);
extern int fn_82C561E8(void *tracker, unsigned int address, int arg3, int arg4);

unsigned int fn_82C44E50(Arena_82C44E50 *arena, unsigned int size)
{
    unsigned int address;
    unsigned int result;
    unsigned int limit;

    if (arena == 0 || arena->base == 0) {
        result = fn_82A1F198(size, 0xffffffff, 0, 0x20000004);
        fn_82C561E8(arena->tracker, result, 0, 0);
        return result;
    }
    if (arena->lock != 0) {
        RtlEnterCriticalSection(arena->lock);
    }
    limit = arena->size - 1 + arena->base;
    address = arena->offset;
    arena->offset += size;
    if (arena->offset > limit) {
        arena->offset -= size;
        if (arena->lock != 0) {
            RtlLeaveCriticalSection(arena->lock);
        }
        result = fn_82A1F198(size, 0xffffffff, 0, 0x20000004);
        fn_82C561E8(arena->tracker, result, 0, 0);
        return result;
    }
    arena->offset = (arena->offset + 0x1000) & ~0xfff;
    if (arena->lock != 0) {
        RtlLeaveCriticalSection(arena->lock);
    }
    fn_82C561E8(arena->tracker, address, 0, 0);
    return address;
}
