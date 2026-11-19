typedef struct Message_82F3A818 {
    void *vt;
    void *chain; /* 0x04 */
    char pad08[0xc0 - 8];
} Message_82F3A818;

typedef struct Packet_82F3A818 {
    int header[5];
    Message_82F3A818 message; /* 0x14 */
    int extra[2];             /* 0xd4 */
} Packet_82F3A818;

typedef struct Block_82F3A818 Block_82F3A818;

typedef struct BlockVtbl_82F3A818 {
    int (*Create)(Block_82F3A818 *self, Block_82F3A818 **block);
} BlockVtbl_82F3A818;

struct Block_82F3A818 {
    BlockVtbl_82F3A818 *vt; /* 0x0 */
    unsigned int first;     /* 0x4 */
    char pad8[0xe0];
    unsigned char used[4];       /* 0xe8 */
    Packet_82F3A818 entries[20]; /* 0xec */
    Block_82F3A818 *next;        /* 0x121c */
};

extern const unsigned char lbl_831B9FE8[8];
extern char lbl_82162C1C[];

extern Packet_82F3A818 *fn_82F39FE0(Packet_82F3A818 *dst, Packet_82F3A818 *src);
extern int fn_82EE3128(Message_82F3A818 *message, int keep);

static __forceinline void Message_destroy(Message_82F3A818 *message)
{
    message->vt = lbl_82162C1C;
    if (message->chain == 0)
        fn_82EE3128(message, 0);
}

int fn_82F3A818(Block_82F3A818 *head, unsigned int index, Packet_82F3A818 *packet)
{
    Block_82F3A818 *previous = 0;
    Block_82F3A818 *block = head;
    Block_82F3A818 *created;
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
            Message_destroy(&packet->message);
            return hr;
        }
        created->first = index / 20 * 20;
        {
            Block_82F3A818 *link = created;

            if (previous != 0) {
                previous->next = link;
            }
            link->next = block;
        }
        block = created;
        goto found;
    }
    Message_destroy(&packet->message);
    return 0x8000ffff;
found:
    offset = index - block->first;
    used = &block->used[offset >> 3];
    *used |= lbl_831B9FE8[offset & 7];
    fn_82F39FE0(&block->entries[offset], packet);
    Message_destroy(&packet->message);
    return 0;
}
