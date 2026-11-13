extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
#define SCHED_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp", line)

typedef struct Reg_82BB54A0 {
    char pad0[0x38];
    int reg_num;     /* 0x38 */
    char pad3c[0x50 - 0x3c];
    int reg_type;    /* 0x50 */
} Reg_82BB54A0;

int fn_82BB54A0(Reg_82BB54A0 *r)
{
    int reg_num = r->reg_num;
    int reg_type = r->reg_type;
    SCHED_ASSERT(reg_num < (1<<16), 0x12c);
    SCHED_ASSERT(reg_type < (1<<15), 0x12d);
    return (reg_type << 16) + reg_num;
}
