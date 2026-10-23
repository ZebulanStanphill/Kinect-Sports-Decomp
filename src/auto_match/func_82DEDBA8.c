extern void fn_82D88EF8(void *a, void *b);

typedef struct E {
    int a;
    int b;
    void *p;
} E;

typedef struct S {
    int pad0[2];
    E *items;
    int count;
    int pad10[4];
    void **arr;
    int n;
} S;

void fn_82DEDBA8(void *ctx, S *s)
{
    int i;
    for (i = 0; i < s->n; i++) {
        fn_82D88EF8(ctx, s->arr[i]);
    }
    for (i = 0; i < s->count; i++) {
        if (s->items[i].p) {
            fn_82D88EF8(ctx, s->items[i].p);
        }
    }
}
