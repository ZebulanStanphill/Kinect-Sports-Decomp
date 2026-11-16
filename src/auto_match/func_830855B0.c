typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void __dcbt(int, const void *);

typedef union Bounds_830855B0 {
    __vector4 vector;
    unsigned short halves[8];
} Bounds_830855B0;

typedef union Key_830855B0 {
    unsigned int value;
    unsigned short halves[2];
} Key_830855B0;
typedef struct Object_830855B0 Object_830855B0;

typedef struct VTable_830855B0 {
    void *padding[4];
    unsigned int (*key)(Object_830855B0 *, int);                        // 0x10
    void (*bounds)(Object_830855B0 *, unsigned int, Bounds_830855B0 *); // 0x14
} VTable_830855B0;

struct Object_830855B0 {
    VTable_830855B0 *vtable;
};

void fn_830855B0(Object_830855B0 *self, int first, int end, __vector4 *out)
{
    __vector4 *destination = out + first;
    int i;
    for (i = first; i < end; i++) {
        Key_830855B0 key;
        Bounds_830855B0 bounds;
        __dcbt(0, destination + 4);
        key.value = self->vtable->key(self, i);
        self->vtable->bounds(self, key.value, &bounds);
        bounds.halves[3] = key.halves[0];
        bounds.halves[7] = key.halves[1];
        *destination++ = bounds.vector;
    }
}
