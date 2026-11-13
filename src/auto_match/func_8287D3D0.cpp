typedef struct Iter_8287D3D0 {
    int ***cont;
    int pad;
    int index;
} Iter_8287D3D0;

typedef struct Pos_8287D3D0 {
    int value;
    int index;
} Pos_8287D3D0;

extern "C" void fn_8287CED8(Pos_8287D3D0 first, Pos_8287D3D0 last);

static __forceinline Pos_8287D3D0 MakePos(Iter_8287D3D0 *it)
{
    Pos_8287D3D0 pos;
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

extern "C" void fn_8287D3D0(Iter_8287D3D0 *first, Iter_8287D3D0 *last)
{
    fn_8287CED8(MakePos(first), MakePos(last));
}
