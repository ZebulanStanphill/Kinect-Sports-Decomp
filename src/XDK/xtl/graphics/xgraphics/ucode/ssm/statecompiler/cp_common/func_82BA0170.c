extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_FILE                                                                                              \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\"                                   \
    "ucode\\ssm\\statecompiler\\cp_common.cpp"

#define CP_ASSERT(e, text, line)                                                                             \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", text, CP_FILE, line)

typedef struct Format_82BA0170 {
    unsigned int fmt;
} Format_82BA0170;

#define XENOSCBFORMAT2HW_SIZE 17

/* hardware formats per surface format: plain, 0x40 and 3 variants, padding */
extern Format_82BA0170 lbl_820DDF18[][4];
extern unsigned int fn_82AB71F0(void *pCP, int field, void *state);

void fn_82BA0170(void *pCP, void *state, unsigned int *out)
{
    unsigned int asFormat = fn_82AB71F0(pCP, 0x22, state);
    unsigned int kind = fn_82AB71F0(pCP, 0x23, state);
    Format_82BA0170 *pFmt;

    fn_82AB71F0(pCP, 0x24, state);
    CP_ASSERT(asFormat > 0 && asFormat < XENOSCBFORMAT2HW_SIZE,
              "asFormat > 0 && asFormat < XENOSCBFORMAT2HW_SIZE", 0x229);
    if ((unsigned char)kind == 0x40) {
        pFmt = &lbl_820DDF18[asFormat][1];
        *out = pFmt->fmt;
        CP_ASSERT(*out != 0, "pFmt->fmt != 0", 0x234);
    } else if ((unsigned char)kind == 3) {
        pFmt = &lbl_820DDF18[asFormat][2];
        *out = pFmt->fmt;
        CP_ASSERT(*out != 0, "pFmt->fmt != 0", 0x23c);
    } else {
        pFmt = &lbl_820DDF18[asFormat][0];
        *out = pFmt->fmt;
        if (*out == 0 && asFormat != 1) {
            CP_ASSERT(0, "0", 0x249);
        }
    }
}
