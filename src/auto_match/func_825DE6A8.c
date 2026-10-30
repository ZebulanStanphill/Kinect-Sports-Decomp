typedef struct Cfg_825DE6A8 {
    char pad0[0x1a0];
    float f1a0;
    char pad1[0x1c0 - 0x1a4];
    int f1c0;
    char pad2[0x4d0 - 0x1c4];
    char f4d0[1];
} Cfg_825DE6A8;

typedef struct Dst_825DE6A8 {
    char b0[0x40];
    char b40[0x50];
    char b90[0x50];
    char bE0[0x50];
    char b130[0x124];
    char b254[0x124];
    char b378[0x248];
    char b5c0[0x120];
    char b6e0[0x120];
    char b800[0x10];
    char b810[0x1c];
    char b82c[0x10];
    char b83c[0x24];
    char b860[0x320];
    char bb80[0x348];
    int pad_ec8;
} Dst_825DE6A8;

void fn_825DE6A8(Cfg_825DE6A8 *c, int d)
{
    int iVar1;
    *(int *)(d + 0xeec) = d + 0x254;
    *(int *)(d + 0xef0) = d + 0x130;
    *(int *)(d + 0xef8) = d + 0xb80;
    *(int *)(d + 0xee8) = c->f1c0 != 0 ? d + 0x254 : d + 0x378;
    *(int *)(d + 0xef8) = d + 0xb80;
    *(int *)(d + 0xec8) = d + 0x6e0;
    *(int *)(d + 0xecc) = d + 0xe0;
    *(int *)(d + 0xed0) = d + 0x82c;
    *(int *)(d + 0xed4) = d + 0x83c;
    *(int *)(d + 0xed8) = d + 0x5c0;
    *(int *)(d + 0xee0) = d + 0x800;
    *(int *)(d + 0xee4) = d + 0x810;
    *(int *)(d + 0xef4) = d + 0x90;
    *(int *)(d + 0xefc) = d + 0x860;
    *(int *)(d + 0xedc) = d + 0x40;
    *(int *)(d + 0xf00) = d + 0x40;
    *(int *)(d + 0xf04) = d + 0xf14;
    *(int *)(d + 0xf08) = d + 0xf3c;
    *(float *)(d + 0xf0c) = c->f1a0;
    *(int *)(d + 0xf10) = (int)c->f4d0;
}
