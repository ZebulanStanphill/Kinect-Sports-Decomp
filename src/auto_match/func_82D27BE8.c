typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Array_82D27BE8 {
    void *data;
    int size;
    int capacityAndFlags;
} Array_82D27BE8;

typedef struct ArrayPair_82D27BE8 {
    Array_82D27BE8 a;
    Array_82D27BE8 b;
} ArrayPair_82D27BE8;

extern void fn_82D0CA60(void *source, int index, ArrayPair_82D27BE8 *out);
extern void fn_82D27010(void *self, ArrayPair_82D27BE8 *arg, const __vector4 *scale);
extern void fn_82421E98(ArrayPair_82D27BE8 *pair);

void fn_82D27BE8(void *self, void *source)
{
    ArrayPair_82D27BE8 pair;

    pair.a.data = 0;
    pair.a.size = 0;
    pair.a.capacityAndFlags = 0x80000000;
    pair.b.data = 0;
    pair.b.size = 0;
    pair.b.capacityAndFlags = 0x80000000;
    fn_82D0CA60(source, 0, &pair);
    {
        __vector4 scale = { 1.0f, 1.0f, 1.0f, 0.0f };
        fn_82D27010(self, &pair, &scale);
    }
    fn_82421E98(&pair);
}
