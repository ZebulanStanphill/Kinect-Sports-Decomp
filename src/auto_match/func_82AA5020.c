typedef struct Writer_82AA3310 Writer_82AA3310;

typedef struct State_82AA5020 {
    Writer_82AA3310 *writer;
    int unused;
    unsigned int pass;
} State_82AA5020;

typedef union Definition_82AA5020 {
    int integers[4];
    float floats[4];
} Definition_82AA5020;

extern void fn_82AA1C90(Writer_82AA3310 *, const char *, ...);
extern void fn_82AA4498(Writer_82AA3310 *, const char *);
extern void fn_82AA1F00(void *, float);
extern const char lbl_820294C0[];
extern const char lbl_82196824[];
extern char lbl_82196F10[];
extern char lbl_82196F18[];

int fn_82AA5020(State_82AA5020 *self, unsigned int pass, unsigned int type, unsigned int reg,
                const Definition_82AA5020 *definition)
{
    int result = 0;

    if (pass == self->pass) {
        Writer_82AA3310 *writer = self->writer;
        switch (type) {
        case 2:
            fn_82AA4498(writer, "defi");
            fn_82AA1C90(writer, " i%u, %d, %d, %d, %d", reg, definition->integers[0], definition->integers[1],
                        definition->integers[2], definition->integers[3]);
            break;
        case 1: {
            const float *component;
            int count;
            fn_82AA4498(writer, lbl_820294C0);
            fn_82AA1C90(writer, " c%u", reg);
            component = definition->floats;
            count = 4;
            do {
                fn_82AA1C90(writer, lbl_82196824);
                fn_82AA1F00(writer, *component++);
            } while (--count != 0);
            break;
        }
        case 0:
            fn_82AA4498(writer, "defb");
            fn_82AA1C90(writer, " b%u, %s", reg, definition->integers[0] ? lbl_82196F18 : lbl_82196F10);
            break;
        default:
            result = 0x80004005;
            break;
        }
        fn_82AA1C90(writer, "\n");
    }
    return result;
}
