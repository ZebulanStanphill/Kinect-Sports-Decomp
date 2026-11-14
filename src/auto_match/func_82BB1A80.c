typedef struct Swizzle_82BB1A80 {
    unsigned int w0;
    unsigned int w1;
} Swizzle_82BB1A80;

extern const Swizzle_82BB1A80 lbl_820E35F8;

extern void fn_82BAFF00(void *self, int count, void *reg, Swizzle_82BB1A80 a, Swizzle_82BB1A80 b, Swizzle_82BB1A80 c);

void fn_82BB1A80(void *self, void *reg)
{
    fn_82BAFF00(self, 1, reg, lbl_820E35F8, lbl_820E35F8, lbl_820E35F8);
}
