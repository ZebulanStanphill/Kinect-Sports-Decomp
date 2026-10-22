void fn_8253D448(int param_1, unsigned int param_2)
{
    unsigned int *p;
    unsigned int bit;
    int i;

    p = (unsigned int *)(*(int *)(param_1 + 0x1c) + 0x34);
    for (i = 0; i < 32; i++) {
        bit = 1 << i;
        if (bit & 0x4000) {
            p[i] &= 1;
        }
        if (bit & ~1u) {
            p[i] &= ~0x4000u;
        }
    }
    p = (unsigned int *)(*(int *)(param_1 + 0x1c) + 0x34);
    for (i = 0; i < 32; i++) {
        bit = 1 << i;
        if (bit & 0x4000) {
            p[i] |= param_2;
        }
        if (bit & param_2) {
            p[i] |= 0x4000;
        }
    }
}
