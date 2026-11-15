typedef struct String_822974F0 {
    union {
        unsigned short buffer[8];
        unsigned short *pointer;
    } data;

    unsigned int size;
    unsigned int capacity;
    int allocator;
} String_822974F0;

extern __declspec(noreturn) void fn_82F622E0(const char *);
extern void *memmove(void *, const void *, unsigned int);

static __forceinline unsigned short *Data_822974F0(String_822974F0 *self)
{
    if (self->capacity >= 8) {
        return self->data.pointer;
    } else {
        return self->data.buffer;
    }
}

String_822974F0 *fn_822974F0(String_822974F0 *self, unsigned int offset, unsigned int count)
{
    unsigned int remaining;
    if (self->size < offset) {
        fn_82F622E0("invalid string position");
    }
    remaining = self->size - offset;
    if (remaining < count) {
        count = remaining;
    }
    if (count != 0) {
        memmove(Data_822974F0(self) + offset, Data_822974F0(self) + offset + count, (remaining - count) * 2);
        self->size -= count;
        Data_822974F0(self)[self->size] = 0;
    }
    return self;
}
