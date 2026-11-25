typedef struct Allocator_8281B558 Allocator_8281B558;

typedef struct Callbacks_8281B558 {
    char pad[8];
    char *(*resize)(Allocator_8281B558 *, char *, unsigned int);
    char pad2[4];
    unsigned int (*size)(Allocator_8281B558 *, char *);
} Callbacks_8281B558;

struct Allocator_8281B558 {
    char pad[0xc];
    unsigned int flags;
    Callbacks_8281B558 *callbacks;
    char pad2[8];
    char *(*resized)(Allocator_8281B558 *, char *, unsigned int, char *);
    char *(*failed)(Allocator_8281B558 *, char *, unsigned int);
    char pad3[0xc];
    unsigned int allocated;
    unsigned int available;
    char pad4[0xc];
    unsigned int minSize;
    unsigned int maxSize;
    char pad5[4];
    char *minAddress;
    char *maxAddress;
    char pad6[0x20];
    unsigned int guardSize;
};

extern void *memset(void *, int, unsigned int);

char *fn_8281B558(Allocator_8281B558 *self, char *address, unsigned int requested)
{
    unsigned int size;
    char *base;
    unsigned int total;
    unsigned int oldSize;
    char *result;

    if (requested == 0) {
        size = 1;
    } else {
        size = requested;
    }
    base = address;
    total = size;
    if (self->flags & 4) {
        unsigned int guardSize = self->guardSize;
        base = address - guardSize;
        total = guardSize * 2 + size;
    }
    oldSize = self->callbacks->size(self, base);
    if (self->callbacks->resize != 0) {
        if ((self->flags & 2) && total < oldSize) {
            memset(base + total, 0xee, oldSize - total);
        }
        result = self->callbacks->resize(self, base, total);
        if (result != 0) {
            self->allocated += total - oldSize;
            self->available = self->available - total + oldSize;
            if ((self->flags & 1) && total > oldSize) {
                memset(result + oldSize, 0xcc, total - oldSize);
            }
            if (self->flags & 4) {
                memset(result + self->guardSize + size, 0xdd, self->guardSize);
                result += self->guardSize;
            }
            self->minAddress = result < self->minAddress ? result : self->minAddress;
            self->maxAddress = result > self->maxAddress ? result : self->maxAddress;
            self->minSize = size < self->minSize ? size : self->minSize;
            self->maxSize = size > self->maxSize ? size : self->maxSize;
            if (self->resized != 0) {
                result = self->resized(self, address, size, result);
            }
        } else if (self->failed != 0) {
            result = self->failed(self, address, size);
        }
        return result;
    }
    return 0;
}
