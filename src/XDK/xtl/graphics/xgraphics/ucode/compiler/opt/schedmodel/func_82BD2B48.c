
struct Instruction_82BD2B48;

struct Vtable_82BD2B48 {
    void *slots[13];
    unsigned char (*isConstant)(struct Instruction_82BD2B48 *self); /* 0x34 */
};

struct Instruction_82BD2B48 {
    struct Vtable_82BD2B48 *vtable;
    char padding04[0x14];
    unsigned int opcode; /* 0x18 */
    char padding1C[0xc8];
    unsigned int flagBits : 30; /* 0xe4 */
    unsigned int isDead : 1;
    unsigned int lowBit : 1;
};

struct State_82BD2B48 {
    int unused;
    int cur_state; /* 0x04 */
};

struct Opcode_82BD2B48 {
    unsigned int padding : 28;
    unsigned int isTexture : 1;
    unsigned int other : 1;
    unsigned int reverse : 1;
    unsigned int last : 1;
    char remainder[0x30];
};

extern struct Opcode_82BD2B48 lbl_8316FF50[];
extern const int lbl_820E8368[4][4];
extern void fn_82AB15D0(int severity, const char *format, ...);

void fn_82BD2B48(struct State_82BD2B48 *self, struct Instruction_82BD2B48 *instruction)
{
    unsigned char isTexture;

    isTexture =
        (unsigned char)instruction->isDead ? 0 : (unsigned char)lbl_8316FF50[instruction->opcode].isTexture;
    if (!isTexture) {
        self->cur_state = lbl_820E8368[self->cur_state][3];
    } else if (!instruction->vtable->isConstant(instruction)) {
        if ((unsigned char)lbl_8316FF50[instruction->opcode].reverse)
            self->cur_state = lbl_820E8368[self->cur_state][1];
        else
            self->cur_state = lbl_820E8368[self->cur_state][2];
    }
    if (!(self->cur_state != -1)) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "cur_state != -1",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\"
                    "compiler\\opt\\schedmodel.cpp",
                    0x50);
    }
}
