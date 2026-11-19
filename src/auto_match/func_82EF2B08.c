typedef struct Value_82EF2B08 {
    unsigned char bytes[0x18];
} Value_82EF2B08;

typedef struct Block_82EF2B08 Block_82EF2B08;

typedef struct BlockVtbl_82EF2B08 {
    int (*Create)(Block_82EF2B08 *self, Block_82EF2B08 **block);
} BlockVtbl_82EF2B08;

struct Block_82EF2B08 {
    BlockVtbl_82EF2B08 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0x1c];
    unsigned char used[4];      /* 0x24 */
    Value_82EF2B08 entries[20]; /* 0x28 */
    Block_82EF2B08 *next;       /* 0x208 */
};

extern const unsigned char lbl_8318A75C[8];

int fn_82EF2B08(Block_82EF2B08 *head, unsigned int index, Value_82EF2B08 value)
{
    Block_82EF2B08 *previous = 0;
    Block_82EF2B08 *block = head;
    Block_82EF2B08 *created;
    unsigned int offset;
    unsigned char *used;
    int hr;

    if (block == 0) {
    } else {
        do {
            if (index < block->first) {
                break;
            }
            if (index >= block->first + 20) {
            } else {
                goto found;
            }
            previous = block;
            block = block->next;
        } while (block != 0);
    }
    created = 0;
    if (head != 0) {
        hr = head->vt->Create(head, &created);
        if (hr < 0) {
            return hr;
        }
        created->first = index / 20 * 20;
        {
            Block_82EF2B08 *link = created;

            if (previous != 0) {
                previous->next = link;
            }
            link->next = block;
        }
        block = created;
        goto found;
    }
    return 0x8000ffff;
found:
    offset = index - block->first;
    used = &block->used[offset >> 3];
    *used |= lbl_8318A75C[offset & 7];
    block->entries[offset] = value;
    return 0;
}
