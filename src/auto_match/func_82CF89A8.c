typedef struct Pair_82CF89A8 {
    unsigned int first;
    int second;
    unsigned int w2;
    unsigned int w3;
    unsigned int w4;
    unsigned int w5;
} Pair_82CF89A8;

typedef void (*VFn_82CF89A8)(int *self, Pair_82CF89A8 *out);

void fn_82CF89A8(int *param_1)
{
    Pair_82CF89A8 p;

    p.first = 0;
    p.second = 0;
    p.w2 = 0;
    p.w3 = 0;
    p.w4 = 0;
    p.w5 = 0;
    (*(VFn_82CF89A8 *)(*param_1 + 0x28))(param_1, &p);
    param_1[9] = p.second;
}
