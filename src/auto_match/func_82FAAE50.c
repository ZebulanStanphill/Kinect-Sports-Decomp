typedef struct Owner_82FAAE50 {
    char pad0[0x34];
    unsigned char flags; /* 0x34 */
} Owner_82FAAE50;

typedef struct Info_82FAAE50 {
    int pad0[2];
    int time; /* 0x08 (node 0x0c) */
    int pad0c;
    Owner_82FAAE50 *owner; /* 0x10 (node 0x14) */
    unsigned int flags;    /* 0x14 (node 0x18) */
} Info_82FAAE50;

typedef struct Node_82FAAE50 {
    struct Node_82FAAE50 *next; /* 0x0 */
    Info_82FAAE50 info;         /* 0x4 */
} Node_82FAAE50;

typedef struct List_82FAAE50 {
    Node_82FAAE50 *head;
} List_82FAAE50;

typedef struct Iterator_82FAAE50 {
    Node_82FAAE50 *node;
    Node_82FAAE50 *previous;
} Iterator_82FAAE50;

typedef struct Timer_82FAAE50 {
    char pad0[0x2c];
    List_82FAAE50 list; /* 0x2c */
} Timer_82FAAE50;

extern void fn_82FACC70(Owner_82FAAE50 *owner, int a, int b);
extern void fn_82FABA50(List_82FAAE50 *list, Node_82FAAE50 *node, Node_82FAAE50 *previous);

void fn_82FAAE50(Timer_82FAAE50 *self)
{
    Iterator_82FAAE50 it;
    Iterator_82FAAE50 next;
    Node_82FAAE50 *node;
    Info_82FAAE50 *info;
    int time;

    it.node = self->list.head;
    it.previous = 0;
    while (it.node != 0) {
        node = it.node;
        info = &node->info;
        time = info->time - 0x400;
        info->time = time;
        if ((int)info->owner != 0) {
            if ((info->owner->flags & 0x80) != 0) {
                fn_82FACC70(info->owner, 0, 0x400);
            }
        } else if ((info->flags & 0x80000000) == 0 && time < 0) {
            next.node = node->next;
            next.previous = it.previous;
            fn_82FABA50(&self->list, node, it.previous);
            it = next;
            continue;
        }
        it.previous = node;
        it.node = node->next;
    }
}
