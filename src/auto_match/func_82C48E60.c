typedef struct {
    int f0;
    unsigned char name[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
} Out_82C48E60;
typedef struct {
    char pad0[0x9c];
    int f9c;
    int fa0;
    char pad[0x39f4 - 0xa4];
    int f39f4;
    char pad2[0x5580 - 0x39f8];
    int f5580;
    char pad3[0x5598 - 0x5584];
    int f5598;
    int f559c;
    int f55a0;
    int f55a4;
    int f55a8;
    char pad4[0x5634 - 0x55ac];
    int f5634;
    int f5638;
    int f563c;
    int f5640;
} In_82C48E60;
extern void *memcpy(void *, const void *, unsigned int);

void fn_82C48E60(Out_82C48E60 *o, In_82C48E60 *in, const unsigned char *name)
{
    o->f0 = in->f5598;
    memcpy(o->name, name, 0x20);
    o->f24 = in->f5580 != 0;
    o->f28 = in->f9c;
    o->f2c = in->fa0;
    o->f40 = in->f39f4 > 0;
    o->f30 = in->f5634;
    o->f34 = in->f5638;
    o->f38 = in->f563c;
    o->f3c = in->f5640;
    o->f44 = in->f559c;
    o->f48 = in->f55a4;
    o->f4c = in->f55a0;
    o->f50 = in->f55a8;
}
