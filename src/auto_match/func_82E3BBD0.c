typedef struct Block_82E3BBD0 Block_82E3BBD0;

typedef struct BlockVtbl_82E3BBD0 {
    int (*Create)(Block_82E3BBD0 *self, Block_82E3BBD0 **block);
} BlockVtbl_82E3BBD0;

struct Block_82E3BBD0 {
    BlockVtbl_82E3BBD0 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0x6];
    unsigned char used[4];      /* 0x0e */
    unsigned short entries[20]; /* 0x12 */
    char pad3a[2];
    Block_82E3BBD0 *next; /* 0x3c */
};

extern const unsigned char lbl_831882E8[8];

int fn_82E3BBD0(Block_82E3BBD0 *head, unsigned int index, unsigned short value)
{
    Block_82E3BBD0 *previous = 0;
    Block_82E3BBD0 *block = head;
    Block_82E3BBD0 *created;
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
            Block_82E3BBD0 *link = created;

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
    *used |= lbl_831882E8[offset & 7];
    block->entries[offset] = value;
    return 0;
}
