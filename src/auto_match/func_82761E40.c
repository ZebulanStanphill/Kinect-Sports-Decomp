int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Value_82761E40 Value_82761E40;

typedef struct ValueVtbl_82761E40 {
    void *slots[16];
    unsigned int (*IsComplex)(Value_82761E40 *self); /* 0x40 */
} ValueVtbl_82761E40;

struct Value_82761E40 {
    ValueVtbl_82761E40 *vtbl; /* 0x00 */
    char pad4[0x24];
    unsigned char *data; /* 0x28 */
};

unsigned char fn_827611B8(Value_82761E40 *self, Value_82761E40 *other);

static __forceinline unsigned int GetLength(const unsigned char *data)
{
    const unsigned char *bytes = data + 1;
    unsigned int length = 0;
    unsigned int i = 0;
    unsigned int shift = 0;
    unsigned int count = ((*data >> 3) & 3) + 1;

    for (; i < count; i++) {
        length |= bytes[i] << shift;
        shift += 8;
    }
    return length;
}

unsigned char fn_82761E40(Value_82761E40 *self, Value_82761E40 *other)
{
    unsigned char *a;
    unsigned char *b;
    unsigned int lengthA;
    unsigned int lengthB;

    if (other->vtbl->IsComplex(other) == 0) {
        a = self->data;
        lengthA = GetLength(a);
        b = other->data;
        lengthB = GetLength(b);
        if (lengthA != lengthB) {
            return 0;
        }
        return memcmp(a, b, lengthA) == 0;
    }
    return fn_827611B8(self, other);
}
