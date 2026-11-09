extern unsigned char fn_828116B8(unsigned char *bits, unsigned int index);

unsigned char fn_827F69E0(int param_1, unsigned int index)
{
    return fn_828116B8((unsigned char *)(((unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc +
                                          (unsigned int)*(unsigned short *)(param_1 + 0x30) +
                                          (unsigned int)*(unsigned short *)(param_1 + 0x2e)) * 4 +
                                         *(int *)(param_1 + 0x84)), index);
}
