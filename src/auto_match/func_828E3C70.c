typedef struct List_828E3C70 List_828E3C70;
typedef struct ListVtbl_828E3C70 {
    void *slot0[3];
    unsigned int (*count)(List_828E3C70 *self);
} ListVtbl_828E3C70;
struct List_828E3C70 {
    ListVtbl_828E3C70 *vt;
};

typedef struct Source_828E3C70 Source_828E3C70;
typedef struct SourceVtbl_828E3C70 {
    void *slot0[7];
    List_828E3C70 *(*list)(Source_828E3C70 *self);
} SourceVtbl_828E3C70;
struct Source_828E3C70 {
    SourceVtbl_828E3C70 *vt;
};

typedef struct Self_828E3C70 {
    char pad0[0x10];
    Source_828E3C70 *source;
    int pad14;
    int value;
} Self_828E3C70;

extern int fn_828EA268(unsigned int maxValue);
extern void fn_8223C478(void *stream, int bits, int flags);
extern void fn_828E9DB8(void *stream, int value, int bits);

void fn_828E3C70(Self_828E3C70 *self, void *stream)
{
    List_828E3C70 *list;
    unsigned int count;
    int bits;
    int value;

    list = self->source->vt->list(self->source);
    count = list->vt->count(list);
    bits = fn_828EA268(count != 0 ? count - 1 : 0);
    value = self->value;
    fn_8223C478(stream, bits, 0);
    fn_828E9DB8(stream, value, bits);
}
