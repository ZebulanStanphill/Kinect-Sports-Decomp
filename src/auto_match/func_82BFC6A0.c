long _InterlockedIncrement(long volatile *target);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_82BFC6A0 {
    struct Node_82BFC6A0 *next; /* 0x00 */
    unsigned int value;         /* 0x04 */
} Node_82BFC6A0;

typedef union Head_82BFC6A0 {
    struct {
        Node_82BFC6A0 *first;
        unsigned int sequence;
    } parts;

    __int64 whole;
} Head_82BFC6A0;

typedef struct Queue_82BFC6A0 {
    Head_82BFC6A0 free; /* 0x00 */
    Head_82BFC6A0 used; /* 0x08 */
    long waiting;       /* 0x10 */
    void *semaphore;    /* 0x14 */
} Queue_82BFC6A0;

extern int fn_82A2A618(void *semaphore, long releaseCount, long *previousCount); /* ReleaseSemaphore */

static __forceinline Node_82BFC6A0 *Pop(Head_82BFC6A0 *head)
{
    Head_82BFC6A0 old;
    Head_82BFC6A0 next;
    Node_82BFC6A0 *node;
    Node_82BFC6A0 *following;
    do {
        old.whole = head->whole;
        node = old.parts.first;
        if (node == 0)
            return 0;
        following = node->next;
        __lwsync();
        next.whole = ((unsigned __int64)(unsigned int)following << 32) + ((old.whole + 1) & 0x7fffffff);
    } while (_InterlockedCompareExchange64(&head->whole, next.whole, old.whole) != old.whole);
    return node;
}

static __forceinline void Push(Head_82BFC6A0 *head, Node_82BFC6A0 *node)
{
    Head_82BFC6A0 old;
    do {
        old.whole = head->whole;
        node->next = old.parts.first;
        __lwsync();
    } while (_InterlockedCompareExchange64(
                 &head->whole, ((__int64)(unsigned int)node << 32) + ((old.whole + 1) & 0x7fffffff),
                 old.whole) != old.whole);
}

/* Takes the value of the oldest used entry, returns the entry to the free list and wakes a waiter. */
unsigned int fn_82BFC6A0(Queue_82BFC6A0 *self)
{
    Node_82BFC6A0 *node;
    unsigned int value;

    node = Pop(&self->used);
    if (node == 0) {
        return 0;
    }
    value = node->value;
    Push(&self->free, node);
    if (self->semaphore != 0) {
        if (_InterlockedIncrement(&self->waiting) <= 0) {
            fn_82A2A618(self->semaphore, 1, 0);
        }
    }
    return value;
}
