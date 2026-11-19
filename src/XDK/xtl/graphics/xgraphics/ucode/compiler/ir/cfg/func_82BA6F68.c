typedef struct Options_82BA6F68 {
    char pad000[0x57c];
    int exportMode; /* 0x57c */
    char pad580[0x7ec - 0x580];
    unsigned char validate; /* 0x7ec */
    char pad7ed[0x858 - 0x7ed];
    unsigned int flags; /* 0x858 */
} Options_82BA6F68;

typedef struct Cfg_82BA6F68 {
    char pad000[0xc];
    Options_82BA6F68 *options; /* 0x0c */
    char pad010[0x6c - 0x10];
    void *colorExportInstruction; /* 0x6c */
    void *depthExportInstruction; /* 0x70 */
    char pad074[0x828 - 0x74];
    int exportMode; /* 0x828 */
    char pad82c[0x860 - 0x82c];
    unsigned char compiled; /* 0x860 */
    char pad861[0x86c - 0x861];
    int normalizedSwizzles; /* 0x86c */
} Cfg_82BA6F68;

extern void fn_82AB15D0(int level, const char *format, ...);
extern void fn_82BA02A8(void *log, const char *format, ...);
extern void fn_82BA0750(Cfg_82BA6F68 *self);
extern void fn_82BA1C20(Cfg_82BA6F68 *self);
extern void fn_82BA20F0(Cfg_82BA6F68 *self);
extern void fn_82BA2408(Cfg_82BA6F68 *self);
extern void fn_82BA2600(Cfg_82BA6F68 *self, int arg);
extern void fn_82BA2EC0(Cfg_82BA6F68 *self);
extern void fn_82BA40E8(Cfg_82BA6F68 *self);
extern void fn_82BA47F0(Cfg_82BA6F68 *self);
extern void fn_82BA48F0(Cfg_82BA6F68 *self);
extern void fn_82BA6530(Cfg_82BA6F68 *self);
extern void fn_82BA66C0(Cfg_82BA6F68 *self);
extern void fn_82BA6EA8(Cfg_82BA6F68 *self);
extern void fn_82BC7030(Cfg_82BA6F68 *self);
extern void fn_82BC9680(void);
extern void fn_82BCFC38(Cfg_82BA6F68 *self);

void fn_82BA6F68(Cfg_82BA6F68 *self, int arg)
{
    fn_82BC9680();
    if (self->compiled) {
        if (self->options->validate)
            fn_82BA2EC0(self);
        fn_82BA47F0(self);
        fn_82BA48F0(self);
        fn_82BA20F0(self);
        fn_82BA2408(self);
        if ((unsigned char)((self->options->flags >> 15) & 1))
            fn_82BA66C0(self);
        self->exportMode = self->options->exportMode;
        fn_82BA2600(self, arg);
    } else {
        if (self->colorExportInstruction == 0 && self->depthExportInstruction == 0)
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)",
                        "color_export_instruction != 0 || depth_export_instruction != 0",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode"
                        "\\compiler\\ir\\cfg.cpp",
                        0x214);
        fn_82BA40E8(self);
        fn_82BA6EA8(self);
        fn_82BA1C20(self);
        fn_82BA6530(self);
    }
    fn_82BC7030(self);
    fn_82BA0750(self);
    fn_82BCFC38(self);
    if (self->normalizedSwizzles != 0)
        fn_82BA02A8(self->options, "Optimization : Swizzles normalized on %d instructions\n",
                    self->normalizedSwizzles);
}
