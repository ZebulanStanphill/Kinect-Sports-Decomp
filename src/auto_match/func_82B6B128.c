typedef struct Node_82B6B128 {
    struct Node_82B6B128 *next;
} Node_82B6B128;

typedef struct Pool_82B6B128 {
    void *allocate;
    void *release;
    void *context;
    Node_82B6B128 **freeList;
    unsigned int itemSize;
    unsigned int capacity;
    unsigned int count;
    struct Pool_82B6B128 *next;
} Pool_82B6B128;

extern void fn_82AB15D0(int, const char *, ...);
extern Pool_82B6B128 *fn_82B6B008(unsigned int, unsigned int, void *, void *, void *);

Node_82B6B128 *fn_82B6B128(Pool_82B6B128 *head)
{
    Pool_82B6B128 *pool = head;
    Node_82B6B128 *item = 0;
    if (!head) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pHead",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\"
                    "xgraphics\\ucode\\ssm\\util\\mempriv.h",
                    178);
    }
restart:
    do {
        unsigned int *count;
        if (!pool) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pHead",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\"
                        "xgraphics\\ucode\\ssm\\util\\mempriv.h",
                        186);
            return 0;
        }
        count = &pool->count;
        if (pool->count) {
            item = *pool->freeList;
            *pool->freeList = item->next;
        } else {
            Pool_82B6B128 *next;
            unsigned int itemSize;
            do {
                next = pool->next;
                if (!next) {
                    break;
                }
                count = &next->count;
                pool = next;
            } while (next->count == 0);
            if (*count) {
                goto restart;
            }
            itemSize = pool->itemSize;
            pool->next = fn_82B6B008(pool->capacity, itemSize, pool->allocate, pool->release, pool->context);
            pool = pool->next;
        }
        if (item) {
            --pool->count;
            return item;
        }
    } while (1);
}
