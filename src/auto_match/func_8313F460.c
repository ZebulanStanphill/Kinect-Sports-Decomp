typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83298F78;
extern void fn_8251E8A8(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_8313F460(void)
{
    unsigned char it[16];
    fn_8251E8A8(it, &lbl_83298F78, *lbl_83298F78.head, lbl_83298F78.head);
    fn_8265CA20(lbl_83298F78.head);
}
