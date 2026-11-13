typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Slot_829F10C8 {
    int id;                     /* 0x00 */
    int pad04;
    int owner;                  /* 0x08 */
    float weightA;              /* 0x0c */
    int pad10;
    float weightB;              /* 0x14 */
    int pad18;
} Slot_829F10C8;

typedef struct Entry_829F10C8 {
    unsigned int kind;          /* 0x00 */
    char pad04[0xc];
    float radius;               /* 0x10 */
    char pad14[0xc];
    __vector4 position;         /* 0x20 */
    float strengthA;            /* 0x30 */
    char pad34[0x4];
    float strengthB;            /* 0x38 */
    char pad3c[0x14];
} Entry_829F10C8;

typedef struct Object_829F10C8 {
    __vector4 direction;        /* 0x000 */
    __vector4 previous;         /* 0x010 */
    char pad020[0x70];
    int last;                   /* 0x090 */
    char pad094[0x2c];
    Entry_829F10C8 entries[4];  /* 0x0c0 */
    Slot_829F10C8 slots[4];     /* 0x200 */
    unsigned int count;         /* 0x270 */
} Object_829F10C8;

__vector4 fn_829EFA80(Object_829F10C8 *self, __vector4 position, float strength, float radius);

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;
    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline unsigned char IsActive(float strength)
{
    return strength != 0.0f;
}

void fn_829F10C8(Object_829F10C8 *self, __vector4 direction)
{
    __vector4 previous = Normalize3(direction);
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        __vector4 toward;
        switch (self->entries[i].kind) {
        case 0:
            if (IsActive(self->entries[i].strengthA)) {
                toward = fn_829EFA80(self, self->entries[i].position, self->entries[i].strengthA, self->entries[i].radius);
                toward = Normalize3(toward);
                self->direction = __vmulfp(toward, Replicate(-1.0f));
                self->direction.vector4_f32[3] = -1.0f;
                self->previous = previous;
                self->slots[i].weightA = self->entries[i].strengthA;
                self->last = i;
            }
            break;
        case 1:
            continue;
        case 2:
            if (IsActive(self->entries[i].strengthB)) {
                toward = fn_829EFA80(self, self->entries[i].position, self->entries[i].strengthB, self->entries[i].radius);
                toward = Normalize3(toward);
                self->direction = __vmulfp(toward, Replicate(-1.0f));
                self->direction.vector4_f32[3] = -1.0f;
                self->previous = previous;
                self->slots[i].weightB = self->entries[i].strengthB;
                self->last = i;
            }
            break;
        }
    }
}
