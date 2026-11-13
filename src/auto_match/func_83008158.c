typedef struct Value_83008158 { int a; int b; int c; } Value_83008158;
typedef struct Pair_83008158 { unsigned int key; Value_83008158 value; } Pair_83008158;
typedef struct Vec_83008158 { Pair_83008158 *begin; Pair_83008158 *end; } Vec_83008158;
extern Pair_83008158 *fn_82FF7E30(Vec_83008158 *v);

static __forceinline int neq(Pair_83008158 *a, Pair_83008158 *b) { return a != b; }

static __forceinline Value_83008158 *find(Vec_83008158 *v, unsigned int key)
{
    Pair_83008158 *it;
    for (it = v->begin; it != v->end; it++) {
        if (it->key == key)
            break;
    }
    return neq(it, v->end) ? &it->value : 0;
}

Value_83008158 *fn_83008158(Vec_83008158 *v, unsigned int key, Value_83008158 value)
{
    Pair_83008158 *p;
    Value_83008158 *r;

    r = find(v, key);
    if (r != 0) {
        *r = value;
    } else if ((p = fn_82FF7E30(v)) != 0) {
        p->key = key;
        p->value = value;
        return &p->value;
    }
    return r;
}
