typedef struct { char *data; int len; } Str_82D04830;

static __forceinline int lower(int c)
{
    if (c >= 'A' && c <= 'Z') {
        c += 'a' - 'A';
    }
    return c;
}

void fn_82D04830(Str_82D04830 *s)
{
    int i;
    for (i = 0; i < s->len - 1; i++) {
        s->data[i] = lower(s->data[i]);
    }
}
