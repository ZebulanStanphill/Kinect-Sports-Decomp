/* Copies the tracked object's state (two bounds vectors, a height offset, a direction and two scalars) into the
   self's cache block and resets the cache weight to 1.0. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __VMXGetReg(int n);

typedef struct Object_8255CC98 Object_8255CC98;

typedef struct ObjectVtbl_8255CC98 {
    void *slot0;
    void (*GetDirection)(Object_8255CC98 *self, __vector4 *out);   /* 0x04 */
    float (*GetSpeed)(Object_8255CC98 *self);                       /* 0x08 */
    void (*GetPosition)(Object_8255CC98 *self, __vector4 *out);    /* 0x0c */
    float (*GetRadius)(Object_8255CC98 *self);                      /* 0x10 */
    float (*GetHeight)(Object_8255CC98 *self);                      /* 0x14 */
    void (*GetMin)(Object_8255CC98 *self, __vector4 *out);         /* 0x18 */
    void (*GetMax)(Object_8255CC98 *self, __vector4 *out);         /* 0x1c */
} ObjectVtbl_8255CC98;

struct Object_8255CC98 {
    ObjectVtbl_8255CC98 *vt;
};

typedef struct Owner_8255CC98 {
    char pad0[0x1b0];
    Object_8255CC98 *object;    /* 0x1b0 */
} Owner_8255CC98;

typedef struct Cache_8255CC98 {
    char pad0[0x10];
    __vector4 position;         /* 0x10 */
    __vector4 offset;           /* 0x20 */
    float radius;               /* 0x30 */
    char pad34[0x1c];
    __vector4 direction;        /* 0x50 */
    float speed;                /* 0x60 */
    char pad64[0x1c];
    __vector4 min;              /* 0x80 */
    __vector4 max;              /* 0x90 */
    float weight;               /* 0xa0 */
} Cache_8255CC98;

typedef struct Self_8255CC98 {
    char pad0[0x250];
    Cache_8255CC98 cache;       /* 0x250 */
    char pad2f4[0x8c0 - 0x250 - sizeof(Cache_8255CC98)];
    Owner_8255CC98 *owner;      /* 0x8c0 */
} Self_8255CC98;

extern const float lbl_821CA45C[];

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);

    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline void GetBounds(Object_8255CC98 *object, __vector4 *min, __vector4 *max)
{
    object->vt->GetMin(object, min);
    object->vt->GetMax(object, max);
}

void fn_8255CC98(Self_8255CC98 *self)
{
    Cache_8255CC98 *cache = &self->cache;
    Owner_8255CC98 *owner = self->owner;
    Object_8255CC98 *object;

    if (owner != 0) {
        object = owner->object;
        if (object != 0) {
            __vector4 min = __VMXGetReg(77);
            __vector4 max = __VMXGetReg(77);
            GetBounds(object, &min, &max);
            cache->min = min;
            cache->max = max;
            cache->offset = VectorSet(0.0f, object->vt->GetHeight(object), 0.0f, 0.0f);
            object->vt->GetPosition(object, &cache->position);
            cache->radius = object->vt->GetRadius(object);
            object->vt->GetDirection(object, &cache->direction);
            cache->speed = object->vt->GetSpeed(object);
        }
    }
    cache->weight = lbl_821CA45C[1];
}
