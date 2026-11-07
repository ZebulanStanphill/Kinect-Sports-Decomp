typedef struct Iter_8282BA08 {
    int *p;
    unsigned int v;
    char done;
} Iter_8282BA08;

typedef struct Args_8282BA08 {
    int pad[4];
    int *p;
    int a;
    int b;
    unsigned int v;
} Args_8282BA08;

typedef struct Node_8282BA08 {
    int pad[4];
    int f10;
    unsigned int f14;
    int *f18;
    unsigned int f1c;
    unsigned int f20;
    unsigned int f24;
} Node_8282BA08;

extern void fn_8282AF88(void);
extern void fn_8282B948(void);
extern int fn_82822F60(int list, Node_8282BA08 *node, void *cb, Node_8282BA08 **pnode);
extern void fn_828233A8(int list, void **out, void *cb, Args_8282BA08 *args);
extern Node_8282BA08 *fn_828252E8(int ctx, int size);
extern void fn_828299A8(Iter_8282BA08 *it, int ctx, int **out);

void fn_8282BA08(int param_1, int param_2, int param_3, unsigned int param_4,
                 unsigned int param_5, unsigned int param_6)
{
    Node_8282BA08 *node;
    int *r1;
    int *r2;
    void *found;
    Iter_8282BA08 it;
    Args_8282BA08 args;
    int *p;
    unsigned int v;

    if (param_4 != 1) {
        p = (int *)(param_2 + param_3);
        it.p = p;
        it.v = 0;
        fn_828299A8(&it, param_1, &r1);
        v = it.v;
        if (it.done == 0) {
            if (param_4 == 4) {
                it.p = (int *)*p;
                if (it.p != 0) {
                    fn_828299A8(&it, param_1, &r2);
                    if (r2 != 0) {
                        args.p = p;
                        args.v = v;
                        args.a = r1[3];
                        args.b = r2[3];
                        fn_828233A8(param_1 + 0x344, &found, (void *)fn_8282AF88, &args);
                        if (found != 0) {
                            return;
                        }
                    }
                }
            }
            node = fn_828252E8(param_1, 0x28);
            node->f18 = p;
            node->f20 = param_4;
            node->f10 = r1[3];
            node->f14 = v;
            node->f1c = param_6;
            node->f24 = param_5;
            if (fn_82822F60(param_1 + 0x318, node, (void *)fn_8282B948, &node) != 0) {
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            }
        }
    }
}
