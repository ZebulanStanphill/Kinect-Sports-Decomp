typedef struct Large_82CF8AA0 Large_82CF8AA0;
typedef struct LargeVtbl_82CF8AA0 {
    void *slot0[4];
    void *(*alloc)(Large_82CF8AA0 *self, void *arg, int size);
} LargeVtbl_82CF8AA0;
struct Large_82CF8AA0 {
    LargeVtbl_82CF8AA0 *vt;
};

typedef struct Bucket_82CF8AA0 {
    int unk0;
    void *value;
} Bucket_82CF8AA0;

typedef struct Pool_82CF8AA0 {
    char pad0[0x2c];
    Large_82CF8AA0 large;
    char pad30[0xf0 - 0x30];
    Bucket_82CF8AA0 *buckets[1];
} Pool_82CF8AA0;

void *fn_82CF8AA0(Pool_82CF8AA0 *self, void *arg, int size)
{
    if (size <= 0x220) {
        Bucket_82CF8AA0 *b;
        if (size == 0)
            return 0;
        b = self->buckets[(size + 15) >> 4];
        if (b != 0)
            return b->value;
    }
    return self->large.vt->alloc(&self->large, arg, size);
}
