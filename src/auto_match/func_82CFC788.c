typedef char *va_list;
extern void __cdecl __va_start(va_list *args, ...);

typedef struct Array_82CFC788 {
    char *data;   /* 0x00 */
    int size;     /* 0x04 */
    int capacity; /* 0x08 */
} Array_82CFC788;

typedef struct Allocator_82CFC788 Allocator_82CFC788;

typedef struct Router_82CFC788 {
    char pad[0x10];           /* 0x00 */
    Allocator_82CFC788 *heap; /* 0x10 */
} Router_82CFC788;

extern Router_82CFC788 *fn_82CE5410(void);
extern void fn_82CE6310(Allocator_82CFC788 *allocator, Array_82CFC788 *array, int capacity, int size);
extern void fn_82CE6460(Allocator_82CFC788 *allocator, Array_82CFC788 *array, int size, void *storage,
                        int capacity);
extern int fn_82F6EDE8(char *output, int capacity, const char *format, va_list args);

static __forceinline void reserve_82CFC788(Array_82CFC788 *array, int required)
{
    Allocator_82CFC788 *allocator = fn_82CE5410()->heap;
    int capacity = array->capacity & 0x3fffffff;

    if (capacity < required) {
        int growth = capacity * 2;

        fn_82CE6310(allocator, array, required < growth ? growth : required, 1);
    }
}

static __forceinline void setSize_82CFC788(Array_82CFC788 *array, int size)
{
    reserve_82CFC788(array, size);
    array->size = size;
}

static __forceinline void optimizeCapacity_82CFC788(Array_82CFC788 *array, int numFreeElemsLeft)
{
    Router_82CFC788 *router = fn_82CE5410();
    int totalSize = numFreeElemsLeft + array->size;

    if (totalSize < (array->capacity & 0x3fffffff)) {
        fn_82CE6460(router->heap, array, 1, 0, totalSize);
    }
}

void fn_82CFC788(Array_82CFC788 *self, const char *format, ...)
{
    va_list args;
    int capacity;
    int length;
    int size;

    if ((self->capacity & 0x3fffffff) < 0x3f) {
        reserve_82CFC788(self, 0x100);
    }
    __va_start(&args, format);
    for (;;) {
        capacity = self->capacity & 0x3fffffff;
        length = fn_82F6EDE8(self->data, capacity, format, args);
        if (length >= 0 && length < capacity) {
            break;
        }
        if (length < 0) {
            size = capacity * 2;
            if (size <= 0xff) {
                size = 0xff;
            }
            setSize_82CFC788(self, size + 1);
        } else {
            int required;

            required = length + 1;
            setSize_82CFC788(self, required);
        }
    }
    self->size = length + 1;
    optimizeCapacity_82CFC788(self, 0);
}
