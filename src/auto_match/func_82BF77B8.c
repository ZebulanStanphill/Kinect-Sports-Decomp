#include <string.h>

typedef struct Node_82BF77B8 {
    void *vtable;               /* 0x00 */
    int data[3];                /* 0x04 */
    struct Node_82BF77B8 *next; /* 0x10 */
    int reserved;               /* 0x14 */
} Node_82BF77B8;

typedef struct Pool_82BF77B8 {
    char pad[0x10];          /* 0x00 */
    int count;               /* 0x10 */
    Node_82BF77B8 *freeList; /* 0x14 */
    void *blocks;            /* 0x18 */
    int capacity;            /* 0x1c */
} Pool_82BF77B8;

extern void *fn_82BF71A0(void *blocks, int count, int size);
extern Node_82BF77B8 *fn_82BF7150(Node_82BF77B8 *node, unsigned int *value);
extern char lbl_820EBC0C[];

Node_82BF77B8 *fn_82BF77B8(Pool_82BF77B8 *self, unsigned int *value)
{
    Node_82BF77B8 *node;
    Node_82BF77B8 *next;
    char *block;
    int index;
    if (self->freeList == 0) {
        block = (char *)fn_82BF71A0(&self->blocks, self->capacity, 0x18);
        if (block == 0) {
            return 0;
        }
        node = (Node_82BF77B8 *)(block + self->capacity * 0x18 - 0xc);
        for (index = self->capacity - 1; index >= 0; --index) {
            node->next = self->freeList;
            self->freeList = node;
            node = (Node_82BF77B8 *)((char *)node - 0x18);
        }
    }
    node = self->freeList;
    if (node == 0) {
        return 0;
    }
    next = node->next;
    memset(node, 0, 0x18);
    node->next = next;
    self->freeList = self->freeList->next;
    if (++self->count <= 0) {
        return 0;
    }
    fn_82BF7150(node, value);
    node->vtable = lbl_820EBC0C;
    return node;
}
