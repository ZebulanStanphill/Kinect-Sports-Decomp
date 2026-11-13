typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_824E1660 {
    char pad0[0x88];
    unsigned int anim;  /* 0x88 */
    int counter;        /* 0x8c */
    __vector4 pos;      /* 0x90 */
    __vector4 rot;      /* 0xa0 */
} State_824E1660;

typedef struct Part_824E1660 {
    char pad0[0xc];
    State_824E1660 *state; /* 0xc */
} Part_824E1660;

typedef struct Owner_824E1660 {
    char pad0[0x20];
    void *handle;       /* 0x20 */
    char pad24[0xf0 - 0x24];
    Part_824E1660 part; /* 0xf0 */
} Owner_824E1660;

typedef struct Out_824E1660 {
    char pad0[0x180];
    __vector4 pos;      /* 0x180 */
    char pad190[0x10];
    __vector4 rot;      /* 0x1a0 */
} Out_824E1660;

extern int fn_824CD030(Owner_824E1660 *owner);
extern unsigned int fn_82F513F8(void *handle);
extern void fn_82F51178(void *handle, unsigned int anim);
extern int fn_828B2DE8(unsigned int anim);
extern void fn_823BEEA0(Out_824E1660 *out, int a, int counter);
extern void fn_82F53BE8(unsigned int anim);

static __forceinline int IsOther(void *handle, unsigned int anim)
{
    return fn_82F513F8(handle) != anim;
}

#define OWNER(p) ((Owner_824E1660 *)((char *)(p) - 0xf0))

void fn_824E1660(Part_824E1660 *part, Out_824E1660 *out)
{
    int counter;

    if (fn_824CD030(OWNER(part)) == 0 && IsOther(OWNER(part)->handle, part->state->anim)) {
        fn_82F51178(OWNER(part)->handle, part->state->anim);
    }
    counter = part->state->counter++;
    fn_823BEEA0(out, fn_828B2DE8(part->state->anim), counter);
    fn_82F53BE8(part->state->anim);
    part->state->pos = out->pos;
    part->state->rot = out->rot;
}
