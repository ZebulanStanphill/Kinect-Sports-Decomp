typedef struct Pair { unsigned int key; int value; } Pair;
typedef struct Vec { Pair *begin; Pair *end; } Vec;
extern Pair *fn_830298E8(Vec *v);

static __forceinline int neq(Pair *a, Pair *b) { return a != b; }

static __forceinline int *find(Vec *v, unsigned int key)
{
    Pair *it;
    for (it = v->begin; it != v->end; it++) {
        if (it->key == key)
            break;
    }
    return neq(it, v->end) ? &it->value : 0;
}

int *fn_83013B98(Vec *v, unsigned int key, int value)
{
    Pair *p;
    int *r;

    r = find(v, key);
    if (r != 0) {
        *r = value;
    } else if ((p = fn_830298E8(v)) != 0) {
        p->key = key;
        p->value = value;
        return &p->value;
    }
    return r;
}
