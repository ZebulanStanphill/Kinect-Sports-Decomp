typedef struct Program_82B7F730 {
    void *allocatorContext;                  /* 0x00 */
    void *(*allocate)(void *, unsigned int); /* 0x04 */
    unsigned int reserved;                   /* 0x08 */
    void *patchContext;                      /* 0x0c */
} Program_82B7F730;

extern void *fn_82AB7358(void *);
extern unsigned int fn_82AB60F0(void *);
extern unsigned int *fn_82AB7198(void *);
extern void *fn_82AB63F8(void *);
extern void *fn_82AB66F8(void *, void *);
extern int *fn_82AB67A8(void *);
extern void fn_82B7F5B8(int *, void *, void *, void *);
extern void fn_82AB15D0(int, const char *, ...);
extern void *memcpy(void *, const void *, unsigned int);

void *fn_82B7F730(Program_82B7F730 *self, void *source, void *patches)
{
    void *list = fn_82AB7358(source);
    void *result;
    if (fn_82AB60F0(list) != 0) {
        unsigned int *program = fn_82AB7198(source);
        unsigned int size = (program[0] + 2) * 4;
        void *item;
        result = self->allocate(self->allocatorContext, size);
        memcpy(result, program, size);
        for (item = fn_82AB63F8(list); item != 0; item = fn_82AB66F8(list, item)) {
            int *description = fn_82AB67A8(item);
            if (*description != 0) {
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "!\"Unknown Patch Description\"",
                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\"
                            "ucode\\ssm\\statecompiler\\compiledprogram.cpp",
                            0x34a);
            } else {
                fn_82B7F5B8(description, result, patches, self->patchContext);
            }
        }
        return result;
    }
    return 0;
}
