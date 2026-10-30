typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83213F30;
extern void fn_828A3330(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_83140F98(void)
{
    unsigned char it[16];
    fn_828A3330(it, &lbl_83213F30, *lbl_83213F30.head, lbl_83213F30.head);
    fn_8265CA20(lbl_83213F30.head);
}
