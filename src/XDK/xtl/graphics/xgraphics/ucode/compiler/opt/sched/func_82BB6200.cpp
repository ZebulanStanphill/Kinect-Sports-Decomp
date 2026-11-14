#define SCHED_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp", line)

extern "C" void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

class Inst_82BB6200 {
public:
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
    virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11();
    virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16();
    virtual bool IsMovBase();       /* slot 17, 0x44 */

    char pad4[0xa8 - 0x4];
    int block;                      /* 0xa8 */
};

extern "C" void *fn_82BC30C0(Inst_82BB6200 *inst);

extern "C" bool fn_82BB6200(Inst_82BB6200 *in1, Inst_82BB6200 *in2)
{
    void *base1;
    void *base2;

    SCHED_ASSERT(in1->IsMovBase(), 0xd5);
    SCHED_ASSERT(in2->IsMovBase(), 0xd6);
    base1 = fn_82BC30C0(in1);
    base2 = fn_82BC30C0(in2);
    return in1->block == in2->block && base1 != 0 && base2 != 0 && base1 == base2;
}
