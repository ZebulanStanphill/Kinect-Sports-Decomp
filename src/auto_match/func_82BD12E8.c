extern void fn_82B7BEB0(void *heap, void *p);
extern void fn_82BC6DC0(void *p, int flag);

typedef struct Node { char pad[0x1c]; struct Node *next; } Node;
typedef struct { int x0, x4; Node *head; int xc; void *x10; } Self;

void fn_82BD12E8(Self *s)
{
    Node *n;
    while (s->head != 0) {
        n = s->head;
        s->head = s->head->next;
        if (n != 0) {
            void **blk = (void **)n - 1;
            fn_82B7BEB0(*blk, blk);
        }
    }
    if (s->x10 != 0) {
        fn_82BC6DC0(s->x10, 1);
    }
}
