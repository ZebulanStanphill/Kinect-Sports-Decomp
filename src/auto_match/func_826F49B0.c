#define __lwsync() __emit(0x7C2004AC)

typedef struct Item_826F49B0 {
    char pad[0x14];
    int id;
    struct Item_826F49B0 *next;
} Item_826F49B0;

typedef struct {
    char pad[8];
    Item_826F49B0 *head;
    Item_826F49B0 *tail;
} Queue_826F49B0;

typedef struct {
    char pad[0x88];
    Queue_826F49B0 queue;
} Owner_826F49B0;

typedef struct {
    char pad[0x20];
    Owner_826F49B0 *owner;
    char pad24[0x2bc - 0x24];
    int nextId;
    char pad2c0[4];
    int pending;
    char pad2c8[0x2d4 - 0x2c8];
    Item_826F49B0 *first;
} Obj_826F49B0;

static __forceinline void Push(Queue_826F49B0 *q, Item_826F49B0 *item)
{
    Item_826F49B0 *head = q->head;
    __lwsync();
    if (head == 0) {
        __lwsync();
        q->head = item;
    } else {
        Item_826F49B0 *tail = q->tail;
        __lwsync();
        tail->next = item;
    }
    q->tail = item;
}

void fn_826F49B0(Obj_826F49B0 *self, Item_826F49B0 *item)
{
    item->id = self->nextId;
    self->nextId++;
    if (self->first == 0) {
        self->first = item;
    }
    Push(&self->owner->queue, item);
    self->pending++;
}
