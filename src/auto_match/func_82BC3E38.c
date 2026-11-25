typedef struct Compiler_82BC3E38 {
    char pad0[0x5ac];
    void *allocator; /* 0x5AC */
} Compiler_82BC3E38;

typedef struct Inst_82BC3E38 {
    void *vtable; /* 0x00 */
    char pad4[0xc];
    int unk10; /* 0x10 */
    int unk14; /* 0x14 */
    char pad18[0x38];
    int unk50; /* 0x50 */
    int unk54; /* 0x54 */
    char pad58[0x10];
    int unk68; /* 0x68 */
    int unk6C; /* 0x6C */
    char pad70[0x3c];
    int unkAC; /* 0xAC */
    int unkB0; /* 0xB0 */
    char padb4[4];
    unsigned short *modes; /* 0xB8 */
} Inst_82BC3E38;

extern char lbl_820E4610[];
extern Inst_82BC3E38 *fn_82BC33B0(Inst_82BC3E38 *self, int opcode, Compiler_82BC3E38 *compiler);
extern void *fn_82B7BD28(void *allocator, unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);

Inst_82BC3E38 *fn_82BC3E38(Inst_82BC3E38 *self, int opcode, Compiler_82BC3E38 *compiler)
{
    Inst_82BC3E38 *inst = fn_82BC33B0(self, opcode, compiler);
    unsigned short *modes;

    inst->unkAC = 0;
    inst->unk14 = 1;
    inst->vtable = lbl_820E4610;
    inst->unk10 = 1;
    inst->unkB0 = -1;
    inst->unk50 = 0;
    inst->unk54 = 0;
    inst->unk6C = 0;
    inst->unk68 = 0;
    modes = (unsigned short *)fn_82B7BD28(compiler->allocator, 0x1e);
    memset(modes, 0, 0x1e);
    modes[7] = 1;
    modes[0] = 3;
    modes[1] = 3;
    modes[2] = 3;
    modes[3] = 7;
    modes[4] = 7;
    modes[5] = 3;
    modes[6] = 3;
    modes[8] = 0;
    modes[9] = 1;
    modes[11] = 0;
    modes[12] = 0;
    modes[13] = 0;
    modes[14] = 0;
    modes[10] = 0;
    self->modes = modes;
    return self;
}
