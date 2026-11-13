typedef struct Obj_82A59B38 {
    char pad[0x23c];
    int state;
} Obj_82A59B38;

void fn_82A59B38(Obj_82A59B38 *self, int force)
{
    if (force)
        self->state = 2;
    else if (self->state == 0)
        self->state = 1;
}
