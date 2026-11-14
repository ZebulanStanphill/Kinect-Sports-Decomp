typedef struct Node_82D02EC0 {
    int pad0;
    unsigned int sizeAndFlags;
    char pad8[8];
    struct Node_82D02EC0 *next;
    struct Node_82D02EC0 *child;
} Node_82D02EC0;

unsigned int fn_82D02EC0(void *self, Node_82D02EC0 *node, unsigned int maxSize)
{
    while (node != 0) {
        unsigned int size = node->sizeAndFlags & ~3;
        if (size > maxSize) {
            maxSize = size;
        }
        if (node->child != 0) {
            node = node->child;
        } else {
            node = node->next;
        }
    }
    return maxSize;
}
