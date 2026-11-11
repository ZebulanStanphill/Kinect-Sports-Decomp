typedef struct Vec3_83029C58 { float x, y, z; } Vec3_83029C58;
typedef struct Obj_83029C58 { char pad[0x38]; void *impl; } Obj_83029C58;
extern int fn_83027270(void *impl, const Vec3_83029C58 *v);

int fn_83029C58(void *self, Obj_83029C58 *obj, const Vec3_83029C58 *v)
{
    return fn_83027270(obj->impl, v);
}
