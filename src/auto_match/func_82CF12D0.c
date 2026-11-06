typedef struct Node_82CF12D0 { float f[16]; double d; } Node_82CF12D0;

extern Node_82CF12D0 *fn_82CF5F58(Node_82CF12D0 *n, double v, int idx);

Node_82CF12D0 *fn_82CF12D0(Node_82CF12D0 *a, Node_82CF12D0 *b, double v, int idx)
{
    Node_82CF12D0 *cur = a;
    Node_82CF12D0 *next;
    if (b != 0 && v <= b->f[idx] + b->d) {
        cur = b;
    }
    while (cur != 0) {
        next = fn_82CF5F58(cur, v, idx);
        if (next == 0) {
            break;
        }
        cur = next;
    }
    return cur;
}
