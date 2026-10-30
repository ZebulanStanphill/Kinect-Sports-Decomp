typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_8321449C;
extern void fn_828E8B50(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_83141858(void)
{
    unsigned char it[16];
    fn_828E8B50(it, &lbl_8321449C, *lbl_8321449C.head, lbl_8321449C.head);
    fn_8265CA20(lbl_8321449C.head);
}
