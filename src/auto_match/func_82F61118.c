typedef struct Obj_82F61118 {
    int pad0;
    unsigned int count;
    int pad8;
    unsigned int items[6];
    unsigned int f24;
    unsigned int f28;
    int pad2c[5];
    unsigned int f40;
} Obj_82F61118;
extern void fn_82A1E810(unsigned int a);
extern unsigned int fn_82A1E650(unsigned int a, int b);
extern void fn_82A1E658(unsigned int a);
extern void fn_82A1E300(unsigned int a);

void fn_82F61118(Obj_82F61118 *param_1)
{
    unsigned char again;
    unsigned int i;
    unsigned int *p;
    unsigned int r;

    if (param_1->f40 != 0 && param_1->count > 0 && param_1->f24 != 0 && param_1->f28 != 0) {
        fn_82A1E810(param_1->f28);
        do {
            fn_82A1E810(param_1->f24);
            again = 0;
            i = 0;
            if (param_1->count > 0) {
                p = param_1->items;
                do {
                    if (*p != 0) {
                        r = fn_82A1E650(*p, 1);
                        if (r == 0) {
                            fn_82A1E658(*p);
                            *p = 0;
                        } else {
                            again = 1;
                            fn_82A1E300(r);
                        }
                    }
                    i++;
                    p++;
                } while (i < param_1->count);
            }
        } while (again);
    }
}
