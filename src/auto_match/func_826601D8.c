typedef struct { int w[8]; } Elem_826601D8;
typedef struct Vector_826601D8 {
    Elem_826601D8 *first;
    Elem_826601D8 *last;
    Elem_826601D8 *end;
    int alval;
} Vector_826601D8;

extern void fn_82BA02A8(Vector_826601D8 *self);
extern void fn_82660790(Vector_826601D8 *self, Elem_826601D8 *first, Elem_826601D8 *last);
extern void fn_82660558(int *alval, Elem_826601D8 *p, int count);

void fn_826601D8(Vector_826601D8 *self)
{
    if (self->first != 0) {
        fn_82BA02A8(self);
        fn_82660790(self, self->first, self->last);
        fn_82660558(&self->alval, self->first, self->end - self->first);
    }
    self->first = 0;
    self->last = 0;
    self->end = 0;
}
