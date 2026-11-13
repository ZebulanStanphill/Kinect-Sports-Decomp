typedef struct Info_82BC3138 {
    int pad0[8];
    int offset;            /* 0x20 */
    int count;             /* 0x24 */

} Info_82BC3138;

typedef struct Compiler_82BC3138 {
    char pad0[0x568];
    void *program;         /* 0x568 */
    char pad56c[0x600 - 0x56c];
    void *object;          /* 0x600 */
} Compiler_82BC3138;

typedef struct Inst_82BC3138 {
    char pad0[0xa8];
    int base;              /* 0xa8 */
    int index;             /* 0xac */
    char padb0[0x3b8 - 0xb0];
    Compiler_82BC3138 *compiler;   /* 0x3b8 */
} Inst_82BC3138;

extern void fn_82B7C800(void);
extern void fn_82B9CF38(void *object, int index, Info_82BC3138 *info, void *program, void *callback, Compiler_82BC3138 *ctx);
extern void fn_82B9D3D8(void *object, int index, void *data, void *program, void *callback, Compiler_82BC3138 *ctx);

void fn_82BC3138(Inst_82BC3138 *self, int *count, int *position, void *data)
{
    Info_82BC3138 info;

    fn_82B9CF38(self->compiler->object, self->index, &info, self->compiler->program, (void *)fn_82B7C800, self->compiler);
    fn_82B9D3D8(self->compiler->object, self->index, data, self->compiler->program, (void *)fn_82B7C800, self->compiler);
    *count = info.count;
    *position = self->base + info.offset / 4;
}
