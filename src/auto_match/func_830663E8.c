typedef struct Node_830663E8 {
    struct Node_830663E8 *next;
} Node_830663E8;

typedef struct Source_830663E8 Source_830663E8;
typedef struct {
    void *f0;
    int (*capacity)(Source_830663E8 *self, int count);
} SourceVtbl_830663E8;
struct Source_830663E8 {
    SourceVtbl_830663E8 *vt;
};

typedef struct {
    Node_830663E8 *freeList;
    int pad4[2];
    Source_830663E8 *source;
    int pad10;
    int count;
} Pool_830663E8;

extern void fn_83066088(Pool_830663E8 *self, int count);
extern void *fn_83068650(void *mem);

static __forceinline Node_830663E8 *Pop(Pool_830663E8 *self)
{
    Node_830663E8 *n = self->freeList;
    if (n != 0) {
        self->freeList = n->next;
    }
    return n;
}

static __forceinline void *Alloc(Pool_830663E8 *self)
{
    Node_830663E8 *n = Pop(self);
    int cap;

    if (n == 0) {
        cap = self->source->vt->capacity(self->source, self->count);
        if (cap <= self->count) {
            return 0;
        }
        fn_83066088(self, cap - self->count);
        n = Pop(self);
        if (n == 0) {
            return 0;
        }
    }
    self->count++;
    return n;
}

void *fn_830663E8(Pool_830663E8 *self)
{
    void *mem = Alloc(self);
    if (mem != 0) {
        return fn_83068650(mem);
    }
    return 0;
}
