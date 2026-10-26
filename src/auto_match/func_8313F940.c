typedef struct Node { struct Node *next; } Node;
typedef struct List { int x0; Node *head; } List;
extern void fn_82594FD0(Node **ret, Node *first, Node *last);
extern void fn_8265CA20(void *p);
extern List lbl_83297004;

void fn_8313F940(void)
{
    Node *it;
    fn_82594FD0(&it, lbl_83297004.head->next, lbl_83297004.head);
    fn_8265CA20(lbl_83297004.head);
}
