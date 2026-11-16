typedef struct Node_825B9678 {
    int next;                       /* 0x00 */
    struct Node_825B9678 *previous; /* 0x04 */
    char padding[0x7c];
    unsigned char active; /* 0x84 */
    unsigned char type;   /* 0x85 */
    unsigned char unknown;
    unsigned char flags; /* 0x87 */
    char padding88[8];
} Node_825B9678;

extern Node_825B9678 lbl_83270090;
extern void *fn_82522D98(unsigned int);
extern void *XMemSet(void *, int, unsigned int);

Node_825B9678 *fn_825B9678(int type)
{
    Node_825B9678 *created = fn_82522D98(0x90);
    Node_825B9678 *tail;
    Node_825B9678 *previous;

    XMemSet(created, 0, 0x90);
    tail = &lbl_83270090;
    while (tail->next != 0) {
        tail = (Node_825B9678 *)tail->next;
    }
    previous = tail->previous;
    tail->previous = created;
    created->next = (int)tail;
    created->previous = previous;
    if (previous) {
        previous->next = (int)created;
    }
    created->type = type;
    created->active = 1;
    created->flags = 0;
    return created;
}
