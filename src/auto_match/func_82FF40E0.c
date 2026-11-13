typedef struct Node_82FF40E0 {
    char pad0[0x14];
    struct Node_82FF40E0 *next;
    char pad18[0x58];
    unsigned int id;
} Node_82FF40E0;

typedef struct Owner_82FF40E0 {
    char pad0[0x7c];
    Node_82FF40E0 *first;
} Owner_82FF40E0;

extern void fn_82FF18E8(Node_82FF40E0 *node, float t, void *arg, unsigned char flag);

void fn_82FF40E0(Owner_82FF40E0 *self, float t, unsigned int id, void *arg, unsigned char flag)
{
    Node_82FF40E0 *node;
    unsigned char all = id == 0;

    for (node = self->first; node != 0; node = node->next) {
        if (all || node->id == id) {
            fn_82FF18E8(node, t, arg, flag);
        }
    }
}
