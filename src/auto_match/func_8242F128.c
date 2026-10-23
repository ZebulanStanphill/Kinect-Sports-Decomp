extern int fn_82366AE8();

void fn_8242F128(int param_1, int *param_2)
{
    fn_82366AE8(*param_2, **(int **)(param_1 + 4) ==
                *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x174) + 0xb8));
    **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
}
