typedef struct Obj_8265D410 {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
} Obj_8265D410;

extern void fn_8265D528(int *first, unsigned int count, int val, int *alloc);

int *fn_8265D410(Obj_8265D410 *self, int *first, unsigned int count, int val)
{
    fn_8265D528(first, count, val, &self->field_c);
    return first + count;
}
