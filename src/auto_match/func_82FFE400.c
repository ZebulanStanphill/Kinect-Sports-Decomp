typedef struct { unsigned int a, b, c; } E;
typedef struct { E *first; E *last; } V;

static E *find(V *v, unsigned int key)
{
    E *f = v->first;
    E *l = v->last;
    for (; f != l; ++f)
        if (f->a == key)
            break;
    return f;
}

void fn_82FFE400(V *v, unsigned int key)
{
    E *it = find(v, key);
    if (it != v->last) {
        if ((unsigned int)(v->last - v->first) > 1)
            *it = v->last[-1];
        v->last--;
    }
}
