typedef struct Item_8257E880 {
    char pad[0x78];
    float value;
} Item_8257E880;

typedef struct Node_8257E880 {
    Item_8257E880 *item;
    void (*destroy)();
    void (*copy)();
    void (*release)();
    struct Node_8257E880 *next;
} Node_8257E880;

typedef struct Owner_8257E880 {
    char pad[0x10];
    Node_8257E880 *head;
} Owner_8257E880;

extern void *fn_82522D98(unsigned int);
extern void fn_825D5998(Item_8257E880 *);
extern void fn_825D5B08(void);
extern void fn_82BA02A8(void);
extern void fn_825D5108(void);

void fn_8257E880(void *self, float value)
{
    Owner_8257E880 *owner = *(Owner_8257E880 **)((char *)self + 0x93c);
    Item_8257E880 *item = owner->head ? owner->head->item : 0;
    if (!item) {
        item = (Item_8257E880 *)fn_82522D98(0x84);
        fn_825D5998(item);
        if (item && fn_825D5B08) {
            Node_8257E880 *node = (Node_8257E880 *)fn_82522D98(20);
            if (node) {
                node->item = item;
                node->destroy = fn_82BA02A8;
                node->copy = fn_825D5108;
                node->release = fn_825D5B08;
                node->next = owner->head;
                owner->head = node;
            }
        }
    }
    item->value = value;
}
