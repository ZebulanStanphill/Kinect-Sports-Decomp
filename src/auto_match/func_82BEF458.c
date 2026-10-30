typedef struct Sub_82BEF458 {
    char pad0[0x14];
    int f14;
    unsigned int f18;
    unsigned int f1c;
    unsigned int f20;
} Sub_82BEF458;
typedef struct A_82BEF458 {
    char pad0[0x4c];
    Sub_82BEF458 *sub;
    unsigned int f50;
} A_82BEF458;
typedef struct B_82BEF458 {
    char pad0[0xd8];
    unsigned short sd8;
} B_82BEF458;
typedef struct Obj_82BEF458 {
    char pad0[0x10];
    int kind;
    int f14;
    int f18;
    char pad1c[0x2c - 0x1c];
    A_82BEF458 *a;
    char pad30[0x34 - 0x30];
    int f34;
    int pad38;
    B_82BEF458 *b;
    char pad40[0x58 - 0x40];
    unsigned int f58;
} Obj_82BEF458;
extern void fn_82BEB230(int a, int b);

int fn_82BEF458(Obj_82BEF458 *param_1)
{
    A_82BEF458 *a;
    Sub_82BEF458 *sub;
    int kind;
    int r;

    if (param_1->f34 == 2 || (a = param_1->a) == 0 || param_1->b == 0 || param_1->b->sd8 == 0) {
        return 0;
    }
    kind = param_1->kind;
    r = 0;
    sub = a->sub;
    if (kind == 2) {
        if (param_1->f58 > 1 && sub->f1c > a->f50) {
            r = 1;
        }
    }
    if (param_1->kind == 2 || param_1->kind == 0x11 || param_1->kind == 0x12 || param_1->kind == 0x13) {
        if ((param_1->f58 > 1 || param_1->f34 == 0x10) && sub != 0 && sub->f18 != 0 && sub->f20 > sub->f18) {
            fn_82BEB230(param_1->f18, sub->f14);
            if (param_1->kind == 2) {
                r = 1;
            }
        }
    }
    if (r != 0) {
        param_1->kind = 0x14;
    }
    return r;
}
