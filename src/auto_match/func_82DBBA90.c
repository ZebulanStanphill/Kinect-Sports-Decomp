typedef struct Node_82DBBA90 {
    char pad[0x12];
    unsigned short info;
    struct Node_82DBBA90 *next;
} Node_82DBBA90;

typedef struct Tail_82DBBA90 {
    char pad[0xc];
    Node_82DBBA90 *first;
    unsigned short info;
} Tail_82DBBA90;

typedef struct Owner_82DBBA90 {
    char pad[0x10];
    Node_82DBBA90 *head;
    char pad2[0x1c];
    Tail_82DBBA90 *tail;
} Owner_82DBBA90;

/* Replaces `node` in the owner's singly linked list by `next`. */
void fn_82DBBA90(Owner_82DBBA90 *self, Node_82DBBA90 *node, Node_82DBBA90 *next, unsigned short info)
{
    Node_82DBBA90 *n = self->head;
    Tail_82DBBA90 *tail = self->tail;

    if (n == 0) {
    } else if (n == node) {
        self->head = next;
    } else {
        Node_82DBBA90 *prev;
        Node_82DBBA90 **link;

        prev = n;
        link = &n->next;
        n = *link;
        while (n != node) {
            prev = n;
            link = &n->next;
            n = *link;
        }
        *link = next;
        prev->info = info;
        return;
    }
    if (tail != 0) {
        tail->first = next;
        tail->info = info;
    }
}
