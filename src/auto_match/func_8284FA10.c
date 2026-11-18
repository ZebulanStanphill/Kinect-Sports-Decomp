typedef struct Entry_8284FA10 {
    int pad0;
    const char *name; /* 0x04 */
    char pad8[0x50 - 0x8];
} Entry_8284FA10;

typedef struct List_8284FA10 {
    unsigned int count;      /* 0x00 */
    Entry_8284FA10 *entries; /* 0x04 */
} List_8284FA10;

typedef struct Source_8284FA10 {
    char pad0[0x2c];
    List_8284FA10 *list; /* 0x2c */
} Source_8284FA10;

typedef struct Node_8284FA10 {
    int id; /* 0x00 */
    char pad4[0x38 - 0x4];
    const char *name; /* 0x38 */
    int pad3c;
    struct Node_8284FA10 *child; /* 0x40 */
} Node_8284FA10;

typedef struct Bits_8284FA10 {
    char pad0[0x2c];
    unsigned char *bits; /* 0x2c */
} Bits_8284FA10;

typedef struct Graph_8284FA10 {
    char pad0[0x40];
    Node_8284FA10 **nodes; /* 0x40 */
    unsigned short count;  /* 0x44 */
    char pad46[0x60 - 0x46];
    unsigned int byteCount; /* 0x60 */
} Graph_8284FA10;

int strcmp(const char *a, const char *b);
extern int fn_8285AE70(Graph_8284FA10 *self);
extern Bits_8284FA10 *fn_8285A830(Graph_8284FA10 *self, void *state);
extern void fn_8284D780(Source_8284FA10 *source, List_8284FA10 **list);
extern unsigned int *fn_8285A7F8(Node_8284FA10 *node, void *state);
extern void fn_82850A78(List_8284FA10 *list, unsigned int index, Entry_8284FA10 **entry);
extern void fn_82850D08(Entry_8284FA10 *entry, unsigned char set, void *masks, int index);
extern void fn_8284F8A0(Node_8284FA10 *node, void *state, Source_8284FA10 *source, void *masks);

void fn_8284FA10(Graph_8284FA10 *self, void *state, Source_8284FA10 *source, void *masks)
{
    Bits_8284FA10 *bits;
    List_8284FA10 *list;
    Entry_8284FA10 *entry;
    unsigned int byteIndex;

    fn_8285AE70(self);
    bits = fn_8285A830(self, state);
    fn_8284D780(source, &list);
    if (list == 0) {
        return;
    }
    for (byteIndex = 0; byteIndex < self->byteCount; byteIndex++) {
        int index = byteIndex << 3;
        unsigned char mask = bits->bits[byteIndex];

        if (index > self->count) {
            return;
        }
        for (; mask != 0; mask <<= 1, index++) {
            Node_8284FA10 *node;

            if (index >= self->count || !(mask & 0x80)) {
                continue;
            }
            node = self->nodes[index];
            if (node->id == -1) {
                continue;
            }
            if (fn_8285AE70(self)) {
                unsigned int i;

                for (i = 0; i < list->count; i++) {
                    if (strcmp(list->entries[i].name, node->name) == 0) {
                        fn_82850D08(&list->entries[i], 1, masks, 0);
                    }
                }
            } else {
                unsigned int *slot = fn_8285A7F8(node, state);

                if (*slot < list->count) {
                    fn_82850A78(list, *slot, &entry);
                    fn_82850D08(entry, 1, masks, 0);
                    if (node->child != 0) {
                        fn_8284F8A0(node->child, state, source, masks);
                    }
                }
            }
        }
    }
}
