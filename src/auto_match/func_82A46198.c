typedef struct Out_82A46198 {
    unsigned int buffer;
    unsigned int count;
    unsigned __int64 position;
} Out_82A46198;

extern void fn_82A443F0(int self);

void fn_82A46198(int param_1, Out_82A46198 *out)
{
    (*(int (**)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
    fn_82A443F0(param_1);
    if (*(unsigned int *)(param_1 + 0xb4) != 0 && *(unsigned int **)(param_1 + 0xac) != 0)
        out->buffer = **(unsigned int **)(param_1 + 0xac);
    else
        out->buffer = 0;
    out->count = *(unsigned int *)(param_1 + 0xb4);
    out->position = *(unsigned __int64 *)(param_1 + 0x1f0) / (*(unsigned int *)(param_1 + 0x40) * 2);
    (*(int (**)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
}
