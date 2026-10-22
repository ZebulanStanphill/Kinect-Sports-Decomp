typedef struct Node {
    char pad[0x1c];
    unsigned int count;
    unsigned int *children;
    char pad2[4];
    unsigned int mark;
} Node;

int fn_8294B608(int a, Node **nodes, Node *n, unsigned int v)
{
    unsigned int i;
    if (n->mark != v) {
        n->mark = v;
        for (i = 0; i < n->count; i++)
            fn_8294B608(a, nodes, nodes[n->children[i]], v);
    }
    return 0;
}
