struct Instruction_82BD2E50;

struct Vtable_82BD2E50 {
    void *slots[13];
    unsigned char (*isConstant)(struct Instruction_82BD2E50 *self);
};

struct Instruction_82BD2E50 {
    struct Vtable_82BD2E50 *vtable;
    char padding[0x14];
    unsigned int opcode; /* 0x18 */
};

struct State_82BD2E50 {
    int unused;
    int current;           /* 0x04 */
    unsigned char channel; /* 0x08 */
};

struct Opcode_82BD2E50 {
    unsigned int padding : 29;
    unsigned int reverse : 1;
    unsigned int other : 2;
    char remainder[0x30];
};
extern struct Opcode_82BD2E50 lbl_8316FF50[];
extern int lbl_820E83A8[];
extern int fn_82BD2C30(struct Instruction_82BD2E50 *instruction, unsigned char *channel);
extern void fn_82AB15D0(int severity, const char *format, ...);

int fn_82BD2E50(struct State_82BD2E50 *self, struct Instruction_82BD2E50 *instruction)
{
    unsigned char channel;
    int constant;
    int index;
    if (instruction->vtable->isConstant(instruction)) {
        return 1;
    }
    constant = fn_82BD2C30(instruction, &channel);
    if (!(constant != -1)) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "const_state != -1",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\"
                    "compiler\\opt\\schedmodel.cpp",
                    0xa9);
    }
    if (self->current != 0 && constant != 0 && self->channel != channel) {
        return 0;
    }
    if ((unsigned char)lbl_8316FF50[instruction->opcode].reverse) {
        if (!(constant <= 4)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "const_state <= CAR",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\"
                        "compiler\\opt\\schedmodel.cpp",
                        0xb6);
        }
        index = self->current * 5 + constant;
    } else {
        if (!(self->current <= 4)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "cur_state <= CAR",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\"
                        "compiler\\opt\\schedmodel.cpp",
                        0xb9);
        }
        index = constant * 5 + self->current;
    }
    return (unsigned int)(lbl_820E83A8[index] + 1) != 0;
}
