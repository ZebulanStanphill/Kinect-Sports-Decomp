#define I(off) (*(int *)(p + (off)))
#define L(off) (*(__int64 *)(p + (off)))

void fn_82F00740(char *p, int n)
{
    int a;
    int b;

    I(0x784c) = I(0x7844);
    I(0x7848) = I(0x7840);
    I(0x782c) = I(0x7824);
    I(0x7828) = I(0x7820);
    if (I(0x6d54) != 0 && I(0x7b38) != 0 && I(0x6de8) == 1) {
        return;
    }
    if (I(0x84c) != 0 && L(0x2e0) > 1) {
        return;
    }
    if (I(0x7808) != 0) {
        if (I(0x7810) == 0) {
            return;
        }
        if (L(0x2e0) <= 1) {
            return;
        }
        if ((I(0x1e4c) & 1) != 0) {
            return;
        }
        I(0x7820) = I(0x7820) + 1;
        I(0x7820) = I(0x7820) > 8 ? 1 : I(0x7820);
        I(0x7824) = I(0x7820) + 1;
        I(0x7824) = I(0x7824) > 8 ? 1 : I(0x7824);
        I(0x7844) = I(0x7824);
        I(0x7840) = I(0x7820);
        return;
    }
    I(0x7824) = 0;
    I(0x7820) = 0;
    if (n >= 0x18) {
        a = n - 0x17;
        I(0x7820) = a;
        if (a >= 8) {
            a = 8;
        }
        b = a + 2;
        I(0x7820) = a;
        I(0x7824) = b;
        if (b >= 8) {
            b = 8;
        }
        I(0x7824) = b;
        I(0x2a0) -= a;
    }
    I(0x7840) = I(0x7820);
    I(0x7844) = I(0x7824);
    if (I(0x7820) != I(0x7828) || I(0x7824) != I(0x782c)) {
        I(0x7814) = 1;
        I(0x7818) = 1;
    }
}
