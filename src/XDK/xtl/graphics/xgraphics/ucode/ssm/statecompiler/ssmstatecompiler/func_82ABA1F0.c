extern void fn_82AB15D0(void *object, const char *format, const char *expression, const char *file, int line);
extern unsigned int fn_82AB6EC0(void *state, int type);
extern void *fn_82AB9738(void *store, unsigned int handle);
extern void *fn_82B6D410(void *pool, int type);
extern void *fn_82B7F3D8(void *object);
extern void fn_82AB6F58(void *context, unsigned int handle);
extern void fn_82AB81E8(void *context);
extern void fn_82AB7010(void *context, void *source);
extern void fn_82BA02A8(void *log, const char *format, ...);
extern int fn_82B7D980(void *log, void *context, void *shader, void *state);
extern int fn_82AB7C30(void *context);
extern void fn_82B7E460(void *object, void *state);

#define SC_ASSERT(expression, line)                                                                          \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", expression,                                               \
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\"           \
                "statecompiler\\ssmstatecompiler.cpp",                                                       \
                line)

int fn_82ABA1F0(char *self, void *state, void **out)
{
    void *log = *(void **)(self + 0x20);
    void *store = *(void **)(self + 0x10);
    unsigned int handle = fn_82AB6EC0(state, 1);
    void *shader = fn_82AB9738(store, handle);
    if (shader == 0) {
        SC_ASSERT("pILPixel != 0", 0x232);
        return 0x13;
    } else {
        void *object = fn_82B6D410(*(void **)(self + 0xc), 2);
        *out = object;
        if (object == 0) {
            SC_ASSERT("!\"Could not allocate a new Compiled Program\"", 0x23d);
            return 0x10;
        } else {
            void *context = fn_82B7F3D8(object);
            int result;
            fn_82AB6F58(context, handle);
            fn_82AB81E8(*(void **)(self + 0x2c));
            fn_82AB7010(context, *(void **)(self + 0x2c));
            fn_82BA02A8(log, "PixelShaderHandle  = %d\n", handle);
            result = fn_82B7D980(log, context, shader, state);
            if (result != 0) {
                return result;
            }
            result = fn_82AB7C30(context);
            if (result != 0) {
                return result;
            }
            fn_82B7E460(*out, state);
            return 0;
        }
    }
}
