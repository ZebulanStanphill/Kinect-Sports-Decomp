typedef struct Node_82881B18 {
    struct Node_82881B18 *left;
    struct Node_82881B18 *parent;
    struct Node_82881B18 *right;
    unsigned int key;
    int value;
} Node_82881B18;

typedef struct Tree_82881B18 {
    int pad;
    Node_82881B18 *head;
} Tree_82881B18;

extern Tree_82881B18 lbl_83212A00;
extern void fn_8289F160(Node_82881B18 **out, Tree_82881B18 *t, unsigned int *key);

int fn_82881B18(unsigned int param_1)
{
    unsigned int key;
    Node_82881B18 *it;

    key = param_1;
    fn_8289F160(&it, &lbl_83212A00, &key);
    if (it != lbl_83212A00.head) {
        return it->value;
    }
    return 0;
}
