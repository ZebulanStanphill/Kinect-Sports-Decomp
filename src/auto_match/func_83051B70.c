extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FA5358(int a, int b);
extern void fn_830514A8(void *p);
extern void fn_83055E98(void *p);

typedef struct Node {
    char pad0[8];
    int x8;
    char padc[4];
    struct Node *next;
} Node;

typedef struct Pool {
    char pad0[0x10];
    char cs[0x68];
    Node *free;
    char pad7c[0x10];
    int x8c;
} Pool;

int fn_83051B70(char *p)
{
    void *cs = p - 0x40;
    Node *n;
    Node *h;
    Pool *pool;
    void *pcs;
    RtlEnterCriticalSection(cs);
    if (*(unsigned char *)(p + 0x30) != 0) {
        n = *(Node **)(p + 0x24);
        pcs = (*(Pool **)(p - 0x18))->cs;
        RtlEnterCriticalSection(pcs);
        fn_82FA5358((*(Pool **)(p - 0x18))->x8c, n->x8);
        fn_83055E98(*(Pool **)(p - 0x18));
        h = *(Node **)(p + 0x24);
        if (h != 0) {
            if (h->next == 0) {
                *(Node **)(p + 0x24) = 0;
                *(Node **)(p + 0x28) = 0;
            } else {
                *(Node **)(p + 0x24) = (*(Node **)(p + 0x24))->next;
            }
            *(int *)(p + 0x2c) = *(int *)(p + 0x2c) - 1;
        }
        pool = *(Pool **)(p - 0x18);
        if (pool->free == 0) {
            pool->free = n;
            n->next = 0;
        } else {
            n->next = pool->free;
            pool->free = n;
        }
        RtlLeaveCriticalSection(pcs);
        *(unsigned char *)(p + 0x30) = *(unsigned char *)(p + 0x30) - 1;
        fn_830514A8(p - 0x78);
        RtlLeaveCriticalSection(cs);
        return 1;
    } else {
        RtlLeaveCriticalSection(cs);
        return 2;
    }
}
