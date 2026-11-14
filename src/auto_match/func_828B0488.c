typedef struct Obj_828B0488 {
    char pad[0x10];
    void *b;
    void *a;
} Obj_828B0488;

extern void fn_8289F350(void *a, void *b);

void fn_828B0488(Obj_828B0488 *self)
{
    fn_8289F350(self->a, self->b);
}
