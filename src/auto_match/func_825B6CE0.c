typedef struct Blob_825B6CE0 {
    unsigned short size;
} Blob_825B6CE0;

typedef struct Copy_825B6CE0 {
    char pad0[0x88];
    int key;
    int f8c;
} Copy_825B6CE0;

extern Blob_825B6CE0 *fn_8251F720(int *key, int flags);
extern void fn_8251FA58(Blob_825B6CE0 *blob);
extern void *fn_82522D98(int size);
extern void fn_82A1DD38(void *dst, const void *src, unsigned int size);

Copy_825B6CE0 *fn_825B6CE0(int *key)
{
    Blob_825B6CE0 *blob;
    Copy_825B6CE0 *copy;

    blob = fn_8251F720(key, 0);
    if (blob == 0)
        return 0;
    copy = fn_82522D98(blob->size);
    if (copy != 0) {
        fn_82A1DD38(copy, blob, blob->size);
        copy->f8c = 0;
    }
    copy->key = *key;
    fn_8251FA58(blob);
    return copy;
}
