typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, int);

typedef struct Rotation_825A55D8 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_825A55D8;

typedef struct Key_825A55D8 {
    float f0;
    float time;
    char pad8[0x8];
    __vector4 translation;
    Rotation_825A55D8 rotation;
} Key_825A55D8;

typedef struct Obj_825A55D8 {
    char pad0[0x10];
    Key_825A55D8 key;
} Obj_825A55D8;

static __forceinline void CopyRotation(Rotation_825A55D8 *d, const Rotation_825A55D8 *s)
{
    d->col0 = s->col0;
    d->col1 = s->col1;
    d->col2 = s->col2;
}

extern void fn_82CEBE20(void *target, const __vector4 *scale);

void fn_825A55D8(Obj_825A55D8 *self, float time, Key_825A55D8 *out)
{
    const Key_825A55D8 *key = &self->key;
    __vector4 v;

    out->f0 = key->f0;
    out->time = key->time;
    out->translation = key->translation;
    CopyRotation(&out->rotation, &key->rotation);
    v = __vspltw(__lvlx(&time, 0), 0);
    out->time = time;
    fn_82CEBE20(&out->rotation, &v);
}
