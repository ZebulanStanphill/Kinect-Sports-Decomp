extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define IR_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\irinst.cpp", line)

#define OP_UNKNOWN 0
#define GetArgNegate(i) (self->argNegate[i])

typedef struct OpInfo_82BC32F0 {
    int f0;
    int swappedOp;      /* 0x04 */
    int rest[11];
} OpInfo_82BC32F0;

typedef struct Inst_82BC32F0 {
    char pad00[0x18];
    int op;                     /* 0x18 */
    char pad1c[0x98 - 0x1c];
    unsigned char argNegate[3]; /* 0x98 */
} Inst_82BC32F0;

extern OpInfo_82BC32F0 lbl_8316FF50[];

unsigned char fn_82BC32F0(Inst_82BC32F0 *self)
{
    int op = self->op;
    int eOp = lbl_8316FF50[op].swappedOp;
    unsigned char negate = op == 0x35;

    self->op = eOp;
    IR_ASSERT(eOp != OP_UNKNOWN, 0x5b9);
    if (negate) {
        IR_ASSERT(GetArgNegate(1) == GetArgNegate(2), 0x5bc);
        self->argNegate[2] = !self->argNegate[2];
    }
    return negate;
}
