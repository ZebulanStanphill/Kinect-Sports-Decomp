typedef struct Obj_82706A50 {
    char pad[0xb00];
    unsigned int flags;
} Obj_82706A50;

void fn_82706A50(Obj_82706A50 *self, unsigned char enable)
{
    if (enable)
        self->flags |= 4;
    else
        self->flags &= ~4;
}
