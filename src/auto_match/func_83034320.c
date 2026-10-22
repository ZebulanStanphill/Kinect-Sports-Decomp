typedef struct Node {
    struct Node *next;
    void *h;
    int x8;
} Node;

typedef struct Pool {
    int x0;
    int x4;
    Node *list;
    unsigned int count;
    unsigned int used;
    int x14;
    Node *arr;
    void *alloc;
} Pool;

extern void fn_82FA5190(void *, void *);
extern void fn_830133B8(void);
extern void fn_83032D88(void *);

int fn_83034320(Pool *p)
{
    Node *n;
    Node *next;
    unsigned char outside;
    unsigned int i;

    if (p->used > 0) {
        fn_830133B8();
        n = p->list;
        while (n != 0) {
            next = n->next;
            if (n < p->arr || n >= p->arr + p->count) {
                outside = 1;
            } else {
                outside = 0;
            }
            if (outside) {
                if (n->h != 0) {
                    fn_83032D88(n->h);
                    n->h = 0;
                }
                fn_82FA5190(p->alloc, n);
            }
            n = next;
        }
        if (p->arr != 0) {
            for (i = 0; i < p->count; i++) {
                Node *e = &p->arr[i];
                if (e->h != 0) {
                    fn_83032D88(e->h);
                    e->h = 0;
                }
            }
            fn_82FA5190(p->alloc, p->arr);
        }
        p->count = 0;
        p->used = 0;
        p->x0 = 0;
        p->x4 = 0;
    }
    return 1;
}
