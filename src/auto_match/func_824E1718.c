typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Handle_824E1718 {
    int id;
} Handle_824E1718;

typedef struct Body_824E1718 {
    char pad0[0x90];
    __vector4 pos;      /* 0x90 */
    __vector4 rot;      /* 0xa0 */
} Body_824E1718;

typedef struct Part_824E1718 {
    char pad0[0xc];
    Body_824E1718 *body; /* 0x0c */
} Part_824E1718;

typedef struct Owner_824E1718 {
    Handle_824E1718 handle; /* 0x00 */
    char pad4[0xd0 - 4];
    Part_824E1718 part; /* 0xd0 */
} Owner_824E1718;

typedef struct Out_824E1718 {
    char pad0[0x180];
    __vector4 pos;      /* 0x180 */
    char pad190[0x10];
    __vector4 rot;      /* 0x1a0 */
} Out_824E1718;

extern int fn_82F4DA20(int kind);
extern void fn_82F50D98(Handle_824E1718 handle);
extern int fn_82F4ECF8(void);
extern void fn_823BF078(Out_824E1718 *out, int a, int b);

void fn_824E1718(Part_824E1718 *part, Out_824E1718 *out)
{
    Owner_824E1718 *owner = (Owner_824E1718 *)((char *)part - 0xd0);
    int a = fn_82F4DA20(2);
    Handle_824E1718 h = owner->handle;

    fn_82F50D98(h);
    fn_823BF078(out, a, fn_82F4ECF8());
    out->pos = part->body->pos;
    out->rot = part->body->rot;
}
