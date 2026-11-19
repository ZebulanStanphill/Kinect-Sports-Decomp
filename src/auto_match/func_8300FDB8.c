typedef struct Obj_8300FDB8 Obj_8300FDB8;

typedef struct Range_8300FDB8 {
    unsigned __int64 words[3];
} Range_8300FDB8;

typedef struct Size_8300FDB8 {
    int zero; /* 0x00 */
    int size; /* 0x04 */
} Size_8300FDB8;

typedef struct Request_8300FDB8 {
    int f0;               /* 0x00 */
    Obj_8300FDB8 *target; /* 0x04 */
    int value;            /* 0x08 */
    Size_8300FDB8 *size;  /* 0x0c */
    Range_8300FDB8 range; /* 0x10 */
    int f28;              /* 0x28 */
    char pad2C[0x40];
    int f6C;              /* 0x6c */
    int f70;              /* 0x70 */
    int f74;              /* 0x74 */
    int f78;              /* 0x78 */
    int f7C;              /* 0x7c */
    unsigned char flag80; /* 0x80 */
    unsigned char flag81; /* 0x81 */
} Request_8300FDB8;

typedef struct ObjVtbl_8300FDB8 {
    void *f0;
    void *f4;
    void (*Release)(Obj_8300FDB8 *self); /* 0x08 */
    void *fC;
    void *f10;
    void *f14;
    int (*Submit)(Obj_8300FDB8 *self, Request_8300FDB8 *request); /* 0x18 */
} ObjVtbl_8300FDB8;

struct Obj_8300FDB8 {
    ObjVtbl_8300FDB8 *vtbl;
};

extern Obj_8300FDB8 *fn_82FAB9C0(int id, int key);
extern int lbl_832642E0;

void fn_8300FDB8(void *self, int key, int value, Range_8300FDB8 range)
{
    Obj_8300FDB8 *obj;
    Request_8300FDB8 request;

    obj = fn_82FAB9C0(lbl_832642E0 + 4, key);
    if (obj != 0) {
        Size_8300FDB8 size = {0, 4};

        request.target = obj;
        request.f6C = 0;
        request.flag80 = 0;
        request.f28 = 0;
        request.f0 = 0;
        request.range = range;
        request.flag81 = 1;
        request.f70 = 0;
        request.f74 = 0;
        request.value = value;
        request.size = &size;
        request.f78 = 0;
        request.f7C = 0;
        obj->vtbl->Submit(obj, &request);
        obj->vtbl->Release(obj);
    }
}
