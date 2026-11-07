typedef struct {
    unsigned int first;
    unsigned int second;
} Pair_827E1530;

typedef struct {
    unsigned char pad0[0x14];
    unsigned int f14;
    unsigned int f18;
    unsigned char pad1c[4];
    int f20;
} Obj_827E1530;

extern int fn_82517978(Pair_827E1530 *out, unsigned int a, unsigned int b, int c);
extern int fn_827D5610(void *p);
extern int fn_827D7EB8(void *p, Pair_827E1530 *pair);
extern int fn_827D83A0(void *p, Pair_827E1530 *pair);

void fn_827E1530(Obj_827E1530 *param_1, void *param_2)
{
    Pair_827E1530 pair;

    if (param_1->f20 != 0) {
        fn_827D5610(param_2);
        pair.first = 0;
        pair.second = 0;
        fn_82517978(&pair, param_1->f14, param_1->f18, 0);
        fn_827D83A0(param_2, &pair);
    }
    else {
        pair.first = 0;
        pair.second = 0;
        fn_82517978(&pair, param_1->f14, param_1->f18, 0);
        fn_827D7EB8(param_2, &pair);
    }
}
