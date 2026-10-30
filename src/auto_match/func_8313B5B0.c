typedef struct Node_8313B5B0 {
    struct Node_8313B5B0 *next;
    struct Node_8313B5B0 *prev;
} Node_8313B5B0;
typedef struct List_8313B5B0 {
    Node_8313B5B0 *head;
    int size;
} List_8313B5B0;
extern List_8313B5B0 lbl_83283E30;
extern void fn_8265CA20(void *p);

void fn_8313B5B0(void)
{
    Node_8313B5B0 *p;
    Node_8313B5B0 *n;

    p = lbl_83283E30.head->next;
    lbl_83283E30.head->next = lbl_83283E30.head;
    lbl_83283E30.head->prev = lbl_83283E30.head;
    lbl_83283E30.size = 0;
    while (p != lbl_83283E30.head) {
        n = p->next;
        fn_8265CA20(p);
        p = n;
    }
    fn_8265CA20(lbl_83283E30.head);
}
