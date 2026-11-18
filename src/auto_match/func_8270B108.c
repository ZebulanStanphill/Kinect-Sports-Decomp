typedef struct Device_8270B108 Device_8270B108;

typedef struct Information_8270B108 {
    unsigned int minimum;   /* 0x00 */
    unsigned int maximum;   /* 0x04 */
    unsigned int alignment; /* 0x08 */
    unsigned int pad0c[2];
    unsigned char flag; /* 0x14 */
} Information_8270B108;

typedef struct Vtable_8270B108 {
    void (*getInformation)(Device_8270B108 *, Information_8270B108 *);
} Vtable_8270B108;

struct Device_8270B108 {
    Vtable_8270B108 *vtable;
};

typedef struct List_8270B108 {
    void *next;
    void *previous;
} List_8270B108;

typedef struct Queue_8270B108 {
    unsigned int count;
    void *next;
    void *previous;
} Queue_8270B108;

typedef struct Object_8270B108 {
    Device_8270B108 *device; /* 0x00 */
    unsigned int size;       /* 0x04 */
    unsigned int blockSize;  /* 0x08 */
    unsigned int blockCount; /* 0x0c */
    unsigned int minimum;    /* 0x10 */
    unsigned int maximum;    /* 0x14 */
    unsigned char flag;      /* 0x18 */
    List_8270B108 used;      /* 0x1c */
    Queue_8270B108 free;     /* 0x24 */
    char pad30[0x14];
    unsigned int count44; /* 0x44 */
    unsigned int count48; /* 0x48 */
    char lock[4];         /* 0x4c */
} Object_8270B108;

extern void fn_8268E898(void *lock, void *heap);
extern void *memset(void *destination, int value, unsigned int size);

static __forceinline void InitList(List_8270B108 *list)
{
    list->next = list;
    list->previous = list;
}

static __forceinline void InitQueue(Queue_8270B108 *queue)
{
    queue->next = queue;
    queue->previous = queue;
}

Object_8270B108 *fn_8270B108(Object_8270B108 *self, Device_8270B108 *device, void *heap, unsigned int size,
                             unsigned int blockSize)
{
    Information_8270B108 information;
    unsigned int alignment;

    self->device = device;
    self->blockSize = blockSize;
    self->size = size;
    self->minimum = 0;
    self->blockCount = (blockSize - 0x20) >> 5;
    self->maximum = 0;
    self->flag = 0;
    InitList(&self->used);
    InitQueue(&self->free);
    self->count44 = 0;
    self->count48 = 0;
    fn_8268E898(self->lock, heap);
    memset(&information, 0, sizeof(information));
    self->device->vtable->getInformation(self->device, &information);
    alignment = information.alignment;
    if (alignment < 0x1000) {
        alignment = 0x1000;
    }
    self->minimum = information.minimum;
    self->maximum = information.maximum;
    if (information.minimum == 0) {
        self->minimum = 1;
    }
    if (information.maximum == 0) {
        self->maximum = 0x80000000;
    }
    self->flag = information.flag;
    self->size = ((self->size + alignment - 1) / alignment) * alignment;
    return self;
}
