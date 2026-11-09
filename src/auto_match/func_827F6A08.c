extern unsigned char fn_828116B8(unsigned char *bits, unsigned int index);

unsigned char fn_827F6A08(int param_1, unsigned int index)
{
    return fn_828116B8((unsigned char *)(((unsigned int)*(unsigned short *)(param_1 + 0x30) + (unsigned int)*(unsigned short *)(param_1 + 0x2e) +
             (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc) * 4 +
             ((int)(*(unsigned short *)(param_1 + 0x32) + 7) >> 3) + *(int *)(param_1 + 0x84)), index);
}
