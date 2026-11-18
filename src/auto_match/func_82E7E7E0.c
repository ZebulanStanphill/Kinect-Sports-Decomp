#include <string.h>

typedef struct Unknown_82E7E7E0 Unknown_82E7E7E0;

typedef struct UnknownVtable_82E7E7E0 {
    void *QueryInterface;
    void *AddRef;
    unsigned int (*Release)(Unknown_82E7E7E0 *self); /* 0x08 */
} UnknownVtable_82E7E7E0;

struct Unknown_82E7E7E0 {
    UnknownVtable_82E7E7E0 *vtable;
};

typedef struct Blob_82E7E7E0 {
    unsigned int size; /* 0x00 */
    void *data;        /* 0x04 */
} Blob_82E7E7E0;

typedef struct Vector_82E7E7E0 {
    unsigned int count; /* 0x08 */
    void *elements;     /* 0x0c */
} Vector_82E7E7E0;

typedef struct PropVariant_82E7E7E0 {
    unsigned short type; /* 0x00 */
    unsigned short reserved[3];

    union {
        unsigned __int64 quad;
        Vector_82E7E7E0 vector;
    } u; /* 0x08 */
} PropVariant_82E7E7E0;

extern void fn_82E4FE40(void *p);
extern int fn_82E50330(PropVariant_82E7E7E0 *value);

int fn_82E7E7E0(PropVariant_82E7E7E0 *value)
{
    int hr;
    unsigned int i;
    Unknown_82E7E7E0 *object;
    Blob_82E7E7E0 *blob;

    hr = 0;
    switch (value->type) {
    case 0:
        break;
    case 0x1041:
        if (value->u.vector.elements == 0) {
            hr = 0x80004003;
            break;
        }
        for (i = 0; value->u.vector.count > i; i++) {
            blob = &((Blob_82E7E7E0 *)value->u.vector.elements)[i];
            fn_82E4FE40(blob->data);
            blob->data = 0;
        }
        fn_82E4FE40(value->u.vector.elements);
        value->u.vector.elements = 0;
        memset(value, 0, sizeof(*value));
        break;
    case 0x100d:
        if (value->u.vector.elements == 0) {
            hr = 0x80004003;
            break;
        }
        for (i = 0; value->u.vector.count > i; i++) {
            object = ((Unknown_82E7E7E0 **)value->u.vector.elements)[i];
            if (object != 0) {
                object->vtable->Release(object);
            }
        }
        fn_82E4FE40(value->u.vector.elements);
        value->u.vector.elements = 0;
        memset(value, 0, sizeof(*value));
        break;
    default:
        hr = fn_82E50330(value);
        break;
    }
    return hr;
}
