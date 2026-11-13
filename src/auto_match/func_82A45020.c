typedef int (*code)();
typedef unsigned __int64 U64;

typedef struct Out_82A45020 {
    unsigned int buffer;
    unsigned int count;
    U64 position;
} Out_82A45020;

typedef struct Info_82A45020 {
    unsigned int a;
    unsigned int b;
    U64 position;
} Info_82A45020;

extern void fn_82A443F0(int self);

void fn_82A45020(int param_1, Out_82A45020 *out)
{
    Info_82A45020 info;

    (*(code *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
    fn_82A443F0(param_1);
    if (*(unsigned int *)(param_1 + 0xb4) != 0 && *(unsigned int **)(param_1 + 0xac) != 0)
        out->buffer = **(unsigned int **)(param_1 + 0xac);
    else
        out->buffer = 0;
    out->count = *(unsigned int *)(param_1 + 0xb4);
    (*(code *)(**(int **)(param_1 + 0x90) + 0x38))(*(int **)(param_1 + 0x90), &info);
    out->position = info.position / *(unsigned int *)(param_1 + 0xcc);
    if (*(unsigned short *)(param_1 + 0xd8) == 2)
        out->position *= (unsigned int)(*(unsigned int *)(param_1 + 0xcc) * 2 / *(unsigned int *)(param_1 + 0x40) - 0xc);
    (*(code *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
}
