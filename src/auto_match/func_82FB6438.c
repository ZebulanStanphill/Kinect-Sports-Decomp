typedef struct {
    unsigned int key1;
    unsigned int key2;
    unsigned char rest[0x2c];
} Entry_82FB6438;

typedef struct {
    Entry_82FB6438 *begin;
    Entry_82FB6438 *end;
} Vec_82FB6438;

typedef struct {
    unsigned char pad[0xa0];
    Vec_82FB6438 entries;
} Obj_82FB6438;

static __forceinline int Size(Vec_82FB6438 *v)
{
    return (int)(v->end - v->begin);
}

Entry_82FB6438 *fn_82FB6438(Obj_82FB6438 *self, unsigned int key1, unsigned int key2)
{
    int i;
    for (i = Size(&self->entries) - 1; i >= 0; i--) {
        Entry_82FB6438 *e = &self->entries.begin[i];
        if ((e->key1 == 0xffffffff || e->key1 == key1) && (e->key2 == 0xffffffff || e->key2 == key2))
            return e;
    }
    return self->entries.begin;
}
