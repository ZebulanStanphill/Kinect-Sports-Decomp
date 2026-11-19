typedef struct Value_82EF1AE0 {
    unsigned __int64 words[5];
} Value_82EF1AE0;

typedef struct Block_82EF1AE0 Block_82EF1AE0;

typedef struct BlockVtbl_82EF1AE0 {
    int (*Create)(Block_82EF1AE0 *self, Block_82EF1AE0 **block);
} BlockVtbl_82EF1AE0;

struct Block_82EF1AE0 {
    BlockVtbl_82EF1AE0 *vt; /* 0x0 */
    unsigned int pad4;      /* 0x4 */
    unsigned int first;     /* 0x8 */
    char padC[0x2c];
    unsigned char used[8];      /* 0x38 */
    Value_82EF1AE0 entries[20]; /* 0x40 */
    Block_82EF1AE0 *next;       /* 0x360 */
};

extern const unsigned char lbl_8318A754[8];

int fn_82EF1AE0(Block_82EF1AE0 *head, unsigned int index, Value_82EF1AE0 value)
{
    Block_82EF1AE0 *previous = 0;
    Block_82EF1AE0 *block = head;
    Block_82EF1AE0 *created;
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
            Block_82EF1AE0 *link = created;

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
    *used |= lbl_8318A754[offset & 7];
    block->entries[offset] = value;
    return 0;
}
