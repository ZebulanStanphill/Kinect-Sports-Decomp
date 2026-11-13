typedef struct Node_82FA76F0 {
    struct Node_82FA76F0 *next;
    int pad4[2];
    unsigned int flags;
} Node_82FA76F0;

typedef struct {
    Node_82FA76F0 *head;
    int pad4[7];
} List_82FA76F0;

typedef struct {
    Node_82FA76F0 *cur;
    Node_82FA76F0 *prev;
} It_82FA76F0;

extern List_82FA76F0 lbl_831BC680;
extern void fn_82FF7FB8(List_82FA76F0 *l, Node_82FA76F0 *n, Node_82FA76F0 *prev);

void fn_82FA76F0(void)
{
    List_82FA76F0 *l = &lbl_831BC680;
    It_82FA76F0 it;
    it.cur = l->head;
    it.prev = 0;
    while (it.cur != 0) {
        if ((it.cur->flags & 0x40000000) == 0) {
            It_82FA76F0 next;
            next.cur = it.cur->next;
            next.prev = it.prev;
            fn_82FF7FB8(l, it.cur, it.prev);
            it = next;
        } else {
            it.prev = it.cur;
            it.cur = it.cur->next;
        }
    }
}
