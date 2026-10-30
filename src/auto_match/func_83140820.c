typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83212A38;
extern void fn_82887890(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_83140820(void)
{
    unsigned char it[16];
    fn_82887890(it, &lbl_83212A38, *lbl_83212A38.head, lbl_83212A38.head);
    fn_8265CA20(lbl_83212A38.head);
}
