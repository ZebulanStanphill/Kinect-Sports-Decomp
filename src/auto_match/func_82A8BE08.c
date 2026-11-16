typedef struct Node_82A8BE08 {
    unsigned int parent; /* 0x00 */
    int first;           /* 0x04 */
    int next;            /* 0x08 */
    char pad[0x54];
} Node_82A8BE08;

typedef struct Tree_82A8BE08 {
    int count;            /* 0x00 */
    Node_82A8BE08 *nodes; /* 0x04 */
} Tree_82A8BE08;

void fn_82A8BE08(Tree_82A8BE08 *self)
{
    Tree_82A8BE08 *selfCopy = self;
    int index;
    for (index = selfCopy->count - 1; index >= 0; --index) {
        int previous = 0xff;
        int child;
        selfCopy->nodes[index].first = 0xff;
        selfCopy->nodes[index].next = 0xff;
        for (child = selfCopy->count - 1; child > index; --child) {
            if (selfCopy->nodes[child].parent == (unsigned int)index) {
                selfCopy->nodes[index].first = child;
                previous = child;
                break;
            }
        }
        for (--child; child > index; --child) {
            if (selfCopy->nodes[child].parent == (unsigned int)index) {
                selfCopy->nodes[previous].next = child;
                previous = child;
            }
        }
    }
}
