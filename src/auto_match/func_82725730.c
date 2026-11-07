typedef struct Vec4_82725730 {
    float x;
    float y;
    float z;
    float w;
} Vec4_82725730;

typedef struct Inner_82725730 {
    char pad[0x114];
    int handle;
} Inner_82725730;

typedef struct Obj_82725730 {
    char pad[0xa0];
    Inner_82725730 *inner;
} Obj_82725730;

extern unsigned char fn_827A3440(int handle, int arg, Vec4_82725730 *out, int a, int b, int c, int d);
extern unsigned int fn_827A0A18(Inner_82725730 *inner);
extern unsigned int fn_827A0A60(Inner_82725730 *inner);

Vec4_82725730 *fn_82725730(Vec4_82725730 *result, Obj_82725730 *obj, int arg, float *outA, float *outB)
{
    Vec4_82725730 v;
    int handle;

    handle = obj->inner->handle;
    if (handle != 0) {
        v.x = 0.0f;
        v.y = 0.0f;
        v.z = 0.0f;
        v.w = 0.0f;
        if (fn_827A3440(handle, arg, &v, 0, 0, 0, 0) != 0) {
            if (outA != 0) {
                *outA = (float)fn_827A0A18(obj->inner);
            }
            if (outB != 0) {
                *outB = (float)fn_827A0A60(obj->inner);
            }
            result->x = v.x;
            result->y = v.y;
            result->z = v.z;
            result->w = v.w;
            return result;
        }
    }
    if (outA != 0) {
        *outA = 0.0f;
    }
    if (outB != 0) {
        *outB = 0.0f;
    }
    result->x = 0.0f;
    result->y = 0.0f;
    result->z = 0.0f;
    result->w = 0.0f;
    return result;
}
