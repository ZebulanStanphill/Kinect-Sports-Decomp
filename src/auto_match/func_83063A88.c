typedef struct Node_83063A88 Node_83063A88;
typedef struct List_83063A88 List_83063A88;

struct Node_83063A88 {
    int unk00;            /* 0x00 */
    Node_83063A88 *next;  /* 0x04 */
    Node_83063A88 *prev;  /* 0x08 */
    List_83063A88 *owner; /* 0x0c */
};

typedef struct Cursor_83063A88 Cursor_83063A88;

struct Cursor_83063A88 {
    void *node;            /* 0x00 */
    int unk04;             /* 0x04 */
    Cursor_83063A88 *next; /* 0x08 */
    List_83063A88 *list;   /* 0x0c */
};

struct List_83063A88 {
    Node_83063A88 *head;      /* 0x00 */
    Node_83063A88 *tail;      /* 0x04 */
    int count;                /* 0x08 */
    int unk0c;                /* 0x0c */
    Cursor_83063A88 *cursors; /* 0x10 */
};

typedef struct Walker_83063A88 Walker_83063A88;

typedef struct WalkerVtbl_83063A88 {
    void *slot0;
    Node_83063A88 *(*Next)(Walker_83063A88 *self, Node_83063A88 *node); /* 0x04 */
} WalkerVtbl_83063A88;

struct Walker_83063A88 {
    WalkerVtbl_83063A88 *vtbl; /* 0x00 */
    Node_83063A88 *first;      /* 0x04 */
    Node_83063A88 *current;    /* 0x08 */
};

typedef struct Owner_83063A88 {
    char pad00[0x10];
    unsigned char locked; /* 0x10 */
    char pad11[0x1b];
    Node_83063A88 *first; /* 0x2c */
} Owner_83063A88;

extern void fn_8306AB38(List_83063A88 *list, Node_83063A88 *node);
extern void fn_83065C28(Node_83063A88 *node);
extern WalkerVtbl_83063A88 lbl_8217E690;

void fn_83063A88(Owner_83063A88 *self)
{
    Walker_83063A88 walker;
    List_83063A88 list;
    Node_83063A88 *node;
    Node_83063A88 *next;
    Cursor_83063A88 *cursor;

    if (self->locked != 0 || self->first == 0) {
        return;
    }
    walker.first = self->first;
    walker.current = self->first;
    list.head = 0;
    walker.vtbl = &lbl_8217E690;
    list.tail = 0;
    list.count = 0;
    list.cursors = 0;
    do {
        fn_8306AB38(&list, walker.current);
        walker.current = walker.vtbl->Next(&walker, walker.current);
    } while (walker.current != 0);
    for (node = list.head; node != 0; node = next) {
        next = node->next;
        fn_83065C28(node);
    }
    self->first = 0;
    for (cursor = list.cursors; cursor != 0; cursor = cursor->next) {
        cursor->list = 0;
        cursor->node = 0;
    }
}
