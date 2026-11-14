typedef struct Counter_82B7CD20 {
    unsigned __int64 cycles;
    int calls;
    const char *name;
    int pad;
} Counter_82B7CD20;

typedef struct Compiler_82B7CD20 {
    unsigned char pad[0x860];
    Counter_82B7CD20 counters[16];
} Compiler_82B7CD20;

extern void fn_82B7C958(Compiler_82B7CD20 *self, const char *fmt, ...);
extern int sprintf(char *buf, const char *fmt, ...);

void fn_82B7CD20(Compiler_82B7CD20 *self)
{
    char line[128];
    int i;

    fn_82B7C958(self, "Cpu Usage :           %6s  %20s\n", "called", "cycles");
    for (i = 0; i < 16; i++) {
        sprintf(line, "  %15s :   %6d  %20I64d\n", self->counters[i].name, self->counters[i].calls,
                self->counters[i].cycles);
        fn_82B7C958(self, line);
    }
}
