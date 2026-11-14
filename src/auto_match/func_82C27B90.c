typedef struct Item_82C27B90 {
    int pad[2];
    unsigned __int64 key;       /* 0x08 */
} Item_82C27B90;

typedef struct Node_82C27B90 {
    Item_82C27B90 *item;        /* 0x00 */
    int pad;
    struct Node_82C27B90 *next; /* 0x08 */
    struct Node_82C27B90 *prev; /* 0x0c */
} Node_82C27B90;

typedef struct Owner_82C27B90 {
    char pad[0x94];
    Node_82C27B90 *head;        /* 0x94 */
} Owner_82C27B90;

typedef struct Self_82C27B90 {
    char pad[0x2c];
    Owner_82C27B90 *owner;      /* 0x2c */
} Self_82C27B90;
int fn_82C27B90(Self_82C27B90 *self, Node_82C27B90 *node)
{
    Owner_82C27B90 *owner = self->owner;
    Node_82C27B90 *cur;
    unsigned __int64 key;

    node->next = 0;
    node->prev = 0;
    cur = owner->head;
    key = node->item->key;
    if (cur == 0) {
        owner->head = node;
        return 0;
    }
    while (cur != 0) {
        if (key >= cur->item->key) {
            node->next = cur;
            node->prev = cur->prev;
            if (cur->prev != 0)
                cur->prev->next = node;
            else
                owner->head = node;
            cur->prev = node;
            return 0;
        }
        if (cur->next == 0) {
            node->prev = cur;
            node->next = 0;
            cur->next = node;
            return 0;
        }
        cur = cur->next;
    }
    return 0;
}
