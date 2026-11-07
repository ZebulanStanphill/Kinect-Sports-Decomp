typedef unsigned int U32;

void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Buf_82CE6310 {
    void *data;
    int count;
    int flags;
} Buf_82CE6310;

struct Obj_82CE6310;

typedef struct Vtbl_82CE6310 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *(*alloc)(struct Obj_82CE6310 *self, U32 *cap, int size);
    void *slot10;
    void *(*realloc)(struct Obj_82CE6310 *self, void *data, int n, U32 *cap, int size);
} Vtbl_82CE6310;

typedef struct Obj_82CE6310 {
    Vtbl_82CE6310 *vt;
} Obj_82CE6310;

void fn_82CE6310(Obj_82CE6310 *o, Buf_82CE6310 *b, U32 cap, int size)
{
    void *p;
    if ((b->flags & (int)0x80000000) == 0) {
        int oldCap = b->flags & 0x3fffffff;
        void *old = b->data;
        p = o->vt->realloc(o, old, oldCap, &cap, size);
        b->data = p;
        b->flags = cap;
    } else {
        p = o->vt->alloc(o, &cap, size);
        memcpy(p, b->data, b->count * size);
        b->data = p;
        b->flags = cap;
    }
}
