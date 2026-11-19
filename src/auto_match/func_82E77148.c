typedef struct Value_82E77148 {
    unsigned int words[3];
} Value_82E77148;

typedef struct Block_82E77148 Block_82E77148;

typedef struct BlockVtbl_82E77148 {
    int (*Create)(Block_82E77148 *self, Block_82E77148 **block);
} BlockVtbl_82E77148;

struct Block_82E77148 {
    BlockVtbl_82E77148 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0x10];
    unsigned char used[4];      /* 0x18 */
    Value_82E77148 entries[20]; /* 0x1c */
    Block_82E77148 *next;       /* 0x10c */
};

extern const unsigned char lbl_831888F8[8];

int fn_82E77148(Block_82E77148 *head, unsigned int index, Value_82E77148 value)
{
    Block_82E77148 *previous = 0;
    Block_82E77148 *block = head;
    Block_82E77148 *created;
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
            Block_82E77148 *link = created;

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
    *used |= lbl_831888F8[offset & 7];
    block->entries[offset] = value;
    return 0;
}
