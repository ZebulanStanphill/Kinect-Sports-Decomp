typedef struct { char pad[0x24]; int f24; } Slot_82FE02A0;
typedef struct {
    char pad0[0xc8];
    int fc8;
    char pad1[3];
    unsigned char idx;
    
    char fd0;
    char pad3[7];
    Slot_82FE02A0 *slots;
    char pad4[0x30];
    float f_f4, f_f8, f_fc;
    char pad5[0x50];
    int f158;
    int f15c;
    
    char f170;
} Obj_82FE02A0;
extern void fn_82FE3AE0(Slot_82FE02A0 *s, int a, int b, float x, float y, float z);

void fn_82FE02A0(Obj_82FE02A0 *o)
{
    if (o->f170 != 0 && o->f158 != 0 && (o->f158 != 1 || o->fd0 != 0)) {
        fn_82FE3AE0(o->slots + o->idx, o->f15c, o->fc8, o->f_f8, o->f_f4, o->f_fc);
        o->slots[o->idx].f24 = o->f158;
        if (o->f158 == 1 && o->fd0 == 2) {
            fn_82FE3AE0(o->slots + (o->idx + 1), o->f15c, o->fc8, o->f_f8, o->f_f4, o->f_fc);
            (o->slots + o->idx)[1].f24 = o->f158;
        }
    }
}
