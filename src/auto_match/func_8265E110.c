typedef struct Vector_8265E110 {
    void *first;
    void *last;
    void *end;
} Vector_8265E110;

Vector_8265E110 *fn_8265E110(Vector_8265E110 *self, unsigned char alloc)
{
    self->first = 0;
    self->last = 0;
    self->end = 0;
    return self;
}
