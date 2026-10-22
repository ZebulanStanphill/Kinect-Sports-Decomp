typedef struct Pair { unsigned int key; int value[5]; } Pair;
typedef struct Vec { Pair *begin; Pair *end; } Vec;
extern Pair *fn_83036168();

static int neq(Pair *a, Pair *b) { return a != b; }

static int *find(Vec *v, unsigned int key)
{
    Pair *it;
    for (it = v->begin; it != v->end; it++) {
        if (it->key == key)
            break;
    }
    return neq(it, v->end) ? it->value : 0;
}

int *fn_83036218(Vec *v, unsigned int key)
{
    Pair *p;
    int *r;

    r = find(v, key);
    if (r == 0 && (p = fn_83036168()) != 0) {
        r = p->value;
        p->key = key;
    }
    return r;
}
