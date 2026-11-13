extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CW_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilewithqueries.cpp", line)

#define E_COMPILEWITH_LAST 0x2c

typedef int (*CompileWithQuery_82B6C7D0)(void *a, void *b, void *c, void *d, void *e);

extern CompileWithQuery_82B6C7D0 lbl_83161080[];

int fn_82B6C7D0(int eQuery, void *arg1, void *arg0)
{
    CW_ASSERT(eQuery >= 0, 0x11b);
    CW_ASSERT(eQuery < E_COMPILEWITH_LAST, 0x11c);
    return lbl_83161080[eQuery](arg0, arg1, 0, 0, 0);
}
