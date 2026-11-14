typedef struct Iter_827E3D48 {
    void *node;
} Iter_827E3D48;

typedef struct Obj_827E3D48 {
    int f0;
    void *head;
} Obj_827E3D48;

extern void fn_827E40D0(void **link, Iter_827E3D48 where, void *arg);

void fn_827E3D48(Obj_827E3D48 *self, void *arg)
{
    Iter_827E3D48 where;

    where.node = self->head;
    fn_827E40D0(&self->head, where, arg);
}
