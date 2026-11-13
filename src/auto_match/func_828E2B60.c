typedef struct List_828E2B60 List_828E2B60;
typedef struct ListVtbl_828E2B60 {
    void *slot0[3];
    unsigned int (*count)(List_828E2B60 *self);
} ListVtbl_828E2B60;
struct List_828E2B60 {
    ListVtbl_828E2B60 *vt;
};

typedef struct Source_828E2B60 Source_828E2B60;
typedef struct SourceVtbl_828E2B60 {
    void *slot0[7];
    List_828E2B60 *(*list)(Source_828E2B60 *self);
} SourceVtbl_828E2B60;
struct Source_828E2B60 {
    SourceVtbl_828E2B60 *vt;
};

typedef struct Self_828E2B60 {
    char pad0[0x10];
    Source_828E2B60 *source;
    int pad14;
    int value;
} Self_828E2B60;

extern int fn_828EA268(unsigned int maxValue);
extern int fn_828E9DA8(void *stream);
extern int fn_828E9D90(void *stream);
extern int fn_828E9FF8(void *stream, int bits);

void fn_828E2B60(Self_828E2B60 *self, void *stream)
{
    List_828E2B60 *list;
    unsigned int count;
    int bits;

    list = self->source->vt->list(self->source);
    count = list->vt->count(list);
    bits = fn_828EA268(count != 0 ? count - 1 : 0);
    if (bits <= fn_828E9DA8(stream) - fn_828E9D90(stream)) {
        self->value = fn_828E9FF8(stream, bits);
    } else {
        self->value = 0;
    }
}
