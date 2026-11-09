typedef struct {
    int a;
    int b;
    unsigned int flags;
} S;

int fn_82824308(S *p)
{
    return (p->flags & 2u) > 0;
}
