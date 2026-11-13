typedef struct Inst_82BA1980 {
    unsigned char pad0[0x38];
    int v38;
    unsigned char pad3c[0x50 - 0x3c];
    int opcode;
} Inst_82BA1980;

typedef struct Self_82BA1980 {
    unsigned char pad0[0xc];
    int vc;
    unsigned char pad10[0xa8 - 0x10];
    int va8;
} Self_82BA1980;

extern void fn_82AB15D0(int level, const char *fmt, ...);
extern Inst_82BA1980 *fn_82BC24F0(int kind, int ctx);
extern void fn_82BC34D8(Inst_82BA1980 *o, Self_82BA1980 *s, int mode,
                        float a, float b, float c, float d);
extern void fn_82BA0C40(Self_82BA1980 *s, Inst_82BA1980 *o);
extern void fn_82BC5538(int a, Inst_82BA1980 *o);
extern unsigned char fn_82BC2580(Inst_82BA1980 *o);

void fn_82BA1980(Self_82BA1980 *self)
{
    Inst_82BA1980 *mov = fn_82BC24F0(0x31, self->vc);
    mov->v38 = 0;
    mov->opcode = 0x17;
    fn_82BC34D8(mov, self, 1, 0.0f, 0.0f, 0.0f, 1.0f);
    fn_82BA0C40(self, mov);
    fn_82BC5538(self->va8, mov);
    if (!fn_82BC2580(mov)) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "mov->Validate()", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp", 0x5a5);
    }
}
