typedef struct Allocator_82DA2E68 Allocator_82DA2E68;

typedef struct AllocatorVtbl_82DA2E68 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void (*Free)(Allocator_82DA2E68 *self, void *data, int size, int align);
} AllocatorVtbl_82DA2E68;

struct Allocator_82DA2E68 {
    AllocatorVtbl_82DA2E68 *vt;
};

typedef struct Globals_82DA2E68 {
    int pad[4];
    Allocator_82DA2E68 *alloc;
} Globals_82DA2E68;

typedef struct Buf_82DA2E68 {
    void *data;
    int count;
    int cap;
} Buf_82DA2E68;

typedef struct Obj_82DA2E68 {
    char pad[0x160];
    Buf_82DA2E68 buf;
} Obj_82DA2E68;

extern Globals_82DA2E68 *fn_82CE5410(void);
extern void fn_82D99CC8(Obj_82DA2E68 *p);

static __forceinline void Buf_Clear_82DA2E68(Buf_82DA2E68 *b)
{
    Allocator_82DA2E68 *a = fn_82CE5410()->alloc;
    b->count = 0;
    if ((b->cap & (int)0x80000000) == 0) {
        a->vt->Free(a, b->data, b->cap & 0x3fffffff, 4);
    }
    b->data = 0;
    b->cap = (int)0x80000000;
}

void fn_82DA2E68(Obj_82DA2E68 *p)
{
    if (p->buf.count == 0) {
        Buf_Clear_82DA2E68(&p->buf);
    }
    fn_82D99CC8(p);
}
