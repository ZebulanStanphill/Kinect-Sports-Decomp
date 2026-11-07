typedef struct Node_82E20790 { struct Node_82E20790 *next; unsigned pad[3]; } Node_82E20790;
extern void *fn_8265C9E0(unsigned);
extern Node_82E20790 *fn_82E204E8(void *, void *);
void fn_82E20790(char *self, void *arg) {
    void *p = fn_8265C9E0(0x10);
    Node_82E20790 *result;
    Node_82E20790 *node;
    if (p) result = fn_82E204E8(p, arg);
    else result = 0;
    node = *(Node_82E20790 **)(self + 0xc);
    if (!node) *(Node_82E20790 **)(self+0xc) = result;
    else {
        while (node->next) node = node->next;
        node->next = result;
    }
}
