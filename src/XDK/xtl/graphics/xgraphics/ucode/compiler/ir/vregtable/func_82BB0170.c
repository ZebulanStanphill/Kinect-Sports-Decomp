typedef struct Reg_82BB0170 {
    int index;
    int flags;
} Reg_82BB0170;

extern const Reg_82BB0170 lbl_820E35F8;
extern int fn_82BAF628(void *self, int count, Reg_82BB0170 a, Reg_82BB0170 b, Reg_82BB0170 c, Reg_82BB0170 d);

int fn_82BB0170(void *self, Reg_82BB0170 a, Reg_82BB0170 b)
{
    return fn_82BAF628(self, 2, a, b, lbl_820E35F8, lbl_820E35F8);
}
