typedef struct Block_82EEFA30 Block_82EEFA30;

typedef struct BlockVtbl_82EEFA30 {
    int (*Create)(Block_82EEFA30 *self, Block_82EEFA30 **block);
} BlockVtbl_82EEFA30;

struct Block_82EEFA30 {
    BlockVtbl_82EEFA30 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0xc];
    unsigned char used[4];        /* 0x14 */
    unsigned __int64 entries[20]; /* 0x18 */
    Block_82EEFA30 *next;         /* 0xb8 */
};

extern const unsigned char lbl_8318A74C[8];

int fn_82EEFA30(Block_82EEFA30 *head, unsigned int index, unsigned __int64 value)
{
    Block_82EEFA30 *previous = 0;
    Block_82EEFA30 *block = head;
    Block_82EEFA30 *created;
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
            Block_82EEFA30 *link = created;

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
    *used |= lbl_8318A74C[offset & 7];
    block->entries[offset] = value;
    return 0;
}
