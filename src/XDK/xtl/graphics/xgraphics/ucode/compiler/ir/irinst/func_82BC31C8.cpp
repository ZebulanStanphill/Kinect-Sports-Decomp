extern "C" void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define IRINST_CPP                                                                                           \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\irinst.cpp"
#define IR_ASSERT(e, line)                                                                                   \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, IRINST_CPP, line)

#define OP_UNKNOWN 0
#define eOp (self->op)
#define GetArgNegate(i) (self->argNegate[i])

typedef struct OpInfo_82BC31C8 {
    int f0;
    int swappedOp; /* 0x04 */
    int rest[11];
} OpInfo_82BC31C8;

struct R400Tables {
    enum Op {
        ADD = 0x34,
        SUB = 0x35
    };
};

class Inst_82BC31C8
{
  public:
    virtual void vf00();
    virtual int GetSourceCount(); /* 0x4 */

    char pad04[0x14];
    int op; /* 0x18 */
    char pad1c[0x68];
    unsigned char swizzle0[4]; /* 0x84 */
    unsigned char swizzle1[4]; /* 0x88 */
    char pad8c[0xc];
    unsigned char argNegate[3]; /* 0x98 */
};

extern "C" OpInfo_82BC31C8 lbl_8316FF50[];

extern "C" void fn_82BC31C8(Inst_82BC31C8 *self, int swizzle0, int swizzle1, unsigned char negate)
{
    int count = self->GetSourceCount();

    self->op = lbl_8316FF50[self->op].swappedOp;
    IR_ASSERT(eOp != OP_UNKNOWN, 0x598);
    if (negate) {
        IR_ASSERT(eOp == R400Tables::ADD, 0x59a);
        self->op = R400Tables::SUB;
        self->argNegate[2] = !self->argNegate[2];
        IR_ASSERT(GetArgNegate(1) == GetArgNegate(2), 0x59e);
    }
    self->swizzle0[0] = swizzle0;
    self->swizzle0[1] = swizzle0;
    self->swizzle0[2] = swizzle0;
    self->swizzle0[3] = swizzle0;
    if (count == 2) {
        self->swizzle1[0] = swizzle1;
        self->swizzle1[1] = swizzle1;
        self->swizzle1[2] = swizzle1;
        self->swizzle1[3] = swizzle1;
    }
}
