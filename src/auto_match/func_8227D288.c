typedef struct Elem_8227D288 { unsigned char data[0xdc]; } Elem_8227D288;
typedef struct Pred_8227D288 { int state; } Pred_8227D288;

extern unsigned char fn_8227C270(Pred_8227D288 *pred, Elem_8227D288 *a, Elem_8227D288 *b);

static __forceinline void Swap(Elem_8227D288 *a, Elem_8227D288 *b)
{
    Elem_8227D288 t = *a;
    *a = *b;
    *b = t;
}
void fn_8227D288(Elem_8227D288 *first, Elem_8227D288 *mid, Elem_8227D288 *last, Pred_8227D288 pred)
{
    if (fn_8227C270(&pred, mid, first)) {
        Swap(mid, first);
    }
    if (fn_8227C270(&pred, last, mid)) {
        Swap(last, mid);
    }
    if (fn_8227C270(&pred, mid, first)) {
        Swap(mid, first);
    }
}
