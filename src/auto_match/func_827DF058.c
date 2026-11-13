/* Whether `id` is in either of two std::list-style rings (sentinel at +0x4 and +0x7c; the id is at +0xc of
   each node). */
typedef struct Node_827DF058 {
    struct Node_827DF058 *next;
    struct Node_827DF058 *prev;
    int pad8;
    unsigned int id;                /* 0x0c */
} Node_827DF058;

typedef struct Self_827DF058 {
    int pad0;
    Node_827DF058 *listA;           /* 0x04 */
    char pad8[0x7c - 0x8];
    Node_827DF058 *listB;           /* 0x7c */
} Self_827DF058;

int fn_827DF058(Self_827DF058 *self, unsigned int id)
{
    Node_827DF058 *n;

    for (n = self->listA->next; n != self->listA; n = n->next) {
        if (n->id == id)
            return 1;
    }
    for (n = self->listB->next; n != self->listB; n = n->next) {
        if (n->id == id)
            return 1;
    }
    return 0;
}
