typedef struct Iter_8287D470 {
    int ***cont;
    int pad;
    int index;
} Iter_8287D470;

typedef struct Pos_8287D470 {
    int value;
    int index;
} Pos_8287D470;

struct Pred_8287D470 {
};

extern "C" void fn_8287D120(Pos_8287D470 first, Pos_8287D470 last, Pred_8287D470 pred);

static __forceinline Pos_8287D470 MakePos(Iter_8287D470 *it)
{
    Pos_8287D470 pos;
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

static __forceinline Pred_8287D470 IterCat(Iter_8287D470 *it)
{
    Pred_8287D470 tag;
    return tag;
}

extern "C" void fn_8287D470(Iter_8287D470 *first, Iter_8287D470 *last)
{
    fn_8287D120(MakePos(first), MakePos(last), IterCat(first));
}
