extern void fn_82975B00(void *, int, int, const char *, ...);

int fn_82954488(char *self)
{
    int mismatch = 0;
    unsigned int index = 0;
    for (; index < *(unsigned int *)(self + 0xc); ++index) {
        unsigned int *instruction;
        unsigned int kind;
        unsigned int *sampler;
        unsigned int mode;
        *(unsigned int *)(self + 0x100) = index;
        instruction = (*(unsigned int ***)(self + 0x18))[index];
        *(unsigned int **)(self + 0x104) = instruction;
        kind = instruction[0] & 0xfff00000;
        if (kind != 0 && instruction[1] != 0) {
            sampler = (*(unsigned int ***)(self + 0x14))[*(unsigned int *)instruction[2]];
            if (kind == 0x60500000 || kind == 0x60700000 || kind == 0x60800000 || kind == 0x60900000 ||
                kind == 0x60600000 || kind == 0x60000000 || kind == 0x60200000 || kind == 0x60300000 ||
                kind == 0x60400000 || kind == 0x60100000) {
                if ((sampler[15] & 0xc00000) != 0) {
                    mismatch = 1;
                }
                mode = 0x200000;
            } else if ((kind == 0x60a00000 || kind == 0x60c00000 || kind == 0x60d00000) ||
                       kind == 0x60e00000 || kind == 0x60b00000) {
                if ((sampler[15] & 0xa00000) != 0) {
                    mismatch = 1;
                }
                mode = 0x400000;
            } else {
                if (kind != 0x60f00000 && kind != 0x61100000 && kind != 0x61200000 && kind != 0x61300000 &&
                    kind != 0x61000000) {
                    continue;
                }
                if ((sampler[15] & 0x600000) != 0) {
                    mismatch = 1;
                }
                mode = 0x800000;
            }
            sampler[15] = mode;
        }
    }
    if (mismatch) {
        fn_82975B00(self, 0, 0x11bb, "sampler mismatch: sampler used inconsistently");
        return 0x80004005;
    }
    return 0;
}
