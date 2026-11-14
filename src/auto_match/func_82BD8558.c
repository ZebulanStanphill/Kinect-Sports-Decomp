typedef struct Node_82BD8558 {
    int pad0;
    struct Node_82BD8558 *next;     /* 0x04 */
} Node_82BD8558;

typedef struct List_82BD8558 {
    Node_82BD8558 *head;
    Node_82BD8558 *tail;
} List_82BD8558;

typedef struct Obj_82BD8558 {
    char pad0[0x10];
    __int64 pending;            /* 0x10 */
    __int64 total;              /* 0x18 */
    short phase;                /* 0x20 */
    char pad22[0x44 - 0x22];
    unsigned short base;        /* 0x44 */
    char pad46[0x130 - 0x46];
    int f130;                   /* 0x130 */
    int pad134;
    int f138;                   /* 0x138 */
    char pad13c[0x180 - 0x13c];
    List_82BD8558 freeList;     /* 0x180 */
    List_82BD8558 busyList;     /* 0x188 */
} Obj_82BD8558;

static __forceinline Node_82BD8558 *PopHead(List_82BD8558 *list)
{
    Node_82BD8558 *n = list->head;
    if (n != 0) {
        if (n == list->tail)
            list->tail = 0;
        list->head = n->next;
        n->next = 0;
    }
    return n;
}

static __forceinline void PushTail(List_82BD8558 *list, Node_82BD8558 *n)
{
    n->next = 0;
    if (list->tail != 0)
        list->tail->next = n;
    else
        list->head = n;
    list->tail = n;
}

void fn_82BD8558(Obj_82BD8558 *self, unsigned short seq)
{
    Node_82BD8558 *n;

    self->total += self->pending;
    self->pending = 0;
    self->f138 = 0;
    self->f130 = 0;
    self->phase = (short)(((seq - self->base) + 0x800) % 0x800);
    n = PopHead(&self->busyList);
    while (n != 0) {
        PushTail(&self->freeList, n);
        n = PopHead(&self->busyList);
    }
}
