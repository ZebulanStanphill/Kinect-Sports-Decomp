extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void fn_82AB8228(void *p, int a, int b, float f);

void fn_82AB7AB0(char *pCS, int a, int b, float f)
{
    if (pCS == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pCS", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", 0x726);
    }
    fn_82AB8228(*(void **)(pCS + 0x30), a, b, f);
}
