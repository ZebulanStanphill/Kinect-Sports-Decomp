typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83213F20;
extern void fn_828A3330(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_83141040(void)
{
    unsigned char it[16];
    fn_828A3330(it, &lbl_83213F20, *lbl_83213F20.head, lbl_83213F20.head);
    fn_8265CA20(lbl_83213F20.head);
}
