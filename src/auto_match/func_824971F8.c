extern void fn_8254EEB8(void *target, int arg, float x, float y, float z);

void fn_824971F8(int param_1)
{
    int target = *(int *)(param_1 + 0x54);

    if (*(unsigned int *)(target + 4) != 0) {
        fn_8254EEB8((void *)target, *(int *)(param_1 + 0xc), 0.0f, 0.0f, 0.0f);
    }
    *(int *)(param_1 + 0x58) = 0;
}
