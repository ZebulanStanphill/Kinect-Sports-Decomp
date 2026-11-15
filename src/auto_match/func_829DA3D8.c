extern char lbl_832178F8[260];
extern int fn_82F664B0(char *, unsigned int, const char *);
extern int fn_82F69A80(char *, unsigned int, const char *);
extern int fn_829D3930(const char *);
extern int fn_829D99D0(unsigned int);
extern void fn_829D5110(void);
extern int fn_829DA310(void *);
extern void fn_829D6A90(void);
extern int fn_82A2B0F8(void (*)(void));

int fn_829DA3D8(unsigned int flags, void *context, const char *directory)
{
    char version[260];
    char identity[260];
    int result;
    if (fn_82F664B0(lbl_832178F8, 260, directory) != 0)
        goto invalid;
    if (fn_82F664B0(identity, 260, directory) != 0)
        goto invalid;
    if (fn_82F69A80(identity, 260, "NuiIdentity.bin.be") != 0)
        goto invalid;
    if (fn_82F664B0(version, 260, directory) != 0)
        goto invalid;
    if (fn_82F69A80(version, 260, "NuiIdentityDbVersion.txt") != 0)
        goto invalid;
    goto success;
invalid:
    return 0x80070057;
success:
    result = fn_829D3930(version);
    if (result < 0)
        goto done;
    result = fn_829D99D0(flags);
    if (result < 0)
        goto done;
    fn_829D5110();
    result = fn_829DA310(context);
    if (result >= 0 && (flags & (int)0x80000000) == 0) {
        result = fn_82A2B0F8(fn_829D6A90);
    }
done:
    return result;
}
