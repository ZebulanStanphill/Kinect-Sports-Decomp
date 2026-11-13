typedef struct {
    unsigned int a;
    unsigned int b;
} Pair;

typedef struct {
    char pad0[0x8];
    Pair *pairs;
} Inner;

typedef struct {
    char pad0[0xab0];
    Inner *inner;
} Ctx;

typedef struct {
    char pad0[0xa8];
    int idx;
    int count;
} Obj;

typedef struct {
    char pad0[0xc];
    unsigned int f0c;
    unsigned int f10;
    unsigned int f14;
    unsigned int f18;
    unsigned int f1c;
    unsigned int f20;
    unsigned int f24;
    unsigned int f28;
    unsigned int f2c;
    unsigned char f30;
    char pad31[0x7];
    unsigned int f38;
    unsigned int f3c;
} Item;

extern void fn_82BA9020(Item *item, unsigned int delta);

void fn_82BABBE0(Obj *param_1, Item *param_2, int param_3, Ctx *param_4)
{
    Pair *pairs;

    pairs = param_4->inner->pairs;
    param_2->f1c = param_2->f10;
    param_2->f28 = param_2->f3c;
    param_2->f10 = pairs[param_1->idx].a;
    if (param_1->count >= 6) {
        fn_82BA9020(param_2, pairs[param_1->idx].b - param_2->f14);
        param_2->f30 = 1;
        param_2->f2c = param_2->f38;
        param_2->f20 = param_2->f18;
        param_2->f24 = param_2->f0c;
        param_2->f0c = pairs[param_1->idx].b;
    }
}
