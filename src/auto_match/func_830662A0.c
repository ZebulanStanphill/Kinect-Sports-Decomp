typedef struct Node_830662A0 {
    struct Node_830662A0 *next;
} Node_830662A0;

typedef struct Source_830662A0 Source_830662A0;
typedef struct {
    void *f0;
    int (*capacity)(Source_830662A0 *self, int count);
} SourceVtbl_830662A0;
struct Source_830662A0 {
    SourceVtbl_830662A0 *vt;
};

typedef struct {
    Node_830662A0 *freeList;
    int pad4[2];
    Source_830662A0 *source;
    int pad10;
    int count;
} Pool_830662A0;

extern void fn_83065FF0(Pool_830662A0 *self, int count);
extern void *fn_8305F2E8(void *mem);

static __forceinline Node_830662A0 *Pop(Pool_830662A0 *self)
{
    Node_830662A0 *n = self->freeList;
    if (n != 0) {
        self->freeList = n->next;
    }
    return n;
}

static __forceinline void *Alloc(Pool_830662A0 *self)
{
    Node_830662A0 *n = Pop(self);
    int cap;

    if (n == 0) {
        cap = self->source->vt->capacity(self->source, self->count);
        if (cap <= self->count) {
            return 0;
        }
        fn_83065FF0(self, cap - self->count);
        n = Pop(self);
        if (n == 0) {
            return 0;
        }
    }
    self->count++;
    return n;
}

void *fn_830662A0(Pool_830662A0 *self)
{
    void *mem = Alloc(self);
    if (mem != 0) {
        return fn_8305F2E8(mem);
    }
    return 0;
}
