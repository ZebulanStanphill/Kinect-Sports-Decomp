typedef struct Entry_82FAE1F0 {
    unsigned int key;
    unsigned int pos;
} Entry_82FAE1F0;

typedef struct Vector_82FAE1F0 {
    Entry_82FAE1F0 *begin;
    Entry_82FAE1F0 *end;
} Vector_82FAE1F0;

typedef struct Obj_82FAE1F0 {
    unsigned char pad[0xa0];
    Vector_82FAE1F0 entries; /* 0xa0 */
} Obj_82FAE1F0;

static __forceinline unsigned int Size(const Vector_82FAE1F0 *v)
{
    return v->end - v->begin;
}

static __forceinline Entry_82FAE1F0 *At(const Vector_82FAE1F0 *v, unsigned int i)
{
    return v->begin + i;
}

int fn_82FAE1F0(Obj_82FAE1F0 *self, unsigned int offset, unsigned int *out)
{
    unsigned int i;
    unsigned int limit = At(&self->entries, 0)->pos + offset;
    for (i = 1; i <= Size(&self->entries) - 2; i++) {
        if (At(&self->entries, i)->pos > limit) {
            *out = At(&self->entries, i)->pos - At(&self->entries, 0)->pos;
            return 1;
        }
    }
    return 2;
}
