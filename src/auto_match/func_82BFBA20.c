#define __lwsync() __emit(0x7C2004AC)

__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Header_82BFBA20 {
    unsigned int next; /* 0x0 */
    unsigned int base; /* 0x4 */
} Header_82BFBA20;

typedef union Head_82BFBA20 {
    __int64 value;

    struct {
        unsigned int first;
        unsigned int sequence;
    } parts;
} Head_82BFBA20;

extern unsigned int fn_82BFB960(unsigned int *pool, unsigned int *outBase, int size, void *context);

/* Allocates a block with an 8-byte trailer and pushes the trailer on a lock-free list. */
unsigned int fn_82BFBA20(unsigned int *pool, __int64 volatile *head, int size, void *context)
{
    unsigned int block;
    unsigned int base;
    Header_82BFBA20 *header;
    Head_82BFBA20 old;
    __int64 previous;

    if (size <= 0 || size + 8 == 0 || size + 8 < size) {
        return 0;
    }
    block = fn_82BFB960(pool, &base, size + 8, context);
    if (block == 0) {
        return 0;
    }
    header = (Header_82BFBA20 *)(block + size);
    header->base = base;
    do {
        old.value = *head;
        header->next = old.parts.first;
        __lwsync();
        previous = _InterlockedCompareExchange64(
            head, ((__int64)(unsigned int)header << 32) + ((old.value + 1) & 0x7fffffff), old.value);
    } while (previous != old.value);
    return block;
}
