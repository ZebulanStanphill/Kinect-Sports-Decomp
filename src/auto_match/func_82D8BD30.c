typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Pair_82D8BD30 {
    __vector4 first;
    __vector4 second;
} Pair_82D8BD30;

typedef struct Msg_82D8BD30 {
    unsigned char type;
    int obj;
    Pair_82D8BD30 *data;
} Msg_82D8BD30;

typedef struct Memory_82D8BD30 Memory_82D8BD30;
typedef struct MemoryVtbl_82D8BD30 {
    void *pad0;
    void *(*alloc)(Memory_82D8BD30 *self, int size);
} MemoryVtbl_82D8BD30;
struct Memory_82D8BD30 {
    MemoryVtbl_82D8BD30 *vt;
};

typedef struct Tls_82D8BD30 {
    char pad0[0x10];
    Memory_82D8BD30 *memory;    /* 0x10 */
} Tls_82D8BD30;

typedef void (*SetFn_82D8BD30)(void *self, const __vector4 *a, const __vector4 *b);

extern Tls_82D8BD30 *fn_82CE5410(void);
extern int fn_82D80C48(int world, void *msg);
extern int fn_82D8BA38(int entity);

void fn_82D8BD30(int self, const __vector4 *a, const __vector4 *b)
{
    int world = *(int *)(self + 8);
    if (world == 0 || *(int *)(world + 0x94) == 0) {
        (*(SetFn_82D8BD30 *)(*(int *)(self + 0xe0) + 0x38))((void *)(self + 0xe0), a, b);
        fn_82D8BA38(self);
    } else {
        Msg_82D8BD30 m;
        Memory_82D8BD30 *mem;
        m.type = 0x18;
        m.obj = self;
        mem = fn_82CE5410()->memory;
        m.data = (Pair_82D8BD30 *)mem->vt->alloc(mem, 0x20);
        m.data->first = *a;
        m.data->second = *b;
        fn_82D80C48(*(int *)(self + 8), &m);
    }
}
