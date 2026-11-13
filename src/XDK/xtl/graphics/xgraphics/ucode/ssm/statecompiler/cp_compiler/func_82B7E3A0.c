extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82AB6EC0(void *state, int reg);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\cp_compiler.cpp", line)

enum {
    AS_Z_SURFACE_FMT__DEPTH_D24_S8 = 0x1f,
    AS_Z_SURFACE_FMT__DEPTH_D24_X8 = 0x20
};
enum {
    AS_SURFACE_NUMERIC__URF = 0,
    AS_SURFACE_NUMERIC__FLOAT = 0x40
};

int fn_82B7E3A0(void *state)
{
    unsigned int asZformat = fn_82AB6EC0(state, 0x31);
    unsigned int asZnumeric = fn_82AB6EC0(state, 0x32);

    CP_ASSERT(asZformat == AS_Z_SURFACE_FMT__DEPTH_D24_S8 || asZformat == AS_Z_SURFACE_FMT__DEPTH_D24_X8, 0x180);
    CP_ASSERT(asZnumeric == AS_SURFACE_NUMERIC__URF || asZnumeric == AS_SURFACE_NUMERIC__FLOAT, 0x184);
    if (asZformat < AS_Z_SURFACE_FMT__DEPTH_D24_S8 || asZformat > AS_Z_SURFACE_FMT__DEPTH_D24_X8) {
        return 0;
    }
    return asZnumeric == AS_SURFACE_NUMERIC__FLOAT;
}
