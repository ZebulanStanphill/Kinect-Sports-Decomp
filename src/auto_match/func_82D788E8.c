unsigned __int64 fn_82D788E8(float *param_1, unsigned int *param_2)
{
    unsigned __int64 uVar1;
    unsigned int uVar2;
    unsigned int bVar3;

    if (param_1[0] > param_1[1]) {
        bVar3 = 0;
        uVar1 = 0x80;
    } else {
        bVar3 = 1;
        uVar1 = 0x40;
    }
    uVar2 = bVar3;
    if (param_1[2] > param_1[bVar3]) {
        uVar2 = 2;
        uVar1 = 0x20;
    }
    *param_2 = uVar2;
    return uVar1;
}
