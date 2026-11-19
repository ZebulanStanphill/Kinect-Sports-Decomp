long _InterlockedIncrement(long volatile *target);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_82BFDD90 {
    struct Node_82BFDD90 *volatile next; /* 0x00 */
    int pad4;

    union {
        unsigned __int64 value;         /* 0x08 */
        struct Node_82BFDD90 *freeNext; /* 0x08 */
    } u;
} Node_82BFDD90;

typedef union Head_82BFDD90 {
    struct {
        Node_82BFDD90 *first;
        unsigned int sequence;
    } parts;

    __int64 whole;
} Head_82BFDD90;

typedef struct Queue_82BFDD90 {
    Head_82BFDD90 free;    /* 0x00 */
    volatile __int64 tail; /* 0x08 */
    volatile __int64 head; /* 0x10 */
    long waiting;          /* 0x18 */
    void *semaphore;       /* 0x1c */
} Queue_82BFDD90;

extern int fn_82BFEAD8(void *semaphore, long releaseCount);

static __forceinline Node_82BFDD90 *First(__int64 whole)
{
    Head_82BFDD90 head;

    head.whole = whole;
    return head.parts.first;
}

static __forceinline void Push(Head_82BFDD90 *head, Node_82BFDD90 *node)
{
    Head_82BFDD90 old;
    do {
        old.whole = head->whole;
        node->u.freeNext = old.parts.first;
        __lwsync();
    } while (_InterlockedCompareExchange64(
                 &head->whole, ((__int64)(unsigned int)node << 32) + ((old.whole + 1) & 0x7fffffff),
                 old.whole) != old.whole);
}

/* Lock-free queue dequeue: the head, tail and link words are polled while other threads swap them. */
int fn_82BFDD90(Queue_82BFDD90 *self, unsigned __int64 *out)
{
    __int64 head;
    __int64 tail;
    Node_82BFDD90 *first;
    Node_82BFDD90 *next;
    unsigned __int64 value;

    for (;;) {
        head = self->head;
        tail = self->tail;
        first = First(head);
        next = first->next;
        if (head != self->head) {
            continue;
        }
        if (first == First(tail)) {
            if (next == 0) {
                return 0x102;
            }
            __lwsync();
            _InterlockedCompareExchange64(
                &self->tail, ((__int64)(unsigned int)next << 32) + ((tail + 1) & 0x7fffffff), tail);
        } else if (next != 0) {
            value = next->u.value;
            __lwsync();
            if (_InterlockedCompareExchange64(&self->head,
                                              ((__int64)(unsigned int)next << 32) + ((head + 1) & 0x7fffffff),
                                              head) == head) {
                break;
            }
        }
    }
    *out = value;
    Push(&self->free, first);
    if (self->semaphore != 0) {
        if (_InterlockedIncrement(&self->waiting) <= 0) {
            fn_82BFEAD8(self->semaphore, 1);
        }
    }
    return 0;
}
