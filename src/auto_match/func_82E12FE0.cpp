#include "havok/hkString.h"

typedef struct Obj_82E12FE0 Obj_82E12FE0;

typedef struct Vtbl_82E12FE0 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *(*get)(Obj_82E12FE0 *self);
} Vtbl_82E12FE0;

struct Obj_82E12FE0 {
    Vtbl_82E12FE0 *vt;
};

typedef struct Array_82E12FE0 {
    Obj_82E12FE0 **data;
    int count;
} Array_82E12FE0;


extern "C" Obj_82E12FE0 *fn_82E12FE0(void *key, Array_82E12FE0 *arr)
{
    int i;

    for (i = arr->count - 1; i >= 0; i--) {
        Obj_82E12FE0 *o = arr->data[i];
        if (hkString::strCmp(reinterpret_cast<const char *>(o->vt->get(o)), reinterpret_cast<const char *>(key)) == 0) {
            return arr->data[i];
        }
    }
    return 0;
}
