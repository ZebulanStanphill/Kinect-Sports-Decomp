typedef void (*vfn)(void *, void *, int, int);
typedef struct { vfn f[8]; } VT_82D52258;
typedef struct { VT_82D52258 *vt; } Allocator_82D52258;
typedef struct {
    void *data;
    int size;
    int capacityAndFlags;
} Array_82D52258;
typedef struct {
    char pad0[0x10];
    int height;
    int width;
} Info_82D52258;
typedef struct {
    char pad0[0x18];
    Info_82D52258 *info;
    char pad1[0x24 - 0x1c];
    Array_82D52258 arr;
} Obj_82D52258;

extern int fn_82CE5410(void);
extern void fn_82CE6310(void *alloc, Array_82D52258 *arr, int capacity, int elemSize);

void fn_82D52258(Obj_82D52258 *self, int mode)
{
    if (mode != 6) {
        int n = (self->info->width * 2 - 2) * (self->info->height - 1);
        Array_82D52258 *a = &self->arr;
        int g = fn_82CE5410();
        if ((a->capacityAndFlags & 0x3fffffff) < n) {
            fn_82CE6310(*(void **)(g + 0x10), a, n, 2);
        }
        g = fn_82CE5410();
        {
            void *alloc = *(void **)(g + 0x10);
            int cap = a->capacityAndFlags & 0x3fffffff;
            if (cap < n) {
                int c = cap * 2;
                fn_82CE6310(alloc, a, n < c ? c : n, 2);
            }
        }
        a->size = n;
    } else {
        Array_82D52258 *a = &self->arr;
        Allocator_82D52258 *o = *(Allocator_82D52258 **)(fn_82CE5410() + 0x10);
        a->size = 0;
        if ((a->capacityAndFlags & (int)0x80000000) == 0) {
            o->vt->f[4](o, a->data, a->capacityAndFlags & 0x3fffffff, 2);
        }
        a->data = 0;
        a->capacityAndFlags = 0x80000000;
    }
}
