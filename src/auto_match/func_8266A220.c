typedef struct Vector_8266A220 {
    int *first;
    int *last;
    int *end;
    int alval;
} Vector_8266A220;

extern void fn_82BA02A8(Vector_8266A220 *self);
extern void fn_82668DC0(Vector_8266A220 *self, int *first, int *last);
extern void fn_82668E40(int *alval, int *p, int count);

void fn_8266A220(Vector_8266A220 *self)
{
    if (self->first != 0) {
        fn_82BA02A8(self);
        fn_82668DC0(self, self->first, self->last);
        fn_82668E40(&self->alval, self->first, self->end - self->first);
    }
    self->first = 0;
    self->last = 0;
    self->end = 0;
}
