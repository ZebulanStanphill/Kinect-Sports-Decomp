typedef int (*code)();

typedef struct Node {
    struct Node *next;
    code fn;
} Node;

int fn_82C7D188(Node **param_1)
{
    Node *n = *param_1;
    int r = 0;
    if (n != 0) {
        *param_1 = n->next;
        r = n->fn(param_1);
        *param_1 = n;
    }
    return r;
}
