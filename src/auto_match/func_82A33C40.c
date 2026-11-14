typedef struct Obj_82A33C40 {
    unsigned short id;
    void *target;
} Obj_82A33C40;

extern void fn_82A37170(void *target, unsigned int id);

void fn_82A33C40(Obj_82A33C40 *self)
{
    fn_82A37170(self->target, self->id);
}
