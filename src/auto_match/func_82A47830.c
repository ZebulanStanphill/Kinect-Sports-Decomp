typedef struct Out_82A47830 {
    unsigned int buffer;
    unsigned int count;
    unsigned __int64 position;
} Out_82A47830;

typedef struct Info_82A47830 {
    unsigned int a;
    unsigned int b;
    unsigned __int64 position;
} Info_82A47830;

extern void fn_82A443F0(int self);

void fn_82A47830(int param_1, Out_82A47830 *out)
{
    Info_82A47830 info;

    (*(int (**)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
    fn_82A443F0(param_1);
    if (*(unsigned int *)(param_1 + 0xb4) != 0 && *(unsigned int **)(param_1 + 0xac) != 0)
        out->buffer = **(unsigned int **)(param_1 + 0xac);
    else
        out->buffer = 0;
    out->count = *(unsigned int *)(param_1 + 0xb4);
    (*(int (**)())(**(int **)(param_1 + 0x90) + 0x38))(*(int **)(param_1 + 0x90), &info);
    out->position = (unsigned int)(info.position / (*(unsigned int *)(param_1 + 0x40) * 2));
    (*(int (**)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
}
