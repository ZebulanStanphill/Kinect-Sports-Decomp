typedef struct Node_8299F910 {
    char pad[0x38];
    unsigned int parent;
    unsigned int locked;
} Node_8299F910;

typedef struct Set_8299F910 {
    char pad[0xc];
    unsigned int count;
    unsigned int *ids;
} Set_8299F910;

typedef struct Graph_8299F910 {
    char pad[0x14];
    Node_8299F910 **nodes;
} Graph_8299F910;

Set_8299F910 *fn_8299F910(Graph_8299F910 *self, Set_8299F910 **sets, unsigned int setCount,
                          unsigned int *ids, unsigned int idCount, int loose)
{
    unsigned int i;
    for (i = 0; i < setCount; i++) {
        if (sets[i] != 0 && sets[i]->count >= idCount) {
            int ok = 1;
            unsigned int k;
            for (k = 0; k < idCount; k++) {
                unsigned int id = ids[k];
                Node_8299F910 *node = self->nodes[id];
                unsigned int j = 0;
                if (loose != 0) {
                    for (j = 0; j < sets[i]->count; j++) {
                        unsigned int v = sets[i]->ids[j];
                        if (v == id || v == node->parent)
                            break;
                    }
                    if (j == sets[i]->count)
                        ok = 0;
                } else {
                    for (j = 0; j < sets[i]->count; j++) {
                        unsigned int v = sets[i]->ids[j];
                        if ((v == id && node->locked == 0) ||
                            (v == node->parent && self->nodes[v]->locked == 0))
                            break;
                    }
                    ok = (j != sets[i]->count) ? ok : 0;
                }
            }
            if (ok)
                return sets[i];
        }
    }
    return 0;
}
