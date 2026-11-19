typedef struct Block_82F34E58 Block_82F34E58;

typedef struct BlockVtbl_82F34E58 {
    int (*Create)(Block_82F34E58 *self, Block_82F34E58 **block);
} BlockVtbl_82F34E58;

struct Block_82F34E58 {
    BlockVtbl_82F34E58 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0x8];
    unsigned char used[4]; /* 0x10 */
    void *entries[20];     /* 0x14 */
    Block_82F34E58 *next;  /* 0x64 */
};

extern const unsigned char lbl_831B9F90[8];

int fn_82F34E58(Block_82F34E58 *head, unsigned int index, void *value)
{
    Block_82F34E58 *previous = 0;
    Block_82F34E58 *block = head;
    Block_82F34E58 *created;
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
            Block_82F34E58 *link = created;

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
    *used |= lbl_831B9F90[offset & 7];
    block->entries[offset] = value;
    return 0;
}
