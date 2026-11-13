extern int fn_82CA9FA0();
extern int fn_82CAA210();
extern int fn_82CAA590();
extern int fn_82F42CC8();

typedef struct FuncSet_82F02720 {
    int (*a)();
    int (*b)();
    int (*c)();
    int (*d)();
} FuncSet_82F02720;

typedef struct Obj_82F02720 {
    char pad[0x808];
    FuncSet_82F02720 set1;
    FuncSet_82F02720 set2;
} Obj_82F02720;

void fn_82F02720(Obj_82F02720 *param_1)
{
    param_1->set1.a = fn_82F42CC8;
    param_1->set1.b = fn_82CA9FA0;
    param_1->set1.c = fn_82CAA210;
    param_1->set1.d = fn_82CAA590;
    param_1->set2.a = param_1->set1.a;
    param_1->set2.b = param_1->set1.b;
    param_1->set2.c = param_1->set1.c;
    param_1->set2.d = param_1->set1.d;
}
