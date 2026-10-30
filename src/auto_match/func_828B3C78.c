typedef struct Item_828B3C78 Item_828B3C78;
typedef struct Query_828B3C78 Query_828B3C78;
typedef struct {
    char pad[0x3c];
    unsigned char (*f3c)(Query_828B3C78 *, Item_828B3C78 *);
} VT_828B3C78;
typedef struct {
    char pad[0x28];
    unsigned int key;
} Key_828B3C78;
struct Query_828B3C78 {
    VT_828B3C78 *vt;
    char pad[0xc];
    Key_828B3C78 *k;
};
struct Item_828B3C78 {
    char pad[0x10];
    Key_828B3C78 *k;
};
typedef struct Node_828B3C78 Node_828B3C78;
struct Node_828B3C78 {
    Node_828B3C78 *next;
    int pad;
    Item_828B3C78 *item;
};
typedef struct {
    char pad[0x20];
    Node_828B3C78 *head;
} Owner_828B3C78;

int fn_828B3C78(Owner_828B3C78 *self, Query_828B3C78 *q)
{
    Node_828B3C78 *n = self->head->next;
    if (n != self->head) {
        do {
            Item_828B3C78 *it = n->item;
            if (q->k->key == it->k->key && q->vt->f3c(q, it) == 1) {
                return 1;
            }
            n = n->next;
        } while (n != self->head);
    }
    return 0;
}
