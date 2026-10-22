typedef struct Node {
    int next;
    int type;
} Node;

Node *fn_825D04D0(Node *p)
{
    int depth;

    depth = 1;
    for (;;) {
        p = (Node *)((char *)p + p->next);
        if (p->type == 0x57 || p->type == 0x6d || p->type == 0x5d || p->type == 0x89) {
            depth++;
        } else if (depth == 1) {
            if (p->type == 0x58) {
                return p;
            }
            if (p->type == 0x59) {
                return p;
            }
        } else if (p->type == 0x59) {
            depth--;
        }
        if (p->type == 0) {
            return 0;
        }
    }
}
