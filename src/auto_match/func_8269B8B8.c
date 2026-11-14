typedef struct Node_8269B8B8 {
    char pad0[0x70];
    struct Node_8269B8B8 *next;
    struct Node_8269B8B8 *prev;
} Node_8269B8B8;

typedef struct Owner_8269B8B8 {
    char pad0[0xaf4];
    Node_8269B8B8 *head;
    char padAF8[8];
    unsigned int flags;
} Owner_8269B8B8;

extern void fn_8269AE08(Node_8269B8B8 *node, Owner_8269B8B8 *owner);

void fn_8269B8B8(Node_8269B8B8 *node, Owner_8269B8B8 *owner)
{
    fn_8269AE08(node, owner);
    if (node->next != 0) {
        node->next->prev = node->prev;
    }
    if (node->prev != 0) {
        node->prev->next = node->next;
    } else if (owner->head == node) {
        owner->head = node->next;
    }
    node->prev = 0;
    node->next = 0;
    owner->flags |= 0x400;
}
