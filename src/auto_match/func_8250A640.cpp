struct Elem_8250A640 { int v[5]; };
struct Vec_8250A640 { Elem_8250A640 *first; Elem_8250A640 *last; };
struct Less_8250A640 {};

extern "C" void fn_8250AE88(Elem_8250A640 *first, Elem_8250A640 *last, int n, Less_8250A640 pred);

extern "C" void fn_8250A640(Vec_8250A640 *v)
{
    fn_8250AE88(v->first, v->last, v->last - v->first, Less_8250A640());
}
