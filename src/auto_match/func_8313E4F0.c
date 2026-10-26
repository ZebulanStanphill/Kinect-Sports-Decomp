typedef struct Node { struct Node *next; } Node;
typedef struct List { int x0; Node *head; } List;
extern void fn_824A1628(Node **ret, Node *first, Node *last);
extern void fn_8265CA20(void *p);
extern List lbl_83292C80;

void fn_8313E4F0(void)
{
    Node *it;
    fn_824A1628(&it, lbl_83292C80.head->next, lbl_83292C80.head);
    fn_8265CA20(lbl_83292C80.head);
}
