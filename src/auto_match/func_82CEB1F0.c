typedef struct Block_82CEB1F0 {
    int pad0;
    struct Block_82CEB1F0 *next;
    int pad8[4];
    char *data;
    int count;
    int *offsets;
} Block_82CEB1F0;

int fn_82CEB1F0(Block_82CEB1F0 *head, int idx, char **outPtr, char **outElem)
{
    Block_82CEB1F0 *n;
    int total = head->count;
    int v;
    int off;

    for (n = head->next; n != 0; n = n->next) total = n->count + total;
    n = head;

    v = idx - total;
    do {
        v = n->count + v;
        if (v >= 0) {
        if (n->offsets == 0) return 1;
        off = n->offsets[v];
        if (off < 0) return 1;
        *outPtr = (char *)n->offsets + off;
        *outElem = n->data + v * 24;
        return 0;
        }
        n = n->next;
    } while (n != 0);
    return 1;
}
