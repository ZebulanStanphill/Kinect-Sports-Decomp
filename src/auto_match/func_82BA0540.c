typedef struct Flags_82BA0540 {
    unsigned int pad : 22;
    unsigned int partial : 1;
    unsigned int pad2 : 9;
} Flags_82BA0540;

typedef struct Inst_82BA0540 {
    char pad0[0x14];
    int count;
    char pad18[0xe4 - 0x18];
    Flags_82BA0540 flags;
    void *resources[1];
} Inst_82BA0540;

extern int fn_82AB15D0();

#define IR_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IRInst.hpp", line)

void fn_82BA0540(Inst_82BA0540 *p, void *resource)
{
    int n;
    IR_ASSERT(resource, 0x77f);
    n = ++p->count;
    if ((unsigned char)p->flags.partial) {
        p->resources[n] = p->resources[n - 1];
        p->resources[p->count - 1] = resource;
    } else {
        p->resources[n] = resource;
    }
}
