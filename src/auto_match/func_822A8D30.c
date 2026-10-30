extern unsigned int fn_828647D8(void *);

typedef struct { void **first; void **last; } Vec;

void *fn_822A8D30(Vec *v, void *key)
{
    void **it;
    for (it = v->first; it != v->last; it++) {
        if (fn_828647D8(*it) == fn_828647D8(key))
            return *it;
    }
    return 0;
}
