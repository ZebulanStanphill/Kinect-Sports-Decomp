typedef struct Node_82B181A0 {
    int pad0[2];
    struct Node_82B181A0 *next;
    int pad1;
    void *owner;
} Node_82B181A0;
typedef struct List_82B181A0 {
    int pad;
    Node_82B181A0 *head;
} List_82B181A0;
extern int fn_82ABE5F8(void *, Node_82B181A0 *, int, int);
extern int fn_82AD20C0(void *, Node_82B181A0 *, void *);

void fn_82B181A0(List_82B181A0 *param_1, void *param_2)
{
    Node_82B181A0 *n;
    while ((n = param_1->head) != 0) {
        if (n->owner != 0) {
            fn_82AD20C0(n->owner, n, param_2);
        } else {
            param_1->head = n->next;
            fn_82ABE5F8(param_2, n, 0x14, 0x1a);
        }
    }
}
