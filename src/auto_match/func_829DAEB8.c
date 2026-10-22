typedef struct {
    int a, b, c;
} Entry;

typedef struct {
    int count;
    Entry e[10];
} Table;

extern unsigned char fn_829DAE58(int *out, const char *str, const char **cursor);

int fn_829DAEB8(Table *t, const char *str)
{
    Entry *e = t->e;
    const char *cur;
    unsigned int i;

    t->count = 0;
    cur = 0;
    if (!fn_829DAE58(&e->a, str, &cur) || !fn_829DAE58(&e->b, 0, &cur) || !fn_829DAE58(&e->c, 0, &cur))
        return 0x80004005;
    t->count++;
    e++;
    for (i = 1; i < 10; i++, e++) {
        if (!fn_829DAE58(&e->a, 0, &cur) || !fn_829DAE58(&e->b, 0, &cur) || !fn_829DAE58(&e->c, 0, &cur))
            return 0x80004005;
        t->count++;
        if (cur != 0 && *cur == 0)
            return 0;
    }
    return 0x80004005;
}
