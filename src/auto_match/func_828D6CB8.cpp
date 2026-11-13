typedef struct Iter_828D6CB8 {
    int ***cont;
    int pad;
    int index;
} Iter_828D6CB8;

typedef struct Pos_828D6CB8 {
    int value;
    int index;
} Pos_828D6CB8;

struct Pred_828D6CB8 {
};

extern "C" void fn_828D5DC0(Pos_828D6CB8 first, Pos_828D6CB8 last, Pred_828D6CB8 pred);

static __forceinline Pos_828D6CB8 MakePos(Iter_828D6CB8 *it)
{
    Pos_828D6CB8 pos;
    int *node;
    int index;
    int value;
    int ***cont = it->cont;

    node = 0;
    if (cont != 0 && *cont != 0)
        node = **cont;
    index = it->index;
    if (node == 0)
        value = 0;
    else
        value = *node;
    pos.value = value;
    pos.index = index;
    return pos;
}

static __forceinline Pred_828D6CB8 IterCat(Iter_828D6CB8 *it)
{
    Pred_828D6CB8 tag;
    return tag;
}

extern "C" void fn_828D6CB8(Iter_828D6CB8 *first, Iter_828D6CB8 *last)
{
    fn_828D5DC0(MakePos(first), MakePos(last), IterCat(first));
}
