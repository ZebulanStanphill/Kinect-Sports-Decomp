typedef struct {
    int a;
    int b;
    unsigned int flags;
} S;

int fn_82824320(S *p)
{
    return (p->flags & 8u) > 0;
}
