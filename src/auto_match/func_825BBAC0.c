typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Name_825BBAC0 {
    int data[8];
} Name_825BBAC0;

typedef struct Desc_825BBAC0 {
    __vector4 position;     /* 0x00 */
    __vector4 direction;    /* 0x10 */
    char pad20[0x70];
    __vector4 position2;    /* 0x90 */
    __vector4 direction2;   /* 0xa0 */
    char padb0[0x20];
    unsigned char flagA;    /* 0xd0 */
    unsigned char flagB;    /* 0xd1 */
    unsigned char padd2;
    unsigned char flagC;    /* 0xd3 */
    char padd4[0x14];
    int index;              /* 0xe8 */
    int extra;              /* 0xec */
    unsigned int color;     /* 0xf0 */
    char padf4[0xc];
} Desc_825BBAC0;

typedef struct Emitter_825BBAC0 {
    char pad0[0xc];
    int id;                 /* 0x0c */
    char pad10[4];
    float position[3];      /* 0x14 */
    float rotation[3];      /* 0x20 */
    char pad2c[8];
    unsigned int name;      /* 0x34 */
} Emitter_825BBAC0;

typedef struct Owner_825BBAC0 {
    char pad0[0x828];
    float scale;            /* 0x828 */
    char pad82c[0x110];
    void *effects;          /* 0x93c */
} Owner_825BBAC0;

extern void *lbl_83265A24;
extern const float lbl_82192730[7];
extern Name_825BBAC0 *fn_825200F0(Name_825BBAC0 *out, unsigned int *name);
extern unsigned char fn_827D6968(void *table, Name_825BBAC0 *name, int index);
extern void fn_82A1EFC0(void *dst, int value, unsigned int size);
extern __vector4 fn_8255ACE0(const float *angles, __vector4 v);
extern void fn_82575FA8(void *effects, unsigned int *name, Desc_825BBAC0 *desc, int a, int id, float scale, int b, float c, int d, int e);

static __forceinline __vector4 LoadFloat3(const void *p)
{
    __vector4 l = __lvlx(p, 0);
    __vector4 r = __lvrx(p, 12);
    r = __vsldoi(r, r, 4);
    return __vor(l, r);
}

static __forceinline __vector4 LoadPoint(const void *p)
{
    __vector4 v, mask, zero;

    v = LoadFloat3(p);
    mask = __VMXGetReg(67);
    zero = __VMXGetReg(77);
    return __vsel(v, zero, mask);
}

void fn_825BBAC0(Emitter_825BBAC0 *self, Owner_825BBAC0 *owner)
{
    Name_825BBAC0 name;
    Desc_825BBAC0 desc;
    float scale;

    if (self->name != 0) {
        fn_825200F0(&name, &self->name);
        if (fn_827D6968(lbl_83265A24, &name, -1)) {
            scale = owner->scale;
            fn_82A1EFC0(&desc, 0, sizeof(desc));
            desc.flagA = 1;
            desc.color = 0x0feeb1e0;
            desc.flagB = 1;
            desc.position2 = LoadPoint(self->position);
            desc.position = desc.position2;
            desc.direction2 = fn_8255ACE0(self->rotation, __VMXGetReg(72));
            desc.index = -1;
            desc.extra = 0;
            desc.flagC = 0;
            desc.direction = desc.direction2;
            fn_82575FA8(owner->effects, &self->name, &desc, 1, self->id, scale, 0, lbl_82192730[1], 0, 0);
        }
    }
}
