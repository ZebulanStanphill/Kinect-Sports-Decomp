// Havok: after fn_83081D68, renumbers a remap table in place. Negative entries are new
// items: their original index (-v) is appended to the output array and they get the next
// new index; other entries take the value of the entry they point to.
typedef struct IntArray_83081DE0 {
    int *data;
    int size;
    int capacityAndFlags;
} IntArray_83081DE0;

typedef struct Remap_83081DE0 {
    int **table;
    int count;
} Remap_83081DE0;

typedef struct Router_83081DE0 {
    char pad0[0x10];
    void *heap;
} Router_83081DE0;

extern void fn_83081D68(Remap_83081DE0 *self);
extern Router_83081DE0 *fn_82CE5410(void);
extern void fn_82CE63B0(void *heap, IntArray_83081DE0 *array, int elementSize);

static __forceinline void ConstructWithCopy(int *t, int n, const int *tcopy)
{
    int i;
    for (i = 0; i < n; ++i) {
        t[i] = *tcopy;
    }
}

static __forceinline void Push(IntArray_83081DE0 *a, const int *v)
{
    Router_83081DE0 *router = fn_82CE5410();
    if (a->size == (a->capacityAndFlags & 0x3fffffff)) {
        fn_82CE63B0(router->heap, a, 4);
    }
    ConstructWithCopy(a->data + a->size, 1, v);
    a->size++;
}

void fn_83081DE0(Remap_83081DE0 *self, IntArray_83081DE0 *out)
{
    int next;
    int i;

    fn_83081D68(self);
    next = 0;
    for (i = 0; i < self->count; i++) {
        int *table = *self->table;
        int v = table[i];
        if (v < 0) {
            int index = -v;
            Push(out, &index);
            (*self->table)[i] = next;
            next++;
        } else {
            table[i] = table[v];
        }
    }
}
