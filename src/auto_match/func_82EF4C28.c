void *memset(void *dst, int c, unsigned int n);

typedef struct {
    unsigned int flags;
    int a[6];
    int pad[14];
    int k; /* 0x54 */
} S;

void fn_82EF4C28(S *s)
{
    memset(s->a, 0, sizeof s->a);
    s->k = 3;
    s->flags &= 0x1fffffff;
}
