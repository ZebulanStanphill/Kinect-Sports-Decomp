typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} Vector_83015740;

Vector_83015740 __lvlx(const void *, int);
Vector_83015740 __vspltw(Vector_83015740, unsigned int);

static __forceinline Vector_83015740 Replicate_83015740(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

typedef struct Value_83015740 {
    float values[6];
} Value_83015740;

typedef struct Entry_83015740 {
    unsigned int key;
    int unused;
    Value_83015740 value;
} Entry_83015740;

extern Entry_83015740 *fn_82FFE0F0(void *, unsigned int);

Value_83015740 *fn_83015740(Value_83015740 *out, char *self, unsigned int key)
{
    Entry_83015740 *entry = fn_82FFE0F0(self + 4, key);
    if (entry) {
        *out = entry->value;
    } else {
        union {
            Value_83015740 value;
            Vector_83015740 vectors[2];
        } zero;

        zero.vectors[0] = zero.vectors[1] = Replicate_83015740(0.0f);
        *out = zero.value;
    }
    return out;
}
