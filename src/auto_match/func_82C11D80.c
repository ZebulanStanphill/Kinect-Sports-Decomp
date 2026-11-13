typedef struct Node_82C11D80 {
    int m0;
    int m4;
    char pad8[4];
    unsigned mc;
    char pad10[0x2c - 0x10];
    void *m2c;
    int m30;
    char pad34[4];
    struct Node_82C11D80 *m38;
    struct Node_82C11D80 *m3c;
} Node_82C11D80;
typedef struct Disp_82C11D80 Disp_82C11D80;
struct Disp_82C11D80 {
    char pad[0x24];
    int (*f24)(Disp_82C11D80 *, int);
};
typedef struct Q_82C11D80 {
    char pad0[0x14];
    int count;
    Node_82C11D80 *head;
    Node_82C11D80 *tail;
    int m20;
    int state;
} Q_82C11D80;
typedef struct Mgr_82C11D80 {
    int heap;
    char pad4[0x14];
    Disp_82C11D80 *disp;
} Mgr_82C11D80;

extern int fn_82C10B28(int heap, int tag, void *p);

int fn_82C11D80(void *owner, Q_82C11D80 *q, void *reserved, Mgr_82C11D80 *m)
{
    Node_82C11D80 *node;
    int hr;

    hr = 0;
    if (owner == 0) {
        return 0x80070057;
    }
    if (q == 0) {
        return 0x80070057;
    }
    if (m == 0) {
        return 0x80070057;
    }
    node = q->head;
    while (node != 0) {
        if (node->m3c != 0) {
            node->m3c->m38 = 0;
        }
        q->head = node->m3c;
        m->disp->f24(m->disp, node->m0);
        if (node->m2c != 0) {
            hr = fn_82C10B28(m->heap, 0x20, node->m2c);
            if (hr < 0) {
                return hr;
            }
            hr = fn_82C10B28(m->heap, 0x20, &node->m2c);
            if (hr < 0) {
                return hr;
            }
        }
        hr = fn_82C10B28(m->heap, 0x20, &node);
        if (hr < 0) {
            return hr;
        }
        node = q->head;
        q->count--;
    }
    q->count = 0;
    q->m20 = 0;
    q->tail = 0;
    q->head = 0;
    return hr;
}
