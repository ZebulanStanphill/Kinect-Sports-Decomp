typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83214478;
extern void fn_828E8448(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_83141698(void)
{
    unsigned char it[16];
    fn_828E8448(it, &lbl_83214478, *lbl_83214478.head, lbl_83214478.head);
    fn_8265CA20(lbl_83214478.head);
}
