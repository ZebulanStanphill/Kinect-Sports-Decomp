typedef struct { unsigned int *first; unsigned int *last; } Vec;

unsigned char fn_82FFF8C0(void *self, unsigned int key, Vec *v)
{
    unsigned int *it;
    for (it = v->first; it != v->last && *it != key; it++) {
    }
    return (it != v->last ? it : 0) != 0;
}
