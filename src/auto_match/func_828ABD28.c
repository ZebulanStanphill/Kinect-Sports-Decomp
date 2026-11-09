typedef struct Object_828ABD28 { void *vtable; void *inner; } Object_828ABD28;
extern void fn_828B5C88(void *a, void *b, void *c);

void fn_828ABD28(Object_828ABD28 *self, void *b, void *a)
{
    fn_828B5C88(a, self->inner, b);
}
