typedef struct Obj_82269B00 {
    char pad0[0x40];
    unsigned int key;          /* 0x40 */
    char pad44[0xdc - 0x44];
    int value;                 /* 0xdc */
} Obj_82269B00;

typedef struct Node_82269B00 {
    struct Node_82269B00 *next;   /* 0x0 */
    struct Node_82269B00 *prev;   /* 0x4 */
    Obj_82269B00 *obj;            /* 0x8 */
} Node_82269B00;

typedef struct List_82269B00 {
    Node_82269B00 *head;
} List_82269B00;

typedef struct Msg_82269B00 {
    int type;     /* 0x0 */
    int unused;   /* 0x4 */
    int zero;     /* 0x8 */
    int value;    /* 0xc */
    int user;     /* 0x10 */
} Msg_82269B00;

typedef void (*Callback_82269B00)(Msg_82269B00 *msg);

typedef struct Self_82269B00 {
    char pad0[0x2cc];
    List_82269B00 *list;          /* 0x2cc */
    char pad2d0[0x368 - 0x2d0];
    Callback_82269B00 cb;         /* 0x368 */
    int user;                     /* 0x36c */
} Self_82269B00;

extern void fn_82269BB8(Self_82269B00 *self);
extern void fn_82269C50(Self_82269B00 *self, unsigned int kind);

static __forceinline Obj_82269B00 *find_82269B00(List_82269B00 *list, unsigned int key)
{
    Node_82269B00 *head = list->head;
    Node_82269B00 *n;
    for (n = head->next; n != head; n = n->next) {
        if (n->obj->key == key)
            return n->obj;
    }
    return 0;
}

void fn_82269B00(Self_82269B00 *self, unsigned int kind)
{
    Callback_82269B00 cb;
    Obj_82269B00 *obj;
    int value;
    Msg_82269B00 msg;

    switch (kind) {
    case 0:
    case 5:
        cb = self->cb;
        if (cb != 0) {
            obj = find_82269B00(self->list, kind);
            value = obj->value;
            msg.type = 1;
            msg.zero = 0;
            msg.value = value;
            msg.user = self->user;
            cb(&msg);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        fn_82269C50(self, kind);
        break;
    case 6:
        fn_82269BB8(self);
        break;
    }
}
