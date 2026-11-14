typedef struct Reg_82BB1AA0 {
    int index;
    int flags;
} Reg_82BB1AA0;

extern const Reg_82BB1AA0 lbl_820E35F8;
extern int fn_82BAFF00(void *self, int count, Reg_82BB1AA0 a, Reg_82BB1AA0 b, Reg_82BB1AA0 c, Reg_82BB1AA0 d);

int fn_82BB1AA0(void *self, Reg_82BB1AA0 a, Reg_82BB1AA0 b)
{
    return fn_82BAFF00(self, 2, a, b, lbl_820E35F8, lbl_820E35F8);
}
