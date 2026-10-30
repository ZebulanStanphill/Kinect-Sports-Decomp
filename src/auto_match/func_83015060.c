typedef struct { int v[7]; } E;
typedef struct { E *begin; E *end; } V;
extern void _blkmov(void *dst, void *src, unsigned int n);
E **fn_83015060(E **out, V *v, E **where)
{
    E *it = *where;
    E *last = v->end - 1;
    if (it < last)
        _blkmov(it, it + 1, (((unsigned int)((char *)last - (char *)it) - 1) / sizeof(E) + 1) * sizeof(E) & ~3u);
    v->end--;
    *out = *where;
    return out;
}
