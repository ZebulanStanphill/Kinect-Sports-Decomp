typedef struct { char pad[0x28]; unsigned int n; } S;
int fn_823AA3C8(S *s, unsigned int a, unsigned int b)
{
    unsigned int last;
    if (a == b) {
        last = s->n - 1;
        if (a >= last || b >= last) return 1;
    }
    return 0;
}
