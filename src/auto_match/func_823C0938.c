typedef struct Info_823C0938 {
    char pad0[0x40];
    unsigned int kind;
} Info_823C0938;

typedef struct Obj_823C0938 {
    char pad0[0xa0];
    Info_823C0938 *info;
} Obj_823C0938;

extern int fn_82358E70(Obj_823C0938 *self, int *a, int *b);
extern void fn_82359108(Obj_823C0938 *self, int a, int b, float f, void *arg);
extern void fn_82359200(Obj_823C0938 *self, float f, void *arg);

void fn_823C0938(Obj_823C0938 *self, void *arg)
{
    int a;
    int b;

    if ((int)self->info != 0 && self->info->kind == 1) {
        fn_82359200(self, 0.0f, arg);
    } else {
        a = 0;
        b = 0;
        fn_82358E70(self, &a, &b);
        fn_82359108(self, a, b, 0.0f, arg);
    }
}
