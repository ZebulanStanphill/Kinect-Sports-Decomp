typedef unsigned int uint;
extern int fn_82417D18();
extern int fn_82536590();

typedef struct Sub {
    int f0;
    int f4;
    int f8;
    int fc;
    uint f10;
} Sub;

typedef struct S2 {
    char pad0[0x20];
    Sub sub;
    char pad34[0x40 - 0x34];
    int f40;
    char pad44[0x184 - 0x44];
    uint f184;
} S2;

void fn_82428E10(int param_1, S2 *param_2)
{
    int iVar1;
    Sub *s;

    fn_82417D18(*(int *)(param_1 + 4), 0, 0, 0);
    s = &param_2->sub;
    s->f0 = 1;
    if (s->f10 > param_2->f184) {
        s->f8 = 1;
        s->fc = 1;
    }
    *(int *)(*(int *)(param_1 + 4) + 0x278) = 1;
    param_2->f40 = 0;
    *(int *)(*(int *)(param_1 + 8) + 0x108) = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
    if (iVar1 == 0 || *(uint *)(iVar1 + 0x40) != 1) {
        fn_82536590(*(int *)(param_1 + 8) + 0x14ec, 0);
    }
}
