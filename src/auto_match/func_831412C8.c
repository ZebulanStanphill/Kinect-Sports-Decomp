typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83214368;
extern void fn_8251E8A8(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_831412C8(void)
{
    unsigned char it[16];
    fn_8251E8A8(it, &lbl_83214368, *lbl_83214368.head, lbl_83214368.head);
    fn_8265CA20(lbl_83214368.head);
}
