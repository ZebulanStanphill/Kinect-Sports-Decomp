typedef struct Inst_82BA1A40 Inst_82BA1A40;
struct Inst_82BA1A40 {
    char pad0[8];
    Inst_82BA1A40 *next;
    char padc[8];
    int count;
    char pad18[8];
    Inst_82BA1A40 *src[13];
    int type[13];
    char pad88[0x5c];
    unsigned int flags;
    char pade8[0x2cc];
    void *block;
};

typedef struct Block_82BA1A40 Block_82BA1A40;
struct Block_82BA1A40 {
    char pad0[8];
    Block_82BA1A40 *next;
    char padc[0x10];
    Inst_82BA1A40 *insts;
};

typedef struct Context_82BA1A40 {
    char pad0[0x5e4];
    int pending;
} Context_82BA1A40;

typedef struct Compiler_82BA1A40 {
    char pad0[0xc];
    Context_82BA1A40 *ctx;
    char pad10[0x78];
    Block_82BA1A40 *blocks;
    char pad8c[0x20];
    void *regs;
} Compiler_82BA1A40;

extern void fn_82AB15D0(int level, const char *format, ...);
extern Inst_82BA1A40 *fn_82BC24F0(int op, Context_82BA1A40 *ctx);
extern Inst_82BA1A40 *fn_82BAFE48(void *regs, int kind, int index);
extern void fn_82BC2958(Inst_82BA1A40 *inst, int index, Inst_82BA1A40 *value);
extern void fn_82BC0DD8(Inst_82BA1A40 *src, Inst_82BA1A40 *inst, Inst_82BA1A40 *mov);
extern void fn_82BC5628(void *block, Inst_82BA1A40 *inst, Inst_82BA1A40 *mov);

void fn_82BA1A40(Compiler_82BA1A40 *self)
{
    Block_82BA1A40 *block;
    Inst_82BA1A40 *inst;

    for (block = self->blocks; (int)block->next != 0; block = block->next) {
        for (inst = block->insts; (int)inst->next != 0; inst = inst->next) {
            int count;
            int external_const_count;
            int internal_const_count;
            int i;
            int use_internal;

            if ((inst->flags & 1) == 0)
                continue;
            count = inst->count;
            internal_const_count = 0;
            external_const_count = 0;
            if (count <= 0)
                continue;
            for (i = 0; i < count; i++) {
                int type = inst->type[i];
                if (type == 1 || type == 2 || type == 3)
                    external_const_count++;
                else if (type == 0xb)
                    internal_const_count++;
            }
            if (external_const_count == 0 || internal_const_count == 0)
                continue;
            use_internal = external_const_count <= internal_const_count;
            if (!(1 == internal_const_count || 1 == external_const_count))
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "1 == internal_const_count || 1 == external_const_count",
                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp", 0x77b);
            for (i = 0; i < count; i++) {
                int type = inst->type[i];
                if (((type == 1 || type == 2 || type == 3) && (unsigned char)use_internal != 0) || (type == 0xb && (unsigned char)use_internal == 0)) {
                    Inst_82BA1A40 *mov = fn_82BC24F0(0x31, self->ctx);
                    Inst_82BA1A40 *src = inst->src[i];
                    Inst_82BA1A40 *reg;
                    Context_82BA1A40 *ctx = self->ctx;
                    reg = fn_82BAFE48(self->regs, 0, --ctx->pending);
                    fn_82BC2958(mov, 0, reg);
                    fn_82BC2958(mov, 1, src);
                    fn_82BC0DD8(src, inst, mov);
                    fn_82BC2958(inst, i + 1, reg);
                    fn_82BC5628(inst->block, inst, mov);
                }
            }
        }
    }
}
