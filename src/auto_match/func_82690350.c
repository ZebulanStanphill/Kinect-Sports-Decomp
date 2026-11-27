typedef struct Node_82690350 Node_82690350;

struct Node_82690350 {
    Node_82690350 *prev; /* 0x00 */
    Node_82690350 *next; /* 0x04 */
};

typedef struct ListBin_82690350 {
    unsigned int mask;        /* 0x00 */
    Node_82690350 *roots[32]; /* 0x04 */
} ListBin_82690350;

/* Index of the lowest set bit of each byte value. */
extern const unsigned char lbl_8200E2B0[256];

extern Node_82690350 *fn_826902E0(ListBin_82690350 *self, Node_82690350 *root, unsigned int blocks,
                                  unsigned int alignMask);

static __forceinline unsigned char GetLowerBit_82690350(unsigned int x)
{
    return (x & 0xffff)
               ? (unsigned char)((x & 0xff) ? lbl_8200E2B0[x & 0xff] : lbl_8200E2B0[(x >> 8) & 0xff] + 8)
               : (unsigned char)((x & 0xff0000) ? lbl_8200E2B0[(x >> 16) & 0xff] + 16
                                                : lbl_8200E2B0[(x >> 24) & 0xff] + 24);
}

static __forceinline void PullNode_82690350(ListBin_82690350 *self, unsigned int index, Node_82690350 *node)
{
    Node_82690350 *root = self->roots[index];

    if (node != root) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        return;
    }
    if (root != root->next) {
        self->roots[index] = root->next;
        node->prev->next = node->next;
        node->next->prev = node->prev;
        return;
    }
    self->roots[index] = 0;
    self->mask &= ~(1u << index);
}

/* Takes the first node that fits from the lists at or above the given bin. */
Node_82690350 *fn_82690350(ListBin_82690350 *self, unsigned int index, unsigned int blocks,
                           unsigned int alignMask)
{
    Node_82690350 *best = 0;
    unsigned int bits = self->mask >> index;

    if (bits) {
        unsigned int i = index + GetLowerBit_82690350(bits);

        do {
            best = fn_826902E0(self, self->roots[i], blocks, alignMask);
            if (best) {
                PullNode_82690350(self, i, best);
                break;
            }
        } while (++i < 32);
    }
    return best;
}
