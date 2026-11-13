typedef struct Node_826BDF50 Node_826BDF50;
typedef struct {
    void *f[5];
    unsigned char (*test)(Node_826BDF50 *self, int a, Node_826BDF50 *b);
} NodeVtbl_826BDF50;
struct Node_826BDF50 {
    NodeVtbl_826BDF50 *vt;
    int pad[4];
    Node_826BDF50 *next;
};

int fn_826BDF50(char *self, int a, Node_826BDF50 *target, unsigned char useTest)
{
    Node_826BDF50 *p;
    for (p = (Node_826BDF50 *)(self - 0x10); p != 0; p = p->next) {
        if (useTest) {
            if (p->vt->test(p, a, target))
                return 1;
        } else if (p == target) {
            return 1;
        }
    }
    return 0;
}
