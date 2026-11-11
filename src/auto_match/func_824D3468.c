// result = base - offset * scale: base from the object's virtual slot 4, offset from
// fn_8249CF88 for the object's id, scale from the info record fn_82F52520 fills (1.0 when that
// fails).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Obj_824D3468 Obj_824D3468;

typedef struct VTable_824D3468 {
    void *slot0[4];
    void (*getBase)(__vector4 *out, Obj_824D3468 *self);    // 0x10
} VTable_824D3468;

struct Obj_824D3468 {
    VTable_824D3468 *vt;    // 0x00
    char pad4[0x1c];
    void *node;             // 0x20
    char pad24[0xc];
    int id;                 // 0x30
};

typedef struct Manager_824D3468 {
    char pad0[0xec];
    void *table;            // 0xec
} Manager_824D3468;

typedef struct Info_824D3468 {
    char pad0[0x14];
    float scale;            // 0x14
    char pad18[8];
} Info_824D3468;

extern const float lbl_821CA45C[2];

Manager_824D3468 *fn_8249ABC0(void);
void fn_8249CF88(__vector4 *out, void *table, int id);
int fn_82F52520(void *node, Info_824D3468 *info);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 *fn_824D3468(__vector4 *result, Obj_824D3468 *self)
{
    int id = self->id;
    __vector4 offset;
    __vector4 base;
    Info_824D3468 info;
    float scale;
    Manager_824D3468 *manager;

    manager = fn_8249ABC0();
    fn_8249CF88(&offset, manager->table, id);
    self->vt->getBase(&base, self);
    if (fn_82F52520(self->node, &info) >= 0) {
        scale = info.scale;
    } else {
        scale = lbl_821CA45C[1];
    }
    *result = __vsubfp(base, __vmulfp(offset, Replicate(scale)));
    return result;
}
