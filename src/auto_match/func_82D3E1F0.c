typedef struct {
    void *key;
    int value;
    int f8;
    int count;
} Entry_82D3E1F0;
typedef struct {
    Entry_82D3E1F0 *data;
    int size;
    int capacityAndFlags;
} Array_82D3E1F0;
typedef struct {
    int pad[6];
    Array_82D3E1F0 entries;
} Obj_82D3E1F0;
typedef struct {
    int pad[4];
    void *allocator;
} Tls_82D3E1F0;
typedef struct {
    int v[8];
} Out_82D3E1F0;
extern Tls_82D3E1F0 *fn_82CE5410(void);
extern void fn_82CE6310(void *alloc, void *array, int reqCapacity, int sizeElem);
extern void fn_82CE4220(void *data, int size, int sizeElem);
extern void fn_82D3DAC0(Obj_82D3E1F0 *self, Out_82D3E1F0 *out);

void fn_82D3E1F0(Obj_82D3E1F0 *self, void **keys, int n, int *values, int mode)
{
    Array_82D3E1F0 *arr = &self->entries;
    void *alloc = fn_82CE5410()->allocator;
    int cap;
    int i;
    Out_82D3E1F0 out;

    cap = arr->capacityAndFlags & 0x3fffffff;
    if (cap < n) {
        int newCap = cap * 2;
        fn_82CE6310(alloc, arr, n < newCap ? newCap : n, sizeof(Entry_82D3E1F0));
    }
    arr->size = n;
    for (i = 0; i < n; i++) {
        if (keys[i] != 0) {
            self->entries.data[i].key = keys[i];
            self->entries.data[i].value = values != 0 ? values[i] : 0;
            self->entries.data[i].count = n;
            self->entries.data[i].f8 = 0;
        }
    }
    if (mode == 1) {
        fn_82CE4220(arr->data, self->entries.size, sizeof(Entry_82D3E1F0));
    }
    fn_82D3DAC0(self, &out);
}
