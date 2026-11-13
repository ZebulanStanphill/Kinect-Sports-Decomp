typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, int);

typedef struct Rotation_82DE54E0 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82DE54E0;

typedef struct Transform_82DE54E0 {
    Rotation_82DE54E0 rotation;
    __vector4 translation;
} Transform_82DE54E0;

typedef struct Source_82DE54E0 {
    float f0;
    float duration;
    char pad8[0x8];
    __vector4 translation;
    Rotation_82DE54E0 rotation;
} Source_82DE54E0;

typedef struct Out_82DE54E0 {
    char pad0[0x50];
    Transform_82DE54E0 transform;
    float time;
} Out_82DE54E0;

static __forceinline void CopyRotation(Rotation_82DE54E0 *d, const Rotation_82DE54E0 *s)
{
    d->col0 = s->col0;
    d->col1 = s->col1;
    d->col2 = s->col2;
}

extern void fn_82CEBE20(void *target, const __vector4 *scale);

void fn_82DE54E0(Source_82DE54E0 *self, float time, Out_82DE54E0 *out)
{
    __vector4 v;
    float ratio;

    ratio = time / self->duration;
    out->time = time;
    out->transform.translation = self->translation;
    CopyRotation(&out->transform.rotation, &self->rotation);
    v = __vspltw(__lvlx(&ratio, 0), 0);
    fn_82CEBE20(&out->transform.rotation, &v);
}
