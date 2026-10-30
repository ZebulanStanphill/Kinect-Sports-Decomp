typedef struct { char *data; int len; } Str_82D04440;

int fn_82D04440(Str_82D04440 *s, char c, int start, int end)
{
    int lim = s->len - 1;
    int i;

    if (end >= lim)
        end = lim;
    for (i = start; i < end; i++) {
        if (s->data[i] == c)
            return i;
    }
    return -1;
}
