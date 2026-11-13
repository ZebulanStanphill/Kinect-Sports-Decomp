struct Reader_828B2040;
typedef struct ReaderVt_828B2040 {
    void *slot[22];
    int (*read)(struct Reader_828B2040 *self, unsigned __int64 key, int arg, int *value);
} ReaderVt_828B2040;

typedef struct Reader_828B2040 {
    ReaderVt_828B2040 *vt;
} Reader_828B2040;

typedef struct Obj_828B2040 {
    int pad0;
    Reader_828B2040 *reader;
} Obj_828B2040;

int fn_828B2040(Obj_828B2040 *self, int arg, unsigned __int64 *key)
{
    Reader_828B2040 *reader = self->reader;
    int value;

    if (reader == 0) {
        return 1;
    }
    value = 0x2a;
    if (reader->vt->read(reader, *key, arg, &value) != 0) {
        return 1;
    }
    return value != 0;
}
