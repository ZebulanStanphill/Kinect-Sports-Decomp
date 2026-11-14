typedef struct Writer_82AA3310 Writer_82AA3310;

extern void fn_82AA1C90(Writer_82AA3310 *, const char *, ...);
extern void fn_82AA2720(Writer_82AA3310 *, const char *);
extern void fn_82AA4498(Writer_82AA3310 *, const char *);
extern const char *lbl_8315FF90[2];
extern char lbl_82196F10[];
extern char lbl_82196F18[];

int fn_82AA4860(unsigned int flags, int kind, unsigned int *data, unsigned int size, Writer_82AA3310 *w)
{
    unsigned char autoZ;

    if (size < 0x24)
        return 0x80070057;
    fn_82AA4498(w, lbl_8315FF90[kind]);
    fn_82AA2720(w, "\\line");
    fn_82AA1C90(w, "\n");
    autoZ = (unsigned char)((*data >> 5) & 1);
    if ((unsigned char)((flags >> 7) & 1) != 0 || autoZ) {
        fn_82AA4498(w, "config");
        fn_82AA1C90(w, " AutoZ=%s", autoZ ? lbl_82196F18 : lbl_82196F10);
        fn_82AA2720(w, "\\line");
        fn_82AA1C90(w, "\n");
    }
    return 0;
}
