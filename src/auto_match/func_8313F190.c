typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83297944;
extern void fn_825158E0(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_8313F190(void)
{
    unsigned char it[16];
    fn_825158E0(it, &lbl_83297944, *lbl_83297944.head, lbl_83297944.head);
    fn_8265CA20(lbl_83297944.head);
}
