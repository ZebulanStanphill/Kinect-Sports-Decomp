typedef struct Iter_828D7B88 {
    int ***cont;
    int pad;
    unsigned int index;
} Iter_828D7B88;

typedef struct Pos_828D7B88 {
    int value;
    unsigned int index;
} Pos_828D7B88;

extern "C" void fn_828D7848(Pos_828D7B88 first, Pos_828D7B88 last, int count);

static __forceinline Pos_828D7B88 MakePos(Iter_828D7B88 *it)
{
    Pos_828D7B88 pos;
    int *node;
    unsigned int index;
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

static __forceinline int Distance(Iter_828D7B88 *last, Iter_828D7B88 *first)
{
    return first->index <= last->index ? last->index - first->index
                                        : -(int)(first->index - last->index);
}

extern "C" void fn_828D7B88(Iter_828D7B88 *first, Iter_828D7B88 *last)
{
    int count = Distance(last, first);
    fn_828D7848(MakePos(first), MakePos(last), count);
}
