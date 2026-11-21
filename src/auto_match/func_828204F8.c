typedef struct Allocator_828204F8 {
    char name[0xc];
    void *(*Allocate)(void *pool, unsigned int size, unsigned int alignment, int flags); /* 0x0c */
} Allocator_828204F8;

typedef struct Descriptor_828204F8 {
    unsigned char type; /* 0x00 */
    char padding1[0x3];
    const char *allocatorName; /* 0x04 */
    int format;                /* 0x08 */
    int stride;                /* 0x0c */
    unsigned int size;         /* 0x10 */
    int offset;                /* 0x14 */
    const void *data;          /* 0x18 */
} Descriptor_828204F8;

typedef struct Layout_828204F8 {
    char padding[0x28];
    unsigned char *streamOfSlot; /* 0x28 */
    char padding2c[0x4];
    Descriptor_828204F8 *descriptors; /* 0x30 */
} Layout_828204F8;

typedef struct Header_828204F8 {
    char padding[0x51];
    unsigned char slotCount; /* 0x51 */
} Header_828204F8;

/* 0x21-byte packed records: the words at 0x0d and 0x11 are unaligned. */
typedef struct Slot_828204F8 {
    char padding[0x4];
    unsigned char alignmentShift; /* 0x04 */
    char padding5[0x8];
    unsigned char buffer[4];       /* 0x0d: char * */
    unsigned char bufferOffset[4]; /* 0x11: unsigned int */
    char padding15[0xc];
} Slot_828204F8;

#define SLOT_BUFFER(slot) (*(char **)(slot)->buffer)
#define SLOT_BUFFER_OFFSET(slot) (*(unsigned int *)(slot)->bufferOffset)

typedef struct Loader_828204F8 {
    char padding[0xc];
    unsigned int errors; /* 0x0c */
    char padding10[0x8];
    void *pool;              /* 0x18 */
    Header_828204F8 *header; /* 0x1c */
    Layout_828204F8 *layout; /* 0x20 */
    char padding24[0xc];
    Slot_828204F8 *slots; /* 0x30 */
} Loader_828204F8;

extern void fn_828142D8(const char *name, Allocator_828204F8 **out);
extern void fn_82824188(char *destination, int format, char *base, int stride, const void *source,
                        unsigned int size);
void *memcpy(void *destination, const void *source, unsigned int size);

static __forceinline int StreamOffset_828204F8(Layout_828204F8 *layout, Descriptor_828204F8 *descriptors,
                                               unsigned int index)
{
    if (index >= 3) {
        index = layout->streamOfSlot[index - 3];
        if (index == 0) {
            return 0;
        }
        index += 2;
    }
    return descriptors[index].offset;
}

int fn_828204F8(Loader_828204F8 *self)
{
    Layout_828204F8 *layout;
    Descriptor_828204F8 *descriptors;
    Descriptor_828204F8 *descriptor;
    Slot_828204F8 *slot;
    Allocator_828204F8 *allocator;
    unsigned int alignment;
    unsigned int k;
    char *base;
    int offset;
    unsigned char type;

    layout = self->layout;
    for (k = 0; k < self->header->slotCount; k++) {
        slot = &self->slots[k];
        descriptors = layout->descriptors;
        descriptor = &descriptors[k + 3];
        type = descriptor->type;
        if (type >= 1) {
            if (type != 1) {
                if (type < 3) {
                    offset = StreamOffset_828204F8(layout, descriptors, k + 3);
                    base = SLOT_BUFFER(slot) + SLOT_BUFFER_OFFSET(slot);
                    fn_82824188(base + offset, descriptor->format, base, descriptor->stride, descriptor->data,
                                descriptor->size);
                }
            } else {
                if (SLOT_BUFFER(slot) == 0) {
                    fn_828142D8(descriptor->allocatorName, &allocator);
                    if (allocator == 0) {
                        self->errors |= 0x800;
                        return 1;
                    }
                    alignment = 1 << slot->alignmentShift;
                    SLOT_BUFFER(slot) = allocator->Allocate(self->pool, descriptor->size, alignment, 0);
                    if (SLOT_BUFFER(slot) == 0) {
                        self->errors |= 4;
                        return 1;
                    }
                    SLOT_BUFFER_OFFSET(slot) =
                        ((unsigned int)(SLOT_BUFFER(slot) + alignment - 1) & ~(alignment - 1)) -
                        (unsigned int)SLOT_BUFFER(slot);
                }
                memcpy(SLOT_BUFFER(slot) + SLOT_BUFFER_OFFSET(slot), descriptor->data, descriptor->size);
            }
        }
    }
    return 0;
}
