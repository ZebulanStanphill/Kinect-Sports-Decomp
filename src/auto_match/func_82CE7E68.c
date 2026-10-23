typedef struct Allocator Allocator;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*Free)(Allocator *a, void *p, unsigned int size, int align);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vt;
};

typedef struct {
    void *data;
    int size;
    int capacity;
} Array;

extern char *fn_82CE5410(void);

void fn_82CE7E68(Array *a)
{
    Allocator *alloc = *(Allocator **)(fn_82CE5410() + 0xc);
    a->size = 0;
    if ((a->capacity & (int)0x80000000) == 0) {
        alloc->vt->Free(alloc, a->data, a->capacity & 0x3fffffff, 1);
    }
    a->data = 0;
    a->capacity = 0x80000000;
}
