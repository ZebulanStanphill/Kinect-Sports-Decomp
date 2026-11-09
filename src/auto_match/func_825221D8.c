typedef struct Obj_825221D8 {
    char pad[0x110];
    int f110;
} Obj_825221D8;

typedef struct Owner_825221D8 {
    int f0;
    Obj_825221D8 **f4;
} Owner_825221D8;

extern void fn_825220C8(Owner_825221D8 *param_1);

void fn_825221D8(Owner_825221D8 *param_1)
{
    (*param_1->f4)->f110 = 1;
    fn_825220C8(param_1);
}
