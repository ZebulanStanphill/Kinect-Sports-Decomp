typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Pair_82D8BFC8 {
    __vector4 first;
    __vector4 second;
} Pair_82D8BFC8;

typedef struct Msg_82D8BFC8 {
    unsigned char type;
    int obj;
    Pair_82D8BFC8 *data;
} Msg_82D8BFC8;

typedef struct Memory_82D8BFC8 Memory_82D8BFC8;
typedef struct MemoryVtbl_82D8BFC8 {
    void *pad0;
    void *(*alloc)(Memory_82D8BFC8 *self, int size);
} MemoryVtbl_82D8BFC8;
struct Memory_82D8BFC8 {
    MemoryVtbl_82D8BFC8 *vt;
};

typedef struct Tls_82D8BFC8 {
    char pad0[0x10];
    Memory_82D8BFC8 *memory;    /* 0x10 */
} Tls_82D8BFC8;

typedef void (*SetFn_82D8BFC8)(void *self, const __vector4 *a, const __vector4 *b);

extern Tls_82D8BFC8 *fn_82CE5410(void);
extern int fn_82D80C48(int world, void *msg);
extern int fn_82D89BD8(int entity);

void fn_82D8BFC8(int self, const __vector4 *a, const __vector4 *b)
{
    int world = *(int *)(self + 8);
    if (world == 0 || *(int *)(world + 0x94) == 0) {
        fn_82D89BD8(self);
        (*(SetFn_82D8BFC8 *)(*(int *)(self + 0xe0) + 0x50))((void *)(self + 0xe0), a, b);
    } else {
        Msg_82D8BFC8 m;
        Memory_82D8BFC8 *mem;
        m.type = 0x1c;
        m.obj = self;
        mem = fn_82CE5410()->memory;
        m.data = (Pair_82D8BFC8 *)mem->vt->alloc(mem, 0x20);
        m.data->first = *b;
        m.data->second = *a;
        fn_82D80C48(*(int *)(self + 8), &m);
    }
}
