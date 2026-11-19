typedef struct Value_82EEF878 {
    unsigned int words[4];
} Value_82EEF878;

typedef struct Block_82EEF878 Block_82EEF878;

typedef struct BlockVtbl_82EEF878 {
    int (*Create)(Block_82EEF878 *self, Block_82EEF878 **block);
} BlockVtbl_82EEF878;

struct Block_82EEF878 {
    BlockVtbl_82EEF878 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0x14];
    unsigned char used[4];      /* 0x1c */
    Value_82EEF878 entries[20]; /* 0x20 */
    Block_82EEF878 *next;       /* 0x160 */
};

extern const unsigned char lbl_8318A744[8];

int fn_82EEF878(Block_82EEF878 *head, unsigned int index, Value_82EEF878 value)
{
    Block_82EEF878 *previous = 0;
    Block_82EEF878 *block = head;
    Block_82EEF878 *created;
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
            Block_82EEF878 *link = created;

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
    *used |= lbl_8318A744[offset & 7];
    block->entries[offset] = value;
    return 0;
}
