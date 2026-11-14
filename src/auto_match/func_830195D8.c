typedef struct Entry_830195D8 {
    int v[3];
} Entry_830195D8;

typedef struct Array_830195D8 {
    Entry_830195D8 *data;
    unsigned int count;
    int tag;
} Array_830195D8;

extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
extern void *lbl_831BC768;

int fn_830195D8(Array_830195D8 *self, const Entry_830195D8 *src, unsigned int count, int tag)
{
    int result = 0x1f;
    unsigned int size;
    Entry_830195D8 *p;

    if (self->data != 0) {
        fn_82FA5190(lbl_831BC768, self->data);
        self->data = 0;
    }
    self->count = 0;
    self->tag = 0;
    if (src != 0 && count != 0) {
        size = count * sizeof(Entry_830195D8);
        p = (Entry_830195D8 *)fn_82FA5060(lbl_831BC768, size);
        self->data = p;
        if (p != 0) {
            fn_82A1DDC0(p, src, size);
            result = 1;
            self->count = count;
            self->tag = tag;
        } else {
            result = 0x34;
            self->count = 0;
        }
    }
    return result;
}
