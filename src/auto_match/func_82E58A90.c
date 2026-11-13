typedef struct Node_82E58A90 {
    int data;
    struct Node_82E58A90 *next;
} Node_82E58A90;

typedef struct Pool_82E58A90 {
    Node_82E58A90 *freeList;
    char pad4[0xdc];
    Node_82E58A90 *used;
    int usedCount;
    int usedTail;
} Pool_82E58A90;

void fn_82E58A90(Pool_82E58A90 *p)
{
    while (p->used != 0) {
        Node_82E58A90 *n = p->used;
        Node_82E58A90 *next = n->next;
        n->next = p->freeList;
        p->freeList = n;
        p->used = next;
    }
    p->usedTail = 0;
    p->usedCount = 0;
}
