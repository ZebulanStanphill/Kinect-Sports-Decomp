typedef struct Compiler_828FCD28 {
    void *log;
    char pad4[0x48];
    int failed;
} Compiler_828FCD28;

extern void fn_828FA8D8(void *log, int a, int b, const char *fmt, ...);
extern void fn_828FAB00(void *log, int a, int b, const char *fmt, ...);

void fn_828FCD28(Compiler_828FCD28 *c, int isError, int base, const char *msg)
{
    if (isError != 0) {
        fn_828FA8D8(c->log, 0, base + 0x44c, "Microcode Compiler %s", msg);
        c->failed = 1;
    } else {
        fn_828FAB00(c->log, 0, base + 0x44c, "Microcode Compiler %s", msg);
    }
}
