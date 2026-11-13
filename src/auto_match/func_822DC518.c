typedef struct Elem_822DC518 { int v[5]; } Elem_822DC518;
typedef struct Range_822DC518 { Elem_822DC518 *first; Elem_822DC518 *last; } Range_822DC518;
typedef struct Pred_822DC518 { int a; int b; } Pred_822DC518;
typedef struct Obj_822DC518 { int pad0; Pred_822DC518 pred; } Obj_822DC518;

extern void fn_822DB878(Elem_822DC518 *first, Elem_822DC518 *last, int count, Pred_822DC518 pred);

void fn_822DC518(Obj_822DC518 *self, Range_822DC518 *r)
{
    Pred_822DC518 p;
    p.a = self->pred.a;
    p.b = self->pred.b;
    fn_822DB878(r->first, r->last, r->last - r->first, p);
}
