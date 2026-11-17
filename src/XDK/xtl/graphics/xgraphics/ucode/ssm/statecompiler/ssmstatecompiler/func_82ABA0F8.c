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

extern void fn_82AA0750(void *state, unsigned int kind, void *value);
extern void *fn_82B7F430(void *object);
extern int fn_82B7BA30(void *translator, void *state, void *program, void *options);

int fn_82ABA0F8(char *self, void *state, void *value, unsigned char pixel, void **out, void *options)
{
    void *object = fn_82B6D410(*(void **)(self + 0xc), 0);
    void *source;
    if (object == 0) {
        SC_ASSERT("!\"Could not allocate a new Compiled Program\"", 0x1e9);
        return 0x10;
    } else {
        fn_82AA0750(state, pixel != 0, value);
        fn_82AB81E8(*(void **)(self + 0x28));
        fn_82AB81E8(*(void **)(self + 0x2c));
        source = *(void **)(self + 0x28);
        fn_82AB7010(fn_82B7F430(object), source);
        source = *(void **)(self + 0x2c);
        fn_82AB7010(fn_82B7F3D8(object), source);
        fn_82B7BA30(*(void **)(self + 0x18), state, object, options);
        if (pixel == 0) {
            *out = fn_82B7F430(object);
        } else {
            *out = fn_82B7F3D8(object);
        }
        return fn_82AB7C30(*out);
    }
}
