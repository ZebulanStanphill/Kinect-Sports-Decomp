typedef struct Device_82513668 Device_82513668;

typedef struct Vtable_82513668 {
    void (*slots[26])(Device_82513668 *); /* 0x0 */
} Vtable_82513668;

struct Device_82513668 {
    Vtable_82513668 *vtable; /* 0x0 */
};

typedef struct Object_82513668 {
    char pad[8];             /* 0x0 */
    Device_82513668 *device; /* 0x8 */
    char padC[12];           /* 0xc */
    Device_82513668 *target; /* 0x18 */
} Object_82513668;

typedef struct Node_82513668 {
    struct Node_82513668 *next; /* 0x0 */
    char pad[0x10];             /* 0x4 */
    Device_82513668 *device;    /* 0x14 */
} Node_82513668;

typedef struct Tree_82513668 {
    void *unused;        /* 0x0 */
    Node_82513668 *head; /* 0x4 */
} Tree_82513668;

typedef struct Iterator_82513668 {
    Device_82513668 *owner; /* 0x0 */
    Node_82513668 *node;    /* 0x4 */
} Iterator_82513668;

extern void fn_82594C50(Device_82513668 *);
extern void *fn_828A12E8(Device_82513668 *);
extern Tree_82513668 *fn_8288F948(void *, int);
extern void fn_82248B90(Node_82513668 **);

static __forceinline int HasNext(Iterator_82513668 *iterator)
{
    Node_82513668 *node = iterator->node;
    if (node != fn_8288F948(fn_828A12E8(iterator->owner), 1)->head) {
        return 1;
    }
    return 0;
}

void fn_82513668(Object_82513668 *self, float elapsed)
{
    Iterator_82513668 iterator;
    self->device->vtable->slots[25](self->device);
    fn_82594C50(self->device);
    iterator.owner = self->device;
    iterator.node = fn_8288F948(fn_828A12E8(iterator.owner), 1)->head->next;
    while (HasNext(&iterator)) {
        iterator.node->device->vtable->slots[20](iterator.node->device);
        fn_82248B90(&iterator.node);
    }
    ((void (*)(Device_82513668 *, float))self->target->vtable->slots[10])(self->target, elapsed);
}
