typedef struct { char *data; int len; } Str;

int fn_82D04498(Str *s, char c, int start, int pos)
{
    int i;
    if (pos > s->len - 1)
        pos = s->len - 1;
    for (i = pos - 1; i >= start; i--) {
        if (s->data[i] == c)
            return i;
    }
    return -1;
}
