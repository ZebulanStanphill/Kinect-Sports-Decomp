typedef struct Thing_825C44A8 {
    void *key;  /* 0x0 */
    char *name; /* 0x4 */
} Thing_825C44A8;

typedef struct Node1_825C44A8 {
    void *key;                   /* 0x0 */
    int kind;                    /* 0x4 */
    struct Node1_825C44A8 *next; /* 0x8 */
} Node1_825C44A8;

typedef struct Item_825C44A8 {
    void *key;  /* 0x0 */
    void *data; /* 0x4 */
} Item_825C44A8;

typedef struct Node2_825C44A8 {
    Item_825C44A8 *val;          /* 0x0 */
    struct Node2_825C44A8 *next; /* 0x4 */
} Node2_825C44A8;

typedef struct Owner_825C44A8 {
    Node1_825C44A8 *list1; /* 0x0 */
    Node2_825C44A8 *list2; /* 0x4 */
} Owner_825C44A8;

extern char *lbl_831C0394[];
extern void *fn_825FA440(char *name, int arg);
extern void *fn_82522D98(unsigned int size);

Item_825C44A8 *fn_825C44A8(Owner_825C44A8 *o, Thing_825C44A8 *t, int kind, int arg)
{
    Node1_825C44A8 *prev;
    Node1_825C44A8 *cur;
    Node1_825C44A8 *node;
    void *key;
    Item_825C44A8 *item;
    Node2_825C44A8 **slot;
    Node2_825C44A8 *link;

    if (kind < 0 || kind >= 3) {
        return 0;
    }
    prev = 0;
    for (cur = o->list1; cur != 0; cur = cur->next) {
        if (cur->kind == kind) {
            key = cur->key;
            if (key != 0) {
                goto add;
            }
            break;
        }
        prev = cur;
    }
    key = fn_825FA440(kind == 0 ? t->name : lbl_831C0394[kind], arg);
    if (prev != 0) {
        node = prev->next = (Node1_825C44A8 *)fn_82522D98(0xc);
    } else {
        node = o->list1 = (Node1_825C44A8 *)fn_82522D98(0xc);
    }
    node->key = key;
    node->kind = kind;
    node->next = 0;
add:
    item = (Item_825C44A8 *)fn_82522D98(8);
    item->key = key;
    item->data = 0;
    if (o->list2 != 0) {
        slot = &o->list2->next;
        while (*slot != 0) {
            slot = &(*slot)->next;
        }
        link = *slot = (Node2_825C44A8 *)fn_82522D98(8);
    } else {
        link = o->list2 = (Node2_825C44A8 *)fn_82522D98(8);
    }
    link->val = item;
    link->next = 0;
    return item;
}
