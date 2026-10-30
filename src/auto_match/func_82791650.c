typedef struct { void *data; unsigned int size; } Vec;
typedef struct { Vec *vec; unsigned int idx; } Iter;

extern int fn_827908A8(Vec *v, void *key);

Iter *fn_82791650(Iter *it, Vec *v, void *key)
{
    int i = fn_827908A8(v, key);
    it->vec = v;
    it->idx = 0;
    if (i < 0) {
        it->idx = 0;
    } else if ((unsigned int)i >= v->size) {
        it->idx = v->size - 1;
    } else {
        it->idx = i;
    }
    return it;
}
