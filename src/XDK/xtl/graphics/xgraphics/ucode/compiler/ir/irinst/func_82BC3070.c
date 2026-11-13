typedef struct IRInst_82BC3070 {
    char pad0[0x10];
    int f10;                /* 0x10 */
    char pad14[0x38 - 0x14];
    int f38;                /* 0x38 */
    char pad3c[0x50 - 0x3c];
    int opcode;             /* 0x50 */
    char pad54[0xe4 - 0x54];
    unsigned int flags;     /* 0xe4 */
} IRInst_82BC3070;

extern void fn_82BA0690(void *list, IRInst_82BC3070 *inst);

void fn_82BC3070(IRInst_82BC3070 *self, void *list, int opcode, int value)
{
    self->f38 = value;
    self->opcode = opcode;
    self->f10 = 0;
    self->flags |= 0x42;
    fn_82BA0690(list, self);
}
