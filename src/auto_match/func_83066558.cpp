#include <new>

typedef struct Node_83066558 {
    struct Node_83066558 *next;
} Node_83066558;

typedef struct Source_83066558 Source_83066558;

typedef struct {
    void *f0;
    int (*capacity)(Source_83066558 *self, int count);
} SourceVtbl_83066558;

struct Source_83066558 {
    SourceVtbl_83066558 *vt;
};

typedef struct {
    Node_83066558 *freeList;
    int pad4[2];
    Source_83066558 *source;
    int pad10;
    int count;
} Pool_83066558;

extern "C" void fn_83065F58(Pool_83066558 *self, int count);
extern "C" char lbl_8217E8BC[];

static __forceinline Node_83066558 *Pop(Pool_83066558 *self)
{
    Node_83066558 *n = self->freeList;
    if (n != 0) {
        self->freeList = n->next;
    }
    return n;
}

static __forceinline void *Alloc(Pool_83066558 *self)
{
    Node_83066558 *n = Pop(self);
    int cap;

    if (n == 0) {
        cap = self->source->vt->capacity(self->source, self->count);
        if (cap <= self->count) {
            return 0;
        }
        fn_83065F58(self, cap - self->count);
        n = Pop(self);
        if (n == 0) {
            return 0;
        }
    }
    self->count++;
    return n;
}

struct Object_83066558 {
    int words[30];

    __forceinline Object_83066558()
    {
        words[3] = 0;
        *(void **)words = lbl_8217E8BC;
        words[1] = 0;
        words[2] = 0;
        words[11] = 0;
        words[12] = 0;
        words[13] = 0;
        words[14] = 0;
        words[15] = 0;
        words[16] = 0;
        words[17] = 0;
        words[18] = 0;
        words[19] = 0;
        words[21] = 0;
        words[22] = 0;
        words[23] = 0;
        words[24] = 0;
        words[26] = 0;
        words[28] = 0;
        words[29] = 0;
    }
};

extern "C" void *fn_83066558(Pool_83066558 *self)
{
    void *mem = Alloc(self);
    return mem ? new (mem) Object_83066558 : 0;
}
