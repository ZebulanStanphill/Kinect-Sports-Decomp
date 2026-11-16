typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Array_82D3ECE0 {
    __vector4 *data;
    int size;
    int capacity;
} Array_82D3ECE0;

typedef struct RotatedVertices_82D3ECE0 {
    float *data;
    int size;
    int capacity;
} RotatedVertices_82D3ECE0;

typedef struct Shape_82D3ECE0 {
    char padding[0x40];
    RotatedVertices_82D3ECE0 m_rotatedVertices; /* 0x40 */
    int m_numVertices;                          /* 0x4c */
} Shape_82D3ECE0;

typedef struct Allocator_82D3ECE0 {
    char padding[0x10];
    void *allocator;
} Allocator_82D3ECE0;

extern Allocator_82D3ECE0 *fn_82CE5410(void);
extern void fn_82CE6310(void *allocator, Array_82D3ECE0 *array, int capacity, int elementSize);

void fn_82D3ECE0(Shape_82D3ECE0 *self, Array_82D3ECE0 *out)
{
    int count = self->m_numVertices;
    void *allocator = fn_82CE5410()->allocator;
    int capacity = out->capacity & 0x3fffffff;
    int index;
    if (capacity < count) {
        fn_82CE6310(allocator, out, count < capacity * 2 ? capacity * 2 : count, 16);
    }
    out->size = count;
    for (index = 0; index < self->m_numVertices; index++) {
        __vector4 point;
        int offset = index / 4 * 12 + (index & 3);
        point.vector4_f32[0] = self->m_rotatedVertices.data[offset];
        point.vector4_f32[1] = self->m_rotatedVertices.data[offset + 4];
        point.vector4_f32[2] = self->m_rotatedVertices.data[offset + 8];
        point.vector4_f32[3] = 0.0f;
        out->data[index] = point;
    }
}
