#define __sync() __emit(0x7C0004AC)

long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Entry_8264D1C8 {
    unsigned int info; /* 0x0: low 24 bits the register */
    unsigned int mask; /* 0x4 */
} Entry_8264D1C8;

typedef struct Block_8264D1C8 {
    struct Block_8264D1C8 *next; /* 0x0 */
    unsigned int count;          /* 0x4 */
    Entry_8264D1C8 entries[1];   /* 0x8 */
} Block_8264D1C8;

typedef struct Resource_8264D1C8 {
    unsigned char pad0[0x8];
    long stamp; /* 0x08 */
    unsigned char padc[0x70 - 0xc];
    Block_8264D1C8 *fences;    /* 0x70 */
    Block_8264D1C8 *constants; /* 0x74 */
    unsigned int tag;          /* 0x78 */
} Resource_8264D1C8;

typedef struct Slot_8264D1C8 {
    unsigned int stamp;          /* 0x00 */
    unsigned int count;          /* 0x04 */
    Resource_8264D1C8 *resource; /* 0x08 */
    unsigned int *tag;           /* 0x0c */
    int flags;                   /* 0x10 */
} Slot_8264D1C8;

typedef struct Packet_8264D1C8 {
    unsigned int pad0;
    unsigned int header;   /* 0x04 */
    unsigned int data[25]; /* 0x08 */
    int done;              /* 0x6c */
    unsigned int pad70[4];
} Packet_8264D1C8;

typedef struct Device_8264D1C8 {
    unsigned char pad0[0x5ea8];
    Packet_8264D1C8 *packets; /* 0x5ea8 */
    unsigned char pad5eac[0x5eb0 - 0x5eac];
    Slot_8264D1C8 *slots; /* 0x5eb0 */
} Device_8264D1C8;

extern void fn_8264C9D0(unsigned int value, Block_8264D1C8 *block, unsigned int filter);

static __forceinline void RaiseStamp(long volatile *stamp, unsigned int value)
{
    unsigned int old;
    unsigned int raised;

    do {
        old = *stamp;
        if (old == 0) {
            raised = value;
        } else {
            if (value == 0) {
                return;
            }
            raised = (int)(value - old) > 0 ? value : old;
        }
        if (raised == old) {
            return;
        }
    } while (old != (unsigned int)_InterlockedCompareExchange(stamp, raised, old));
}

void fn_8264D1C8(Device_8264D1C8 *device, unsigned int index, Resource_8264D1C8 *resource,
                 unsigned int filter)
{
    Packet_8264D1C8 *packet = &device->packets[index & 0x3f];
    Slot_8264D1C8 *slot = &device->slots[index & 0x3f];
    unsigned int *out;
    unsigned int count;
    Block_8264D1C8 *block;
    unsigned int bit;
    unsigned int i;
    unsigned int entries;
    unsigned int mask;
    unsigned int info;
    unsigned int stamp;

    slot->resource = resource;
    out = &packet->header;
    *out = 0xc0006300;
    *++out = filter;
    count = slot->count;
    block = resource != 0 ? resource->constants : 0;
    bit = 0;
    if ((slot->flags & 0x80000000) != 0)
        bit = 1;
    for (; block != 0; block = block->next) {
        if (count == 0)
            goto done;
        entries = block->count;
        for (i = 0; i < entries; i++) {
            mask = block->entries[i].mask;
            count--;
            *++out = bit | 0xc0013f00;
            info = block->entries[i].info;
            *++out = mask;
            *++out = info & 0xffffff;
            if (count == 0)
                break;
        }
    }
    for (; count != 0; count--) {
        *++out = 0x80000000;
        *++out = 0x80000000;
        *++out = 0x80000000;
    }
done:
    if (resource != 0) {
        if (resource->tag != 0 && slot->tag != 0)
            *slot->tag = resource->tag;
        stamp = slot->stamp;
        RaiseStamp(&resource->stamp, stamp);
        if (resource->fences != 0)
            fn_8264C9D0(stamp, resource->fences, filter);
    }
    __sync();
    packet->done = -1;
    __sync();
}
