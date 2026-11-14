typedef struct Slot_82CE38F8 {
    unsigned int flags;         /* 0x00 */
    unsigned int data;          /* 0x04 */
    unsigned __int64 value;     /* 0x08 */
} Slot_82CE38F8;

typedef struct Desc_82CE38F8 {
    unsigned char kind;
    unsigned char options;      /* 0x01 */
} Desc_82CE38F8;

int fn_82CE38F8(Slot_82CE38F8 *slots, unsigned int index, unsigned int shift, unsigned __int64 value,
                int unused, Desc_82CE38F8 *desc, unsigned int data)
{
    Slot_82CE38F8 *slot;

    if (index >= 0x40 || shift > 3)
        return 0x80070057;
    slot = &slots[index];
    if ((slot->flags & 0x40000000) != 0)
        return 0x80004005;
    if (desc != 0 && (desc->options & 1) != 0)
        value /= 1ULL << shift;
    slot->data = data;
    slot->value = value;
    slot->flags = (shift & 3) | 0x80000000;
    return 0;
}
