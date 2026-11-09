typedef struct {
    int a;
    int b;
    unsigned int flags;
} S;

int fn_828243B8(S *p)
{
    return (p->flags & 64u) > 0;
}
