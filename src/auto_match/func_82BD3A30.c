typedef struct { int a; int b; void *c; int d; } Rec_82BD3A30;
typedef struct N_82BD3A30 N_82BD3A30;
struct N_82BD3A30 { Rec_82BD3A30 *rec; N_82BD3A30 *next; };
typedef struct { N_82BD3A30 *head; N_82BD3A30 *tail; } Q_82BD3A30;
typedef struct {
    char pad0[8];
    void *stream;
    unsigned int kind;
    char pad10[0x2c - 0x10];
    Q_82BD3A30 queue;
} Obj_82BD3A30;

extern void XMemSet(void *dst, int value, int size);
extern int fn_82BD7AE8(void *stream, unsigned int kind, Rec_82BD3A30 *rec);

void fn_82BD3A30(Obj_82BD3A30 *self, N_82BD3A30 *n)
{
    Q_82BD3A30 *q;

    XMemSet(n->rec->c, 0, n->rec->b);
    if (fn_82BD7AE8(self->stream, self->kind, n->rec) < 0) {
        n->rec->a = 0;
        n->rec->b = n->rec->d;
    }
    n->next = 0;
    q = &self->queue;
    if (q->tail != 0) {
        q->tail->next = n;
    } else {
        q->head = n;
    }
    q->tail = n;
}
