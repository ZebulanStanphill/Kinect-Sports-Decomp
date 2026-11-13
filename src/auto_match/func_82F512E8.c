typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct Data_82F512E8 {
    struct Data_82F512E8 *base;
    int pad[11];
    __vector4 vecs[1];
} Data_82F512E8;
typedef struct Obj_82F512E8 { int f0; Data_82F512E8 *data; } Obj_82F512E8;
extern int fn_82F4FF20(void *key);
extern __vector4 *fn_82F564D8(__vector4 *out, Data_82F512E8 *d, int idx);

__vector4 *fn_82F512E8(__vector4 *out, Obj_82F512E8 *obj, void *key, int flag)
{
    __vector4 tmp;
    __vector4 v;
    if (flag == 0) {
        v = obj->data->vecs[fn_82F4FF20(key)];
    } else {
        Data_82F512E8 *base = obj->data->base;
        v = *fn_82F564D8(&tmp, base, fn_82F4FF20(key));
    }
    *out = v;
    return out;
}
