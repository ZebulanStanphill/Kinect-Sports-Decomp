typedef struct Array_825716B8 {
    char *begin; /* 0x00 */
    char *end;   /* 0x04 */
    int capacity;
    unsigned short stride; /* 0x0c */
    unsigned short flags;
    unsigned short count; /* 0x10 */
    unsigned short padding;
} Array_825716B8;

static __forceinline void Reset_825716B8(Array_825716B8 *array)
{
    array->end = array->begin;
    array->count = 0;
}

typedef struct List_825716B8 {
    Array_825716B8 objects;
    Array_825716B8 values; /* 0x14 */
    void *children;        /* 0x28 */
} List_825716B8;

extern void fn_8251E5A0(Array_825716B8 *array, char *element);
extern void fn_82572B80(void *self, void *owner);

void fn_825716B8(List_825716B8 *self, void *owner, void *other)
{
    char *element;
    char *end;
    if (owner == 0 || owner == other) {
        Reset_825716B8(&self->objects);
        Reset_825716B8(&self->values);
    }
    if (self->children != 0) {
        fn_82572B80(self->children, owner);
    }
    element = self->objects.begin;
    end = self->objects.end;
    for (; element < end; element += 0xd0) {
        if (*(void **)(element + 0x98) != 0 && *(void **)(element + 0x98) == owner) {
            fn_8251E5A0(&self->values,
                        self->values.begin + ((int)(element - self->objects.begin) / self->objects.stride) *
                                                 self->values.stride);
            fn_8251E5A0(&self->objects, element);
            element -= 0xd0;
            end -= 0xd0;
        }
    }
}
