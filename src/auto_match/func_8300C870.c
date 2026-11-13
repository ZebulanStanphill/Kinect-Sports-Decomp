// Kinect Sports retail 4D5308C9, function 0x8300C870 (172 bytes).
// Pushes a node onto the front of the list returned by fn_82FF7548(lbl_832642E8):
// returns 2 when there is no list, else 1.

typedef struct Node_8300C870 {
    int unk0;
    struct Node_8300C870 *next;
} Node_8300C870;

typedef struct {
    char pad0[0x14];
    Node_8300C870 *head;
    Node_8300C870 *tail;
    int count;
} List_8300C870;

extern List_8300C870 *fn_82FF7548(int key);
extern int lbl_832642E8;

int fn_8300C870(Node_8300C870 *n)
{
    List_8300C870 *l = fn_82FF7548(lbl_832642E8);
    if (l != 0) {
        if (l->head == 0) {
            l->tail = n;
            l->head = n;
            n->next = 0;
        } else {
            n->next = l->head;
            l->head = n;
        }
        l->count++;
        return 1;
    }
    return 2;
}
