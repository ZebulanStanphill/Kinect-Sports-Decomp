typedef struct Object_828E3760 Object_828E3760;

typedef struct Vtable_828E3760 {
    void *reserved[2];                /* 0x0 */
    void (*begin)(Object_828E3760 *); /* 0x8 */
    void (*end)(Object_828E3760 *);   /* 0xc */
} Vtable_828E3760;

struct Object_828E3760 {
    Vtable_828E3760 *vtable; /* 0x0 */
    unsigned char active;    /* 0x4 */
};

typedef struct Node_828E3760 {
    struct Node_828E3760 *next; /* 0x0 */
    int reserved;               /* 0x4 */
    Object_828E3760 *object;    /* 0x8 */
} Node_828E3760;

typedef struct List_828E3760 {
    Node_828E3760 *head; /* 0x0 */
} List_828E3760;

typedef struct Ref_828E3760 {
    void *vtable; /* 0x0 */
    long count;   /* 0x4 */
} Ref_828E3760;

typedef struct Owner_828E3760 {
    List_828E3760 **list;    /* 0x0 */
    Ref_828E3760 *reference; /* 0x4 */
    int reserved;            /* 0x8 */
    char lock[28];           /* 0xc */
} Owner_828E3760;

extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern long _InterlockedIncrement(long *);
extern void fn_8289DF30(Ref_828E3760 *);

void fn_828E3760(Owner_828E3760 *self)
{
    List_828E3760 **list;
    Ref_828E3760 *reference;
    Node_828E3760 *node;
    Node_828E3760 *head;
    RtlEnterCriticalSection(self->lock);
    reference = self->reference;
    list = self->list;
    if (reference != 0) {
        _InterlockedIncrement(&reference->count);
    }
    RtlLeaveCriticalSection(self->lock);
    head = (*list)->head;
    node = head->next;
    if (node != head) {
        do {
            Object_828E3760 *object = node->object;
            object->vtable->begin(object);
            object->active = 0;
            object->vtable->end(object);
            node = node->next;
        } while (node != (*list)->head);
    }
    if (reference != 0) {
        fn_8289DF30(reference);
    }
}
