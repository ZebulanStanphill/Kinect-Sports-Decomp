typedef struct Tree {
    int comp;
    int *head;
} Tree;

extern Tree lbl_83296FF4;
extern void fn_82825F40(void *out, Tree *t, int first, int *last);
extern void fn_8265CA20(void *p);

void fn_8313F8F8(void)
{
    unsigned char it[16];
    fn_82825F40(it, &lbl_83296FF4, *lbl_83296FF4.head, lbl_83296FF4.head);
    fn_8265CA20(lbl_83296FF4.head);
}
