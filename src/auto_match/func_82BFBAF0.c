long _InterlockedExchangeAdd(long *, long);
__int64 _InterlockedCompareExchange64(__int64 *, __int64, __int64);
#define __lwsync() __emit(0x7C2004AC)
extern void *fn_82A2A360(void);
extern int fn_82A277E0(void *, int, unsigned int);
extern void fn_82A28E60(void *, int, unsigned int);

typedef struct Node_82BFBAF0 {
    struct Node_82BFBAF0 *next; /* 0x00 */
    unsigned int value;         /* 0x04 */
} Node_82BFBAF0;

typedef struct Handler_82BFBAF0 {
    int unknown00;
    void *context; /* 0x04 */
    int unknown08;
    void (*call)(void *, unsigned int); /* 0x0c */
} Handler_82BFBAF0;

typedef union Head_82BFBAF0 {
    struct {
        Node_82BFBAF0 *first;
        unsigned int sequence;
    } parts;

    __int64 whole;
} Head_82BFBAF0;

static __forceinline Node_82BFBAF0 *Pop(Head_82BFBAF0 *head)
{
    Head_82BFBAF0 old;
    Head_82BFBAF0 next;
    Node_82BFBAF0 *node;
    Node_82BFBAF0 *following;
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

void fn_82BFBAF0(Handler_82BFBAF0 *handler, Head_82BFBAF0 *head, long *count)
{
    Node_82BFBAF0 *node;
    unsigned int value;

    while ((node = Pop(head)) != 0) {
        value = node->value;
        if (handler) {
            handler->call(handler->context, value);
        } else {
            void *heap = fn_82A2A360();
            if (count) {
                int n = fn_82A277E0(heap, 0, value);
                if (n > 0)
                    _InterlockedExchangeAdd(count, -n);
            }
            fn_82A28E60(fn_82A2A360(), 0, value);
        }
    }
}
