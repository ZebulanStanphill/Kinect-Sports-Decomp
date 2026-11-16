typedef struct Device_82691080 Device_82691080;

typedef struct Information_82691080 {
    unsigned int words[6];
} Information_82691080;

typedef struct Vtable_82691080 {
    void (*getInformation)(Device_82691080 *, Information_82691080 *);
} Vtable_82691080;

struct Device_82691080 {
    Vtable_82691080 *vtable;
};

typedef struct Object_82691080 {
    Device_82691080 *device; /* 0x0 */
    unsigned int size;       /* 0x4 */
    void *next;              /* 0x8 */
    void *previous;          /* 0xc */
    char lock[0x198];        /* 0x10 */
    int count;               /* 0x1a8 */
} Object_82691080;

extern void fn_8270AA18(void *lock, int spin);
extern void *memset(void *destination, int value, unsigned int size);

Object_82691080 *fn_82691080(Object_82691080 *self, Device_82691080 *device, unsigned int size)
{
    Information_82691080 information;
    unsigned int alignment;
    self->device = device;
    self->size = size;
    {
        void **pNext = &self->next;
        *pNext = &self->next;
    }
    self->previous = &self->next;
    fn_8270AA18(self->lock, 4);
    self->count = 0;
    memset(&information, 0, sizeof(information));
    self->device->vtable->getInformation(self->device, &information);
    alignment = information.words[2];
    if (alignment < 0x1000) {
        alignment = 0x1000;
    }
    self->size = ((self->size + alignment - 1) / alignment) * alignment;
    return self;
}
