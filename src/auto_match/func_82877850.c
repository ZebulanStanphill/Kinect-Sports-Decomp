typedef struct Elem_82877850 {
    int d[9];
} Elem_82877850;

typedef struct Vec_82877850 {
    Elem_82877850 *begin;
    Elem_82877850 *end;
} Vec_82877850;

typedef struct Buf_82877850 {
    int d[8];
} Buf_82877850;

struct Obj_82877850;

typedef struct VTable_82877850 {
    void *slot0;
    int (*fn)(struct Obj_82877850 *self, Buf_82877850 *buf, int flag, float f);
} VTable_82877850;

typedef struct Obj_82877850 {
    VTable_82877850 *vt;
} Obj_82877850;

extern void fn_82292780(Buf_82877850 *buf, Elem_82877850 *e);
extern void fn_82864898(Buf_82877850 *buf);

int fn_82877850(Obj_82877850 *obj, Vec_82877850 *v)
{
    Elem_82877850 *it;
    Buf_82877850 buf;

    for (it = v->begin; it != v->end; it++) {
        fn_82292780(&buf, it);
        if (obj->vt->fn(obj, &buf, 1, 0.0f) < 0) {
            fn_82864898(&buf);
            return (int)0xa0320000;
        }
        fn_82864898(&buf);
    }
    return 0x20320000;
}
