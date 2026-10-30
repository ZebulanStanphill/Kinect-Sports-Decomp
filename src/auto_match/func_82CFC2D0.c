typedef struct { char *data; int len; } Str_82CFC2D0;

int fn_82CFC2D0(Str_82CFC2D0 *s, char c, int start, int end)
{
    int i;

    for (i = start; i < s->len - 1 && i < end; i++) {
        if (s->data[i] == c)
            return i;
    }
    return -1;
}
