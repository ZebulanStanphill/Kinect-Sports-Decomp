long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);
long _InterlockedExchangeAdd(long volatile *addend, long value);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_82BFBBF0 {
    struct Node_82BFBBF0 *next; /* 0x00 */
    unsigned int value;         /* 0x04 */
} Node_82BFBBF0;

typedef union Head_82BFBBF0 {
    struct {
        Node_82BFBBF0 *first;
        unsigned int sequence;
    } parts;

    __int64 whole;
} Head_82BFBBF0;

typedef struct Queue_82BFBBF0 {
    Head_82BFBBF0 free; /* 0x00 */
    Head_82BFBBF0 used; /* 0x08 */
    long waiting;       /* 0x10 */
    void *semaphore;    /* 0x14 */
    char pad18[0x8];
    __int64 blocks;     /* 0x20 */
    long batchSize;     /* 0x28 */
    long remaining;     /* 0x2c */
    long count;         /* 0x30 */
    char context[0xc];  /* 0x34 */
    unsigned int *pool; /* 0x40 */
} Queue_82BFBBF0;

extern Node_82BFBBF0 *fn_82BFBA20(unsigned int *pool, __int64 volatile *head, int size, void *context);
extern int fn_82A2A618(void *semaphore, long releaseCount, long *previousCount); /* ReleaseSemaphore */

static __forceinline void Push(Head_82BFBBF0 *head, Node_82BFBBF0 *node)
{
    Head_82BFBBF0 old;
    do {
        old.whole = head->whole;
        node->next = old.parts.first;
        __lwsync();
    } while (_InterlockedCompareExchange64(
                 &head->whole, ((__int64)(unsigned int)node << 32) + ((old.whole + 1) & 0x7fffffff),
                 old.whole) != old.whole);
}

/* Allocates a batch of nodes, keeps the first and pushes the others on the free list. */
Node_82BFBBF0 *fn_82BFBBF0(Queue_82BFBBF0 *self)
{
    long batch;
    long left;
    long extra;
    long waiting;
    long release;
    Node_82BFBBF0 *node;
    long volatile *remaining = &self->remaining;

    batch = self->batchSize;
    do {
        left = *remaining;
        if (left < 0) {
            break;
        }
        if (left == 0) {
            return 0;
        }
        if (batch > left) {
            batch = left;
        }
        __lwsync();
    } while (_InterlockedCompareExchange(remaining, left - batch, left) != left);
    node = fn_82BFBA20(self->pool, &self->blocks, batch * 8, self->context);
    if (node == 0) {
        *remaining = 0;
        return 0;
    }
    _InterlockedExchangeAdd(&self->count, batch);
    extra = batch - 1;
    node = (Node_82BFBBF0 *)((char *)node + (batch * 8) - 8);
    left = extra;
    if (extra != 0) {
        do {
            Push(&self->free, node);
            node--;
            left--;
        } while (left);
    }
    if (self->semaphore != 0) {
        waiting = _InterlockedExchangeAdd(&self->waiting, batch);
        if (waiting < -1 && extra > 0) {
            release = ~waiting;
            if (release > extra) {
                release = batch - 1;
            }
            fn_82A2A618(self->semaphore, release, 0);
        }
    }
    return node;
}
