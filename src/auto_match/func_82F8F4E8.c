typedef struct Vector_82F8F4E8 {
    int alval;
    int *first;
    int *last;
    int *end;
} Vector_82F8F4E8;

extern void fn_82F8F670(Vector_82F8F4E8 *self, int *first, int *last);
extern void fn_82F92810(Vector_82F8F4E8 *self, int *p, int count);

void fn_82F8F4E8(Vector_82F8F4E8 *self)
{
    if (self->first != 0) {
        fn_82F8F670(self, self->first, self->last);
        fn_82F92810(self, self->first, self->end - self->first);
    }
    self->first = 0;
    self->last = 0;
    self->end = 0;
}
