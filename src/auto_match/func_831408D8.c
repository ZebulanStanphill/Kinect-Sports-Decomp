typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83213E7C;
extern void fn_828896C8(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_831408D8(void)
{
    unsigned char it[16];
    fn_828896C8(it, &lbl_83213E7C, *lbl_83213E7C.head, lbl_83213E7C.head);
    fn_8265CA20(lbl_83213E7C.head);
}
