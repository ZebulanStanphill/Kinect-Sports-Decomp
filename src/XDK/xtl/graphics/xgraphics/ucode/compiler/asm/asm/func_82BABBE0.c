typedef unsigned char U8;
typedef unsigned int U32;

typedef struct {
    U32 a;
    U32 b;
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
    U32 f0c;
    U32 f10;
    U32 f14;
    U32 f18;
    U32 f1c;
    U32 f20;
    U32 f24;
    U32 f28;
    U32 f2c;
    U8 f30;
    char pad31[0x7];
    U32 f38;
    U32 f3c;
} Item;

extern void fn_82BA9020(Item *item, U32 delta);

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
