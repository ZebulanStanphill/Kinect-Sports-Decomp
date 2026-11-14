typedef struct Settings_823980B0 {
    int f0;
    unsigned char disabled;
} Settings_823980B0;

typedef struct Mode_823980B0 {
    char pad[0x148];
    int kind;
} Mode_823980B0;

typedef struct Inner_823980B0 {
    char pad[0xd4];
    void *target;
} Inner_823980B0;

typedef struct Self_823980B0 {
    char pad[0xd4];
    Inner_823980B0 *inner;
    char padD8[0x2d8 - 0xd8];
    Mode_823980B0 *mode;
} Self_823980B0;

extern Settings_823980B0 *lbl_832975B0;
extern Settings_823980B0 *fn_82250A18(void);
extern void fn_8229CF08(void *target, unsigned int value, unsigned char mode);
extern void fn_8229CFB8(void *target, unsigned int value, unsigned char mode);

static __forceinline Settings_823980B0 *settings(void)
{
    return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

void fn_823980B0(Self_823980B0 *self, unsigned int value, int alt)
{
    unsigned int v = settings()->disabled ? 0 : value;
    unsigned char mode;
    int kind = self->mode->kind;

    if (kind != 1)
        mode = kind == 2 ? 2 : 0;
    else
        mode = 1;
    if (alt)
        fn_8229CF08(self->inner->target, v, mode);
    else
        fn_8229CFB8(self->inner->target, v, mode);
}
