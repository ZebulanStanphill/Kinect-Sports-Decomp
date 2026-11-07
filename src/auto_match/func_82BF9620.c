typedef struct Node_82BF9620 {
    struct Node_82BF9620 *prev;
    struct Node_82BF9620 *next;
    unsigned short id;
    unsigned short pad;
    void *val;
    char data[1];
} Node_82BF9620;

extern Node_82BF9620 lbl_8322FD08;

extern void fn_82BF95B0(Node_82BF9620 *n);
extern int fn_82BF9038(void *buf, int size, unsigned int offset, int flag);

int fn_82BF9620(unsigned int key, void *val, int noLoad, void **out)
{
    Node_82BF9620 *n;
    Node_82BF9620 *f;
    Node_82BF9620 *p;
    Node_82BF9620 *nx;
    Node_82BF9620 *h;

    for (n = lbl_8322FD08.next; n != &lbl_8322FD08; n = n->next) {
        f = n;
        if (n->id == key)
            break;
    }
    if (n == &lbl_8322FD08) {
        f = lbl_8322FD08.prev;
        fn_82BF95B0(f);
        if (noLoad == 0) {
            int r = fn_82BF9038(f->data, 0x2000, (key + 2) << 13, 1);
            if (r == 0) {
                f->id = 0xffff;
                return r;
            }
        }
        f->id = (unsigned short)key;
    }
    if (val != 0) {
        f->val = val;
    }
    p = f->prev;
    nx = f->next;
    nx->prev = p;
    p->next = nx;
    h = lbl_8322FD08.next;
    f->prev = &lbl_8322FD08;
    f->next = h;
    h->prev = f;
    lbl_8322FD08.next = f;
    *out = f->data;
    return 1;
}
