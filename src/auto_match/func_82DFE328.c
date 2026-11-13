typedef struct Alloc_82DFE328 Alloc_82DFE328;
typedef struct AllocVtbl_82DFE328 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*Free)(Alloc_82DFE328 *, void *, int, int);
} AllocVtbl_82DFE328;
struct Alloc_82DFE328 {
    AllocVtbl_82DFE328 *vtbl;
};
typedef struct Ctx_82DFE328 {
    char pad[0x10];
    Alloc_82DFE328 *alloc;
} Ctx_82DFE328;

typedef struct Array_82DFE328 {
    float *data;
    int size;
    int capacity;
} Array_82DFE328;

typedef struct State_82DFE328 {
    float value;
    Array_82DFE328 values;
} State_82DFE328;

typedef struct Obj_82DFE328 Obj_82DFE328;
typedef struct Handler_82DFE328 Handler_82DFE328;
typedef struct HandlerVtbl_82DFE328 {
    void *f0;
    void *f4;
    void *f8;
    void (*Apply)(Handler_82DFE328 *, float, Obj_82DFE328 *, void *, State_82DFE328 *);
} HandlerVtbl_82DFE328;
struct Handler_82DFE328 {
    HandlerVtbl_82DFE328 *vtbl;
};

struct Obj_82DFE328 {
    char pad0[0x24];
    Handler_82DFE328 *handler;
    char pad28[0xbc - 0x28];
    float value;
    float *values;
    int count;
};

extern Ctx_82DFE328 *fn_82CE5410(void);
extern void fn_82CE6310(Alloc_82DFE328 *alloc, Array_82DFE328 *array, int capacity, int elemSize);

void fn_82DFE328(Obj_82DFE328 *self, float step, void *input)
{
    State_82DFE328 state;
    Alloc_82DFE328 *alloc;
    int n;
    int i;

    state.value = self->value;
    state.values.data = 0;
    state.values.size = 0;
    state.values.capacity = 0x80000000;
    n = self->count;
    alloc = fn_82CE5410()->alloc;
    if ((state.values.capacity & 0x3fffffff) < n) {
        int cap = (state.values.capacity & 0x3fffffff) * 2;
        fn_82CE6310(alloc, &state.values, n < cap ? cap : n, 4);
    }
    state.values.size = n;
    for (i = 0; i < self->count; i++) {
        state.values.data[i] = self->values[i];
    }
    self->handler->vtbl->Apply(self->handler, step, self, input, &state);
    self->value = state.value;
    for (i = 0; i < self->count; i++) {
        self->values[i] = state.values.data[i];
    }
    alloc = fn_82CE5410()->alloc;
    state.values.size = 0;
    if ((state.values.capacity & (1 << 31)) == 0) {
        alloc->vtbl->Free(alloc, state.values.data, state.values.capacity & 0x3fffffff, 4);
    }
}
