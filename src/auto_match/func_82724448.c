typedef struct Node_82724448 Node_82724448;
typedef struct ItemVt_82724448 {
    void *pad[2];
    int (*getType)(void *self);   /* 0x8 */
} ItemVt_82724448;
typedef struct Item_82724448 { ItemVt_82724448 *vt; } Item_82724448;
struct Node_82724448 {
    char pad0[0x10];
    Item_82724448 item;      /* 0x10 */
    Node_82724448 *parent;   /* 0x14 */
    char pad18[0x1c];
    void *value;             /* 0x34 */
};

void *fn_82724448(Node_82724448 *n)
{
    Node_82724448 *p;
    if (n->value != 0)
        return n->value;
    p = n->parent;
    if (p != 0 && p->item.vt->getType(&p->item) == 0xd)
        return fn_82724448(p);
    return 0;
}
