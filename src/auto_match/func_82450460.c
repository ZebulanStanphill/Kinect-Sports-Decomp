typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef struct { char pad[0x14]; int h; } Item;
typedef struct { char pad[0xa8]; int dev; } Ctx;
typedef struct { char pad[0x40]; Ctx **ctx; } Self;
extern Item *fn_82450348(Self *s, int i);
extern void fn_8255E0B0(int h, int n, __vector4 *out);
extern void fn_824C8210(int dev, __vector4 v);

void fn_82450460(Self *s)
{
    __vector4 v;
    fn_8255E0B0(fn_82450348(s, 0)->h, 4, &v);
    fn_824C8210((*s->ctx)->dev, v);
}
