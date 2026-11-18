typedef struct Allocator_82CF9B98 Allocator_82CF9B98;

typedef struct AllocatorVtable_82CF9B98 {
    void *slots00[3];
    char *(*bufAlloc)(Allocator_82CF9B98 *self, int *sizeInOut, int flags);  /* 0x0c */
    void (*bufFree)(Allocator_82CF9B98 *self, char *p, int size, int flags); /* 0x10 */
} AllocatorVtable_82CF9B98;

struct Allocator_82CF9B98 {
    AllocatorVtable_82CF9B98 *vtable;
};

typedef struct Router_82CF9B98 {
    char unknown00[0x14];
    Allocator_82CF9B98 *allocator; /* 0x14 */
} Router_82CF9B98;

typedef struct Buffer_82CF9B98 {
    char *begin;         /* 0x00 */
    char *current;       /* 0x04 */
    char *end;           /* 0x08 */
    char *limit;         /* 0x0c */
    unsigned char owned; /* 0x10 */
} Buffer_82CF9B98;

extern Router_82CF9B98 *fn_82CE5410(void);
extern void fn_82CF9B00(Buffer_82CF9B98 *self);

void fn_82CF9B98(Buffer_82CF9B98 *self, int size)
{
    int begin = (int)self->begin;
    int end = (int)self->end;

    if (size != self->end - self->begin) {
        if (size > 0) {
            Allocator_82CF9B98 *allocator;
            char *p;

            if (begin && self->owned) {
                allocator = fn_82CE5410()->allocator;
                allocator->vtable->bufFree(allocator, (char *)begin, end - begin, 1);
            }
            self->owned = 1;
            allocator = fn_82CE5410()->allocator;
            p = allocator->vtable->bufAlloc(allocator, &size, 1);
            self->begin = p;
            self->current = p;
            self->end = p + size;
            self->limit = p + size - 32;
        } else {
            fn_82CF9B00(self);
        }
    }
}
