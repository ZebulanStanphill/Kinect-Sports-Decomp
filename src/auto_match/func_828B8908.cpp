struct Elem_828B8908 { int v[2]; };
struct Vec_828B8908 { int alval; Elem_828B8908 *first; Elem_828B8908 *last; };
struct Less_828B8908 {};

extern "C" void fn_828B81B0(Elem_828B8908 *first, Elem_828B8908 *last, int n, Less_828B8908 pred);

extern "C" void fn_828B8908(Vec_828B8908 *v)
{
    fn_828B81B0(v->first, v->last, v->last - v->first, Less_828B8908());
}
