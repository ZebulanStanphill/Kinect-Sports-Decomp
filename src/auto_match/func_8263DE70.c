// Unpacks a D3DCOLOR into a float vector (XMLoadColor shape: scale * unpacked + offset) and
// passes it to fn_8263DF30 once with no item, or once per 16-byte item of the given array.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Item_8263DE70 {
    char data[0x10];
} Item_8263DE70;

extern const __vector4 lbl_821CC0C0;     // four -32896.5 (unpack offset)
extern const __vector4 lbl_821CC0D0;     // four 32896.5 (unpack scale); symbols.txt calls it "G"

void fn_8263DF30(void *self, int target, const Item_8263DE70 *item, const __vector4 *color,
                 float depth, int flags);

static __forceinline __vector4 LoadColor(const unsigned int *source)
{
    __vector4 v = __lvlx(source, 0);

    v = __vsldoi(v, v, 1 << 2);
    v = __vupkd3d(v, 0);
    return __vmaddfp(lbl_821CC0D0, v, lbl_821CC0C0);
}

void fn_8263DE70(void *self, unsigned int count, const Item_8263DE70 *items, int target,
                 unsigned int color, float depth, int flags)
{
    __vector4 c = LoadColor(&color);

    if (items == 0) {
        fn_8263DF30(self, target, 0, &c, depth, flags);
    } else {
        unsigned int i;

        for (i = 0; i < count; i++) {
            fn_8263DF30(self, target, &items[i], &c, depth, flags);
        }
    }
}
