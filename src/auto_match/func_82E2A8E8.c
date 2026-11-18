typedef struct Unknown_82E2A8E8 Unknown_82E2A8E8;

typedef struct UnknownVtbl_82E2A8E8 {
    int (*QueryInterface)(Unknown_82E2A8E8 *self, const void *iid, void **out);
    unsigned int (*AddRef)(Unknown_82E2A8E8 *self);
    unsigned int (*Release)(Unknown_82E2A8E8 *self);
} UnknownVtbl_82E2A8E8;

struct Unknown_82E2A8E8 {
    UnknownVtbl_82E2A8E8 *vt;
};

typedef struct Obj_82E2A8E8 {
    char pad0[0x3c];
    Unknown_82E2A8E8 *iface; /* 0x3c */
    int f40;
    void *buffer; /* 0x44 */
} Obj_82E2A8E8;

extern void *fn_82E4FE08(unsigned int size);
extern void fn_82E4FE40(void *p);
extern void *memset(void *, int, unsigned int);

/* A 16-byte value passed in r4:r5; the callee homes both registers with std. */
typedef struct Value16_82E2A8E8 {
    unsigned __int64 parts[2];
} Value16_82E2A8E8;

extern int fn_82E29D50(void *source, Value16_82E2A8E8 value, Obj_82E2A8E8 *obj);

int fn_82E2A8E8(void *source, Value16_82E2A8E8 value, Obj_82E2A8E8 **out)
{
    int hr;
    Obj_82E2A8E8 *obj;

    *out = (Obj_82E2A8E8 *)fn_82E4FE08(sizeof(Obj_82E2A8E8));
    if (*out == 0) {
        hr = 0x8007000e;
        goto fail;
    }
    memset(*out, 0, sizeof(Obj_82E2A8E8));
    hr = fn_82E29D50(source, value, *out);
    if (hr >= 0) {
        return hr;
    }
fail:
    obj = *out;
    if (obj != 0) {
        if (obj->iface != 0) {
            obj->iface->vt->Release(obj->iface);
            obj->iface = 0;
        }
        if (obj->buffer != 0) {
            fn_82E4FE40(obj->buffer);
            obj->buffer = 0;
        }
        fn_82E4FE40(*out);
    }
    return hr;
}
