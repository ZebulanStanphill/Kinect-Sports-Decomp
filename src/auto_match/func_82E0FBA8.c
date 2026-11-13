typedef struct Alloc_82E0FBA8 Alloc_82E0FBA8;
typedef struct AllocVtbl_82E0FBA8 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*Free)(Alloc_82E0FBA8 *, void *, int, int);
} AllocVtbl_82E0FBA8;
struct Alloc_82E0FBA8 {
    AllocVtbl_82E0FBA8 *vtbl;
};
typedef struct Ctx_82E0FBA8 {
    char pad[0xc];
    Alloc_82E0FBA8 *alloc;
} Ctx_82E0FBA8;

typedef struct Array_82E0FBA8 {
    int *data;
    int size;
    int capacity;
} Array_82E0FBA8;

typedef struct Obj_82E0FBA8 {
    int f0;
    int count;
} Obj_82E0FBA8;

extern Ctx_82E0FBA8 *fn_82CE5410(void);
extern void fn_82CE6310(Alloc_82E0FBA8 *alloc, Array_82E0FBA8 *array, int capacity, int elemSize);
extern int fn_82E0F818(Obj_82E0FBA8 *self, void *a, Array_82E0FBA8 *indices, void *b);

int fn_82E0FBA8(Obj_82E0FBA8 *self, void *a, void *b)
{
    Array_82E0FBA8 indices;
    Alloc_82E0FBA8 *alloc;
    int n = self->count;
    int i;
    int result;

    indices.data = 0;
    indices.size = 0;
    indices.capacity = 0x80000000;
    alloc = fn_82CE5410()->alloc;
    if ((indices.capacity & 0x3fffffff) < n) {
        int cap = (indices.capacity & 0x3fffffff) * 2;
        fn_82CE6310(alloc, &indices, n < cap ? cap : n, 4);
    }
    indices.size = n;
    for (i = 0; i < self->count; i++) {
        indices.data[i] = i;
    }
    result = fn_82E0F818(self, a, &indices, b);
    alloc = fn_82CE5410()->alloc;
    indices.size = 0;
    if ((indices.capacity & (1 << 31)) == 0) {
        alloc->vtbl->Free(alloc, indices.data, indices.capacity & 0x3fffffff, 4);
    }
    return result;
}
