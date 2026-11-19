typedef struct Register_829A9AF8 {
    int f0;
    unsigned int flags; /* 0x04 */
} Register_829A9AF8;

typedef struct Location_829A9AF8 {
    char pad0[0x3c];
    int position; /* 0x3c */
} Location_829A9AF8;

typedef struct Compiler_829A9AF8 {
    char pad0[0x10];
    Register_829A9AF8 **registers; /* 0x10 */
    char pad14[0x4];
    Location_829A9AF8 **locations; /* 0x18 */
} Compiler_829A9AF8;

typedef struct Instruction_829A9AF8 {
    int f0;
    unsigned int reg; /* 0x04 */
    char pad8[0x40];
    unsigned int location; /* 0x48 */
} Instruction_829A9AF8;

extern int fn_8295A330(Compiler_829A9AF8 *self, unsigned int kind);
extern void fn_82975B00(Compiler_829A9AF8 *self, int location, int error, const char *format, ...);

int fn_829A9AF8(Compiler_829A9AF8 *self, Instruction_829A9AF8 *instruction)
{
    unsigned int flags = self->registers[instruction->reg]->flags;

    if ((flags & 0x100) != 0) {
        return fn_8295A330(self, 1);
    }
    if ((flags & 0x200) != 0 && (flags & 0x80) != 0) {
        return fn_8295A330(self, 9);
    }
    if ((flags & 0x200) != 0) {
        return fn_8295A330(self, 2);
    }
    if ((flags & 0x10) != 0) {
        return fn_8295A330(self, 3);
    }
    if ((flags & 0x2020) == 0x2020) {
        return fn_8295A330(self, 5);
    }
    if ((flags & 0x40020) == 0x40020) {
        return fn_8295A330(self, 6);
    }
    if ((flags & 0x20) != 0) {
        return fn_8295A330(self, 4);
    }
    if ((flags & 1) != 0 && (flags & 2) != 0) {
        return fn_8295A330(self, 7);
    }
    if ((flags & 2) != 0 && (flags & 4) != 0) {
        return fn_8295A330(self, 8);
    }
    if ((flags & 0x10000) != 0) {
        fn_82975B00(self, self->locations[instruction->location]->position, 0x1194,
                    "clip not supported in texture shaders");
    }
    return 0x80004005;
}
