typedef struct Str_82CFC908 {
    char *data;
    int length;
    unsigned int flags : 2;
    unsigned int capacity : 30;
} Str_82CFC908;

typedef struct Ctx_82CFC908 {
    unsigned char pad[0x10];
    void *heap;
} Ctx_82CFC908;

extern Ctx_82CFC908 *fn_82CE5410(void);
extern void fn_82CE6310(void *heap, Str_82CFC908 *str, int capacity, int keep);
extern void *memcpy(void *dst, const void *src, unsigned int size);

Str_82CFC908 *fn_82CFC908(Str_82CFC908 *self, Str_82CFC908 *other)
{
    int selfLen = self->length - 1;
    int otherLen = other->length - 1;
    int newLen = selfLen + otherLen + 1;
    void *heap = fn_82CE5410()->heap;

    if ((int)self->capacity < newLen) {
        int cap = self->capacity * 2;
        fn_82CE6310(heap, self, newLen < cap ? cap : newLen, 1);
    }
    self->length = newLen;
    memcpy(self->data + selfLen, other->data, otherLen + 1);
    return self;
}
