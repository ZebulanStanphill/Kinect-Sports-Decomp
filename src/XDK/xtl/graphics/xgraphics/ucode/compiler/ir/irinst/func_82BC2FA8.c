typedef struct Instruction_82BC2FA8 Instruction_82BC2FA8;

struct Instruction_82BC2FA8 {
    int (**vtable)(Instruction_82BC2FA8 *);
    int unused4;
    Instruction_82BC2FA8 *next; /* 0x8 */
    char pad[8];
    int inputCount; /* 0x14 */
    char pad18[0xcc];
    unsigned int flags;              /* 0xe4 */
    Instruction_82BC2FA8 *inputs[1]; /* 0xe8 */
};

extern void fn_82AB15D0(int, const char *, ...);

unsigned char fn_82BC2FA8(Instruction_82BC2FA8 *self, int arg, Instruction_82BC2FA8 *first)
{
    Instruction_82BC2FA8 *input = self->inputs[arg];
    Instruction_82BC2FA8 *head = first;
    unsigned char stop = 0;
    while (head) {
        if (stop) {
            return 0;
        }
        if ((head->flags & 1) && input == head) {
            if ((arg != self->inputCount || !(unsigned char)((self->flags >> 9) & 1)) &&
                !(unsigned char)input->vtable[13](input)) {
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)",
                            "(arg == NumInputs() && HasPartialWriteInput()) || head->IsPseudo()",
                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\"
                            "xgraphics\\ucode\\compiler\\ir\\irinst.cpp",
                            0x287);
            }
            return 1;
        }
        stop = (~head->flags >> 2) & 1;
        head = head->next;
    }
    return 0;
}
