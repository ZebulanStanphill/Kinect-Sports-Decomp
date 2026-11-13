typedef struct Obj_82A4F700 {
    char pad[0x24];
    unsigned short f24;
    unsigned short f26;
    unsigned short f28;
    char pad2a[0x34 - 0x2a];
    unsigned int f34;
} Obj_82A4F700;

extern unsigned short fn_82A68BB0(unsigned short a, unsigned short b);

unsigned int fn_82A4F700(Obj_82A4F700 *o, int n)
{
    unsigned short r = fn_82A68BB0(o->f26, o->f24);
    return o->f34 / o->f28 + r * n;
}
