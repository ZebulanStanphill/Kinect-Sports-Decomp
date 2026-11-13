typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82E007E8 {
    __vector4 rows[4];
} Transform_82E007E8;

typedef struct Entry_82E007E8 {
    char pad0[0x10];
    Transform_82E007E8 transform;   /* 0x10 */
    char pad1[0x10];
} Entry_82E007E8;

typedef struct Obj_82E007E8 {
    char pad0[0x10];
    Entry_82E007E8 *entries;        /* 0x10 */
} Obj_82E007E8;

extern void fn_82CE5088(__vector4 *out, const Transform_82E007E8 *t, const __vector4 *v);
extern void fn_82CE5040(__vector4 *out, const Transform_82E007E8 *t, const __vector4 *v);

void fn_82E007E8(Obj_82E007E8 *self, int unused, unsigned char index, __vector4 *v)
{
    Transform_82E007E8 *t = &self->entries[index].transform;
    __vector4 local;
    __vector4 result;

    fn_82CE5088(&local, t, v);
    local.vector4_f32[2] = 0.0f;
    fn_82CE5040(&result, t, &local);
    *v = result;
}
