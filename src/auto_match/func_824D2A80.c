typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Handle_824D2A80 {
    int id;
} Handle_824D2A80;

typedef struct Part_824D2A80 {
    char pad0[0x50];
    __vector4 pos;      /* 0x50 */
    int pad60;
    float scale;        /* 0x64 */
} Part_824D2A80;

typedef struct Owner_824D2A80 {
    Handle_824D2A80 handle; /* 0x00 */
    char pad4[0xd0 - 4];
    Part_824D2A80 part; /* 0xd0 */
} Owner_824D2A80;

typedef struct Out_824D2A80 {
    char pad0[0x180];
    __vector4 pos;      /* 0x180 */
    float scale;        /* 0x190 */
} Out_824D2A80;

extern int fn_82F4DA20(int kind);
extern void fn_82F50D98(Handle_824D2A80 handle);
extern int fn_82F4ECF8(void);
extern void fn_823BF078(Out_824D2A80 *out, int a, int b);

void fn_824D2A80(Part_824D2A80 *part, Out_824D2A80 *out)
{
    Owner_824D2A80 *owner = (Owner_824D2A80 *)((char *)part - 0xd0);
    int a = fn_82F4DA20(2);
    Handle_824D2A80 h = owner->handle;

    fn_82F50D98(h);
    fn_823BF078(out, a, fn_82F4ECF8());
    out->pos = part->pos;
    out->scale = part->scale;
}
