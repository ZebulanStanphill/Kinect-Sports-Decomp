typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float value[4];
} __vector4;

typedef struct Entry_8307E060 {
    __vector4 vectors[3];   /* 0x00 */
    char padding30[16];     /* 0x30 */
    __vector4 *destination; /* 0x40 */
    void *buffer;           /* 0x44 */
    char padding48[8];      /* 0x48 */
    unsigned short id;      /* 0x50 */
    char padding52[14];     /* 0x52 */
} Entry_8307E060;

typedef struct Owner_8307E060 {
    unsigned int count;      /* 0x00 */
    unsigned int flags;      /* 0x04 */
    Entry_8307E060 *entries; /* 0x08 */
} Owner_8307E060;

extern void __dcbf(unsigned int offset, const void *base);
extern unsigned long _byteswap_ulong(unsigned long);

long fn_8307E060(Owner_8307E060 *self)
{
    unsigned int index;
    for (index = 0; index < self->count; ++index) {
        Entry_8307E060 *entry = &self->entries[index];
        void *buffer = entry->buffer;
        unsigned int size = (*(unsigned int *)entry >> 14) & 0x1f00;
        unsigned int offset;
        for (offset = 0; offset < size; offset += 128) {
            __dcbf(offset, buffer);
        }
    }
    if (self->flags & 0x20000) {
        for (index = 0; index < self->count; ++index) {
            Entry_8307E060 *entry = &self->entries[index];
            __vector4 *destination = entry->destination;
            __vector4 second = entry->vectors[1];
            __vector4 third = entry->vectors[2];
            __vector4 first = entry->vectors[0];
            destination[0] = first;
            destination[1] = second;
            destination[2] = third;
        }
    }
    for (index = 0; index < self->count; ++index) {
        unsigned short id = self->entries[index].id;
        *(unsigned int *)(((id >> 5) + 0x1ffa8650) * 4) = _byteswap_ulong(1 << (id & 31));
        __emit(0x7c0006ac);
    }
    self->flags &= ~0x30000;
    return 0;
}
