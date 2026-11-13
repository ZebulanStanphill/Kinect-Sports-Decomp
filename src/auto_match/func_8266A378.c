typedef struct { int w[3]; } Elem_8266A378;
typedef struct Vector_8266A378 {
    Elem_8266A378 *first;
    Elem_8266A378 *last;
    Elem_8266A378 *end;
    int alval;
} Vector_8266A378;

extern void fn_82BA02A8(Vector_8266A378 *self);
extern void fn_82668E00(Vector_8266A378 *self, Elem_8266A378 *first, Elem_8266A378 *last);
extern void fn_82668E40(int *alval, Elem_8266A378 *p, int count);

void fn_8266A378(Vector_8266A378 *self)
{
    if (self->first != 0) {
        fn_82BA02A8(self);
        fn_82668E00(self, self->first, self->last);
        fn_82668E40(&self->alval, self->first, self->end - self->first);
    }
    self->first = 0;
    self->last = 0;
    self->end = 0;
}
