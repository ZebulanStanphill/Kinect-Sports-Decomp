extern int lbl_83248E40;
extern int lbl_83248E44;
extern int lbl_83248E48;

void fn_82E81780(int param_1)
{
    unsigned int v;

    *(int *)(param_1 + 0x658) = 1;
    if (*(int *)(param_1 + 0x1ff0) != 0 && *(int *)(*(int *)(param_1 + 0x1ff4) + 0xb4) != 0) {
        v = *(unsigned int *)(*(int *)(param_1 + 0x1ff4) + 0x48);
        if (v >= 1 && v <= 4) {
            *(unsigned int *)(param_1 + 0x658) = v;
        }
        return;
    }
    if (lbl_83248E44 != 0 || lbl_83248E48 != 0) {
        *(int *)(param_1 + 0x658) = 1;
    }
    if (*(int *)(param_1 + 0x1a74) != 0 && *(int *)(param_1 + 4) == 8) {
        *(int *)(param_1 + 0x658) = 1;
    }
    if (lbl_83248E40 != 0) {
        *(int *)(param_1 + 0x658) = 1;
    }
}
