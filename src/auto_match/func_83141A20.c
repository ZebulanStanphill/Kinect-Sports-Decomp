typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83214554;
extern void fn_828EF4E8(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_83141A20(void)
{
    unsigned char it[16];
    fn_828EF4E8(it, &lbl_83214554, *lbl_83214554.head, lbl_83214554.head);
    fn_8265CA20(lbl_83214554.head);
}
