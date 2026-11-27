#include <string.h>

typedef struct Value_82B5DFD0 {
    int pad0;
    int kind; /* 0x04: 0xb */
} Value_82B5DFD0;

typedef struct Item_82B5DFD0 {
    int pad0;
    int kind; /* 0x04 */
    char pad8[0x10];
    Value_82B5DFD0 *value; /* 0x18 */
} Item_82B5DFD0;

typedef struct Register_82B5DFD0 {
    unsigned int pad0 : 29;
    unsigned int state : 3; /* 0x00 */
    unsigned int pad4 : 29; /* 0x04 */
    unsigned int builtin : 1;
    unsigned int pad4b : 2;
    char pad8[0x20];
} Register_82B5DFD0;

typedef struct Compiler_82B5DFD0 {
    char pad0[0xc];
    Register_82B5DFD0 *registers; /* 0x0c */
    unsigned int current;         /* 0x10 */
    unsigned int registerCount;   /* 0x14 */
    char pad18[0x10];
    unsigned int dirty; /* 0x28 */
    char pad2c[0x22c];
    unsigned int firstBuiltin; /* 0x258 */
} Compiler_82B5DFD0;

extern const char *lbl_83160E20[12];
extern void *fn_82AE60E8(Compiler_82B5DFD0 *ctx, unsigned int size, int flags);
extern void fn_82ABE5F8(Compiler_82B5DFD0 *ctx, void *memory, unsigned int size, int tag);
extern Item_82B5DFD0 *fn_82B4A7C0(Compiler_82B5DFD0 *ctx, const char *name, unsigned int index, int a, int b,
                                  int c, int d, int e);
extern void fn_82B54048(Compiler_82B5DFD0 *ctx, unsigned int index, Item_82B5DFD0 *item,
                        Value_82B5DFD0 *value, int a, int b);
extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);

static __forceinline Value_82B5DFD0 *AsValue_82B5DFD0(void *ctx, Value_82B5DFD0 *v)
{
    if (v == 0 || v->kind != 0xb) {
        fn_82AA66A8(ctx, 0x12c1);
    }
    return v;
}

void fn_82B5DFD0(Compiler_82B5DFD0 *ctx)
{
    Register_82B5DFD0 *registers;
    unsigned int i;

    ctx->firstBuiltin = ctx->registerCount;
    registers =
        (Register_82B5DFD0 *)fn_82AE60E8(ctx, (ctx->registerCount + 12) * sizeof(Register_82B5DFD0), 0);
    if (ctx->registers != 0) {
        memcpy(registers, ctx->registers, ctx->registerCount * sizeof(Register_82B5DFD0));
        fn_82ABE5F8(ctx, ctx->registers, ctx->registerCount * sizeof(Register_82B5DFD0), 0);
    }
    ctx->registers = registers;
    ctx->registerCount += 12;
    for (i = 0; i < 12; i++) {
        unsigned int index = ctx->firstBuiltin + i;
        Item_82B5DFD0 *item = fn_82B4A7C0(ctx, lbl_83160E20[i], index, 1, 0xc, 1, 4, 0);

        fn_82B54048(ctx, index, item, AsValue_82B5DFD0(ctx, item->value), 3, 0);
        if (i <= 5) {
            ctx->registers[index].state = 4;
        } else {
            ctx->registers[index].state = 2;
        }
        ctx->registers[index].builtin = 1;
    }
    ctx->dirty |= 0x40000;
}
