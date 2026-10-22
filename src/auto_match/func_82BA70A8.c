typedef struct Node { struct Node *next; } Node;
typedef struct Env {
    char pad[0x59c];
    void (*free_fn)(void *ctx, void *p);
    int pad2;
    void *ctx;
} Env;
typedef struct S {
    Env *env;
    Node *head;
    int a, b, c, d;
} S;

void fn_82BA70A8(S *s)
{
    Node *n = s->head;
    while (n != 0) {
        Node *next = n->next;
        s->env->free_fn(s->env->ctx, n);
        n = next;
    }
    s->head = 0;
    s->d = 0;
    s->c = 0;
    s->a = 0;
    s->b = 0;
}
