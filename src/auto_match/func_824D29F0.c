typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Part_824D29F0 {
    char pad0[0x50];
    __vector4 pos;      /* 0x50 */
    int pad60;
    float scale;        /* 0x64 */
    int pad68[2];
    unsigned int anim;  /* 0x70 */
    int counter;        /* 0x74 */
} Part_824D29F0;

typedef struct Owner_824D29F0 {
    char pad0[0x20];
    void *handle;       /* 0x20 */
    char pad24[0xf0 - 0x24];
    Part_824D29F0 part; /* 0xf0 */
} Owner_824D29F0;

typedef struct Out_824D29F0 {
    char pad0[0x180];
    __vector4 pos;      /* 0x180 */
    float scale;        /* 0x190 */
} Out_824D29F0;

extern int fn_824CD030(Owner_824D29F0 *owner);
extern unsigned int fn_82F513F8(void *handle);
extern void fn_82F51178(void *handle, unsigned int anim);
extern int fn_828B2DE8(unsigned int anim);
extern void fn_823BEEA0(Out_824D29F0 *out, int a, int counter);
extern void fn_82F53BE8(unsigned int anim);

static __forceinline int IsOther(void *handle, unsigned int anim)
{
    return fn_82F513F8(handle) != anim;
}

#define OWNER(p) ((Owner_824D29F0 *)((char *)(p) - 0xf0))

void fn_824D29F0(Part_824D29F0 *part, Out_824D29F0 *out)
{
    int counter;

    if (fn_824CD030(OWNER(part)) == 0 && IsOther(OWNER(part)->handle, part->anim)) {
        fn_82F51178(OWNER(part)->handle, part->anim);
    }
    counter = part->counter++;
    fn_823BEEA0(out, fn_828B2DE8(part->anim), counter);
    fn_82F53BE8(part->anim);
    part->pos = out->pos;
    part->scale = out->scale;
}
