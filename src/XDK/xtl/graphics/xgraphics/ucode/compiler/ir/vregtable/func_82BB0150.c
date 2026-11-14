typedef struct Swizzle_82BB0150 {
    unsigned int w0;
    unsigned int w1;
} Swizzle_82BB0150;

extern const Swizzle_82BB0150 lbl_820E35F8;

extern void fn_82BAF628(void *self, int count, void *reg, Swizzle_82BB0150 a, Swizzle_82BB0150 b, Swizzle_82BB0150 c);

void fn_82BB0150(void *self, void *reg)
{
    fn_82BAF628(self, 1, reg, lbl_820E35F8, lbl_820E35F8, lbl_820E35F8);
}
