typedef struct S {
    int a;
    int b;
    unsigned int flags;
} S;

int fn_82824360(S *p)
{
    return (p->flags & 1u) > 0;
}
