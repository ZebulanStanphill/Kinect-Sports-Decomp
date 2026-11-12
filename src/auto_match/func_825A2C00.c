typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Float3_825A2C00 {
    float x, y, z;
} Float3_825A2C00;

typedef struct Item_825A2C00 {
    unsigned int flags;         // 0x00
    char pad04[0xc];
    Float3_825A2C00 direction;  // 0x10
    char pad1c[0x10];
    float scale;                // 0x2c
} Item_825A2C00;

typedef struct Sound_825A2C00 {
    __vector4 position;         // 0x00
    unsigned char hasPosition;  // 0x10
    unsigned char hasDirection; // 0x11
    char pad12[2];
    Float3_825A2C00 direction;  // 0x14
    float scale;                // 0x20
    char pad24[0x24];
    short id;                   // 0x48
} Sound_825A2C00;

extern const Float3_825A2C00 lbl_821C51B8;
extern const float lbl_821CA45C[2];

Float3_825A2C00 *fn_825934E8(Item_825A2C00 *item);
Sound_825A2C00 *fn_825A2AF8(void *a, void *b, void *c, int d, int flags);

static __forceinline __vector4 LoadFloat3(const Float3_825A2C00 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline const Float3_825A2C00 *ItemDirection(const Item_825A2C00 *item)
{
    if (item->flags & 4)
        return &item->direction;
    return &lbl_821C51B8;
}

static __forceinline float ItemScale(const Item_825A2C00 *item)
{
    if ((item->flags & 0x40) > 0)
        return item->scale;
    return lbl_821CA45C[1];
}

Sound_825A2C00 *fn_825A2C00(void *a, void *b, void *c, short id, int flags, Item_825A2C00 *item)
{
    Sound_825A2C00 *sound = fn_825A2AF8(a, b, c, 0, flags);

    if (sound == 0)
        return 0;
    if (item != 0) {
        if (item->flags & 1) {
            __vector4 v, zero, mask;
            sound->hasPosition = 1;
            v = LoadFloat3(fn_825934E8(item));
            zero = __VMXGetReg(77);
            mask = __VMXGetReg(67);
            sound->position = __vsel(v, zero, mask);
        }
        if (item->flags & 4) {
            const Float3_825A2C00 *d;
            sound->hasDirection = 1;
            d = ItemDirection(item);
            sound->direction.x = d->x;
            sound->direction.y = d->y;
            sound->direction.z = d->z;
        }
        if (item->flags & 0x40) {
            sound->scale = ItemScale(item);
        }
    }
    sound->id = id;
    return sound;
}
