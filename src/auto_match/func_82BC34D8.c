typedef struct Operand_82BC34D8 {
    int kind;              /* 0 = float, 1 = int (see fn_82BC3530) */
    union { float f; int i; } value;
} Operand_82BC34D8;
extern void fn_82BC29D0(void *a, void *b, void *c, Operand_82BC34D8 x, Operand_82BC34D8 y,
                        Operand_82BC34D8 z, Operand_82BC34D8 w);

void fn_82BC34D8(void *a, void *b, void *c, float x, float y, float z, float w)
{
    Operand_82BC34D8 ox, oy, oz, ow;
    ox.kind = 0;
    ox.value.f = x;
    oy.kind = 0;
    oy.value.f = y;
    oz.kind = 0;
    oz.value.f = z;
    ow.kind = 0;
    ow.value.f = w;
    fn_82BC29D0(a, b, c, ox, oy, oz, ow);
}
