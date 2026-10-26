typedef struct Node { struct Node *next; } Node;
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F626F8();
extern Node *lbl_832632CC;

void fn_82F62928(void)
{
    char lock[16];

    fn_82F62680(lock, 0);
    while (lbl_832632CC) {
        Node *p = lbl_832632CC;
        lbl_832632CC = p->next;
        fn_82F626F8(p, 1);
    }
    fn_82F626D0(lock);
}
