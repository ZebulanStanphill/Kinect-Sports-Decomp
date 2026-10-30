typedef struct { int a; int b; int c; int d; } Rec_82BDC0B0;
typedef struct N_82BDC0B0 N_82BDC0B0;
struct N_82BDC0B0 { Rec_82BDC0B0 *rec; N_82BDC0B0 *next; };
typedef struct { N_82BDC0B0 *head; N_82BDC0B0 *tail; } Q_82BDC0B0;
extern int fn_82BD7AE8(void *, int, Rec_82BDC0B0 *);

void fn_82BDC0B0(char *base, int idx, N_82BDC0B0 *n)
{
    Rec_82BDC0B0 *rec = n->rec;
    int hr = fn_82BD7AE8(*(void **)(base + (idx + 0x14) * 4), 2, rec);
    Q_82BDC0B0 *q;
    if (hr < 0) {
        rec->a = 0;
        rec->b = rec->d;
    }
    n->next = 0;
    q = (Q_82BDC0B0 *)(base + idx * 8 + 0x64);
    if (q->tail != 0) {
        q->tail->next = n;
    } else {
        q->head = n;
    }
    q->tail = n;
}
