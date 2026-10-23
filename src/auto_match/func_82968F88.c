typedef struct Node {
    int pad0[2];
    int child;      /* 0x08 */
    int padc[2];
    int next;       /* 0x14 */
    int pad18[8];
    int alias;      /* 0x38 */
    int pad3c[6];
    unsigned int value; /* 0x54 */
} Node;
typedef struct Tree {
    int pad0[5];
    Node **nodes;   /* 0x14 */
} Tree;

void fn_82968F88(Tree *t, int i, unsigned int v)
{
    Node ***nodes = &t->nodes;
    Node *n;
    while (v != 0) {
        if (i != -1 && (*nodes)[i]->alias != -1) i = (*nodes)[i]->alias;
        n = (*nodes)[i];
        if (n->value < v) n->value = v;
        if (n->child != -1) fn_82968F88(t, n->child, n->value);
        i = n->next;
        if (i == -1) break;
        v = n->value;
    }
}
