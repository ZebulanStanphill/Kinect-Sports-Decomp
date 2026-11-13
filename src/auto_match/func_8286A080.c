typedef struct Node_8286A080 {
    int f0;
    struct Node_8286A080 *next;
    int pad[5];
    void *handle;
    unsigned int id;
} Node_8286A080;
typedef struct Owner_8286A080 {
    char pad[0x424];
    Node_8286A080 *head;
} Owner_8286A080;
extern int fn_82A1E658(void *h);
extern void fn_82877520(Node_8286A080 *n);

int fn_8286A080(Owner_8286A080 *self, unsigned int id)
{
    Node_8286A080 **ph = &self->head;
    Node_8286A080 *n = *ph;
    Node_8286A080 *prev = 0;

    while (n != 0) {
        if (n->id == id) {
            if (n == self->head) {
                self->head = n->next;
            } else {
                prev->next = n->next;
            }
            fn_82A1E658(n->handle);
            fn_82877520(n);
            return 1;
        }
        prev = n;
        n = n->next;
    }
    return 2;
}
