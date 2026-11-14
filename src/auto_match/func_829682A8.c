typedef struct Node_829682A8 {
    char pad[0x14];
    int parent;
    int value;
} Node_829682A8;

typedef struct Tree_829682A8 {
    char pad[0x14];
    Node_829682A8 **nodes;
} Tree_829682A8;

unsigned char fn_829682A8(Tree_829682A8 *self, unsigned int a, int aValue, unsigned int b, int bValue)
{
    unsigned int depthA = 0;
    unsigned int depthB = 0;
    unsigned int i;

    for (i = a; i != -1; i = self->nodes[i]->parent)
        depthA++;
    for (i = b; i != -1; i = self->nodes[i]->parent)
        depthB++;
    while (depthA > depthB) {
        aValue = self->nodes[a]->value;
        a = self->nodes[a]->parent;
        depthA--;
    }
    while (depthB > depthA) {
        bValue = self->nodes[b]->value;
        b = self->nodes[b]->parent;
        depthB--;
    }
    while (a != b) {
        Node_829682A8 *na = self->nodes[a];
        Node_829682A8 *nb = self->nodes[b];
        a = na->parent;
        b = nb->parent;
        aValue = na->value;
        bValue = nb->value;
    }
    return aValue != bValue;
}
