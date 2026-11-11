/* Position of the attached object without its scaled offset: base (virtual slot 4) minus
   offset (fn_8249CF88 for the object's id) * scale (info record of fn_82F52520, 1.0 when
   that fails). When the scaled offset is above the base in z, x is corrected by that height
   times a factor that is 0 in this build. Zero vector when nothing is attached. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Obj_822CFE20 Obj_822CFE20;

typedef struct VTable_822CFE20 {
    void *slot0[4];
    void (*getBase)(__vector4 *out, Obj_822CFE20 *self);    /* 0x10 */
} VTable_822CFE20;

struct Obj_822CFE20 {
    VTable_822CFE20 *vt;    /* 0x00 */
    char pad4[0x1c];
    void *node;             /* 0x20 */
    char pad24[0xc];
    int id;                 /* 0x30 */
};

typedef struct Owner_822CFE20 {
    char pad0[0x24];
    Obj_822CFE20 *attached; /* 0x24 */
} Owner_822CFE20;

typedef struct Manager_822CFE20 {
    char pad0[0xec];
    void *table;            /* 0xec */
} Manager_822CFE20;

typedef struct Info_822CFE20 {
    char pad0[0x14];
    float scale;            /* 0x14 */
    char pad18[8];
} Info_822CFE20;

extern const float lbl_821CA45C[2];

Manager_822CFE20 *fn_8249ABC0(void);
void fn_8249CF88(__vector4 *out, void *table, int id);
int fn_82F52520(void *node, Info_822CFE20 *info);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 *fn_822CFE20(__vector4 *result, Owner_822CFE20 *owner)
{
    Obj_822CFE20 *obj = owner->attached;

    if (obj != 0) {
        int id = obj->id;
        __vector4 offset;
        __vector4 base;
        Info_822CFE20 info;
        float scale;
        float height;
        Manager_822CFE20 *manager;

        manager = fn_8249ABC0();
        fn_8249CF88(&offset, manager->table, id);
        obj->vt->getBase(&base, obj);
        if (fn_82F52520(obj->node, &info) >= 0) {
            scale = info.scale;
        } else {
            scale = lbl_821CA45C[1];
        }
        offset = __vmulfp(offset, Replicate(scale));
        height = offset.vector4_f32[2] - base.vector4_f32[2];
        if (height > 0.0f) {
            offset.vector4_f32[0] = height * 0.0f + offset.vector4_f32[0];
        }
        *result = __vsubfp(base, offset);
    } else {
        *result = __VMXGetReg(77);
    }
    return result;
}
