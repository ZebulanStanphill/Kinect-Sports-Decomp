typedef struct Desc_826F3D68 {
    char pad0[0x8];
    struct Owner_826F3D68 *owner; /* 0x08 */
    int fieldC;                   /* 0x0c */
    char pad10[0x8];
    int field18; /* 0x18 */
    char pad1C[0x4];
    int field20; /* 0x20 */
    int field24; /* 0x24 */
    char pad28[0x4];
    int field2C; /* 0x2c */
    char pad30[0x14];
    unsigned char flag44; /* 0x44 */
} Desc_826F3D68;

typedef struct Request_826F3D68 {
    int one;                /* 0x50 */
    int zero54;             /* 0x54 */
    int zero58;             /* 0x58 */
    int one5C;              /* 0x5c */
    unsigned int key;       /* 0x60 */
    int zero64;             /* 0x64 */
    int field20;            /* 0x68 */
    int fieldC;             /* 0x6c */
    int field24;            /* 0x70 */
    int field2C;            /* 0x74 */
    void *heap;             /* 0x78 */
    unsigned char hasExtra; /* 0x7c */
} Request_826F3D68;

typedef struct Factory_826F3D68 Factory_826F3D68;

typedef struct FactoryVt_826F3D68 {
    void *slot0;
    void *(*create)(Factory_826F3D68 *self, Request_826F3D68 *request);
} FactoryVt_826F3D68;

struct Factory_826F3D68 {
    FactoryVt_826F3D68 *vt;
};

typedef struct Owner_826F3D68 {
    char pad0[0x10];
    Factory_826F3D68 *factory; /* 0x10 */
} Owner_826F3D68;

extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_826E4D70(void *mem, void *source, int flag);
extern void fn_8267C4C8(void *p);
extern void fn_8267C498(void *p);
extern void fn_82687270(void *p);

int fn_826F3D68(int unused, unsigned int key, void **out, Desc_826F3D68 *desc, void *heap)
{
    Request_826F3D68 request;
    Factory_826F3D68 *factory;
    void *source;
    void *mem;
    void *object;
    int result;

    request.one = 1;
    request.key = key;
    request.zero58 = 0;
    request.zero54 = 0;
    request.one5C = 1;
    request.zero64 = 0;
    request.field20 = desc->field20;
    request.fieldC = desc->fieldC;
    request.field24 = desc->field24;
    request.field2C = desc->field2C;
    request.hasExtra = desc->flag44 != 0 || desc->field18 != 0;
    request.heap = heap;
    factory = desc->owner->factory;
    if (factory == 0) {
        return 0;
    }
    source = factory->vt->create(factory, &request);
    if (source == 0) {
        return 0;
    }
    mem = fn_8267B890(heap, 0x1c, 0);
    if (mem != 0) {
        object = fn_826E4D70(mem, source, 1);
    } else {
        object = 0;
    }
    if (object == 0) {
        result = 0;
        fn_8267C498(source);
        return result;
    } else {
        fn_8267C4C8(object);
        if (*out != 0) {
            fn_82687270(*out);
        }
        *out = object;
        fn_82687270(object);
        result = 1;
        fn_8267C498(source);
        return result;
    }
}
