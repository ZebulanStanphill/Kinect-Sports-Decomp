// Kinect Sports retail 4D5308C9, function 0x82F71D30 (100 bytes).
// Releases every node of a singly linked free list through the owner callback at +4
// (the current node is kept at +0xc while the callback runs).

typedef struct Node_82F71D30 { struct Node_82F71D30 *next; } Node_82F71D30;
typedef struct {
    int unk0;
    void (*release)(Node_82F71D30 *n);
    Node_82F71D30 *head;
    Node_82F71D30 *cur;
} Pool_82F71D30;

void fn_82F71D30(Pool_82F71D30 *p)
{
    if (p->release != 0) {
        while ((p->cur = p->head) != 0) {
            p->head = p->cur->next;
            p->release(p->cur);
        }
    }
}
