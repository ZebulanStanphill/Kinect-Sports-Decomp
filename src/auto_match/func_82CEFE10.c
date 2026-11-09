typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Info_82CEFE10 {
    char pad[0x30];
    __vector4 v;
} Info_82CEFE10;

struct Obj_82CEFE10;
typedef struct Vtbl_82CEFE10 {
    void *slots[3];
    void (*get)(struct Obj_82CEFE10 *, Info_82CEFE10 *);
} Vtbl_82CEFE10;
typedef struct Obj_82CEFE10 {
    Vtbl_82CEFE10 *vt;
} Obj_82CEFE10;

void fn_82CEFE10(Obj_82CEFE10 *o, __vector4 *out)
{
    Info_82CEFE10 info;
    o->vt->get(o, &info);
    *out = info.v;
}
