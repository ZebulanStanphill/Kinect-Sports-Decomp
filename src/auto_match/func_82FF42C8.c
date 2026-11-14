typedef struct IdList_82FF42C8 {
    unsigned int *begin;
    unsigned int *end;
} IdList_82FF42C8;

typedef struct Node_82FF42C8 {
    char pad0[0x14];
    struct Node_82FF42C8 *next;
    char pad18[0x58];
    unsigned int id;
} Node_82FF42C8;

typedef struct Owner_82FF42C8 {
    char pad0[0x7c];
    Node_82FF42C8 *first;
} Owner_82FF42C8;

extern void fn_82FEF530(Node_82FF42C8 *node, unsigned int values, unsigned int mask);

void fn_82FF42C8(Owner_82FF42C8 *self, unsigned int values, unsigned int mask, unsigned int id, IdList_82FF42C8 *excluded)
{
    Node_82FF42C8 *node;
    for (node = self->first; node != 0; node = node->next) {
        if (excluded != 0) {
            if (id == 0) {
                unsigned char found = 0;
                unsigned int *p;
                for (p = excluded->begin; p != excluded->end; p++) {
                    if (*p == node->id) {
                        found = 1;
                        break;
                    }
                }
                if (found)
                    continue;
            } else if (node->id != id)
                continue;
            fn_82FEF530(node, values, mask);
        } else {
            if (id != 0 && node->id != id)
                continue;
            fn_82FEF530(node, values, mask);
        }
    }
}
