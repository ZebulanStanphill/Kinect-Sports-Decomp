typedef struct Node_825C40B0 {
    void *item;                 /* 0x0 */
    struct Node_825C40B0 *next; /* 0x4 */
} Node_825C40B0;

typedef struct Owner_825C40B0 {
    int field0;          /* 0x0 */
    void *value;         /* 0x4 */
    Node_825C40B0 *head; /* 0x8 */
    void *entries[3];    /* 0xc */
    char *parent;        /* 0x18 */
} Owner_825C40B0;

typedef struct Descriptor_825C40B0 {
    char pad0[8];
    int index;   /* 0x8 */
    void *value; /* 0xc */
} Descriptor_825C40B0;

extern void *fn_825C44A8(void *, void *, int, void *);
extern Node_825C40B0 *fn_82522D98(unsigned int);
extern void *fn_8265C9E0(unsigned int);
extern void *fn_826129C0(void *, void *, void *, Descriptor_825C40B0 *, float, unsigned int, void *);

void *fn_825C40B0(Owner_825C40B0 *self, Descriptor_825C40B0 *descriptor, void *argument, float scale,
                  unsigned int flags)
{
    Node_825C40B0 *node;
    void *memory;
    if (self->entries[descriptor->index] == 0) {
        char *target;
        void *value;
        if (self->parent != 0) {
        } else {
            return 0;
        }
        value = self->value;
        target = self->parent + 0xb90;
        self->entries[descriptor->index] = fn_825C44A8(target, value, descriptor->index, descriptor->value);
    }
    node = fn_82522D98(8);
    memory = fn_8265C9E0(0x90);
    node->item = memory ? fn_826129C0(memory, argument, self->entries[descriptor->index], descriptor, scale,
                                      flags, self->parent)
                        : 0;
    node->next = self->head;
    self->head = node;
    return node->item;
}
