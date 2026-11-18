extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define IRINST_FILE                                                                                          \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\irinst.cpp"

#define IR_ASSERT_TEXT(e, text, line)                                                                        \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", text, IRINST_FILE, line)

typedef struct Reg_82BC2580 {
    char pad00[0xc];
    int usage; /* 0x0c */
    int index; /* 0x10 */
    char pad14[0xc];
    int type; /* 0x20 */
} Reg_82BC2580;

typedef struct Inst_82BC2580 Inst_82BC2580;

typedef struct InstVtbl_82BC2580 {
    void *slots[5];
    unsigned char (*IsSourceSlot)(Inst_82BC2580 *self); /* 0x14 */
    void (*ResolveSource)(Inst_82BC2580 *self);         /* 0x18 */
} InstVtbl_82BC2580;

struct Inst_82BC2580 {
    InstVtbl_82BC2580 *vt; /* 0x000 */
    char pad04[0xc];
    int numDst; /* 0x010 */
    int numSrc; /* 0x014 */
    char pad18[4];
    Reg_82BC2580 *aRegs[7]; /* 0x01c */
    int aOperand[6];        /* 0x038 */
    int aOperandType[6];    /* 0x050 */
    char pad68[0x3b4 - 0x68];
    void *owningBlock; /* 0x3b4 */
};

unsigned char fn_82BC2580(Inst_82BC2580 *self)
{
    int i;

    for (i = 0; i < self->numDst; i++) {
        IR_ASSERT_TEXT(self->aRegs[i], "aRegs[i]", 0x88);
        IR_ASSERT_TEXT(self->aOperandType[i] == self->aRegs[i]->type,
                       "aOperandType[i] == aRegs[i]->GetType()", 0x89);
        IR_ASSERT_TEXT(
            self->aOperand[i] == self->aRegs[i]->index || self->aOperand[i] == self->aRegs[i]->usage,
            "( aOperand[i] == aRegs[i]->GetIndex() ) || ( aOperand[i] == aRegs[i]->GetUsage() )", 0x8b);
        self->vt->IsSourceSlot(self);
    }
    for (i = 1; i < self->numSrc + self->numDst; i++) {
        IR_ASSERT_TEXT(self->aRegs[i], "aRegs[i]", 0x91);
        IR_ASSERT_TEXT(self->aOperandType[i] == self->aRegs[i]->type,
                       "aOperandType[i] == aRegs[i]->GetType()", 0x92);
        IR_ASSERT_TEXT(
            self->aOperand[i] == self->aRegs[i]->index || self->aOperand[i] == self->aRegs[i]->usage,
            "( aOperand[i] == aRegs[i]->GetIndex() ) || ( aOperand[i] == aRegs[i]->GetUsage() )", 0x94);
        if (!self->vt->IsSourceSlot(self))
            self->vt->ResolveSource(self);
    }
    IR_ASSERT_TEXT(self->owningBlock != 0, "owningBlock != 0", 0x99);
    return 1;
}
