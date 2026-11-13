typedef struct Node_827760B8 {
    struct Node_827760B8 *next;
    struct Node_827760B8 *prev;
    void *item;
    void *owner;
} Node_827760B8;

typedef struct FreeList_827760B8 {
    char pad[0xc];
    Node_827760B8 *head;
} FreeList_827760B8;

typedef struct Owner_827760B8 {
    char pad0[0x24];
    FreeList_827760B8 freeList;
    char pad1[0x9e4 - 0x34];
    char lock[0x1c];
} Owner_827760B8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82775EB0(void *item, int flag);

void fn_827760B8(Owner_827760B8 *self, Node_827760B8 *node)
{
    RtlEnterCriticalSection(self->lock);
    if (node != 0) {
        if (node->owner != self) {
            if (node->item != 0) {
                fn_82775EB0(node->item, 1);
            }
            node->item = 0;
        } else {
            FreeList_827760B8 *list;
            if (node->item != 0) {
                fn_82775EB0(node->item, 1);
            }
            list = &self->freeList;
            node->next->prev = node->prev;
            node->prev->next = node->next;
            node->next = list->head;
            list->head = node;
        }
    }
    RtlLeaveCriticalSection(self->lock);
}
